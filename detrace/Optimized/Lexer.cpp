#include "Moore.hpp"
#include <chrono>
#include <fstream>
#include <vector>

std::pair<std::string, std::pair<std::string, std::string>> get_num(std::ifstream &fin) {
    std::string num = "";
    std::string type = "DECIMAL";
    char ch = fin.get();
    num += ch;
    ch = fin.peek();
    
    if (ch == 'x' || ch == 'X') {
        type = "HEXADECIMAL_LITREAL";
        num += ch;
        fin.get();
    } else if (ch == 'b' || ch == 'B') {
        type = "BINARY_LITREAL";
        num += ch;
        fin.get();
    }
    
    while (true) {
        ch = fin.peek();
        if ((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'E') || (ch >= 'a' && ch <= 'e')) {
            num += ch;
            fin.get();
        } else {
            break;
        }
    }
    return {num, {"NUMBER", type}};
}

void processFile(const std::string &inputFile, const std::string &outputFile) {
    auto start = std::chrono::high_resolution_clock::now();
    Trie* Moore = new Trie();
    
    std::ifstream fin(inputFile);
    std::ofstream fout(outputFile);
    if (!fin.is_open() || !fout.is_open()) {
        std::cerr << "Error opening file: " << inputFile << " or " << outputFile << std::endl;
        return;
    }

    char ch;
    while (true) {
        ch = fin.peek();
        if (ch == EOF) break;
        if (ch == ' ' || isEscapeSequence(ch)) { 
            fin.get(); 
            continue; 
        }
        
        std::pair<std::string, std::pair<std::string, std::string>> tokenPair;
        
        if (ch >= '0' && ch <= '9')
            tokenPair = get_num(fin);
        else
            tokenPair = Moore->search(fin);
                
        std::string tokenStr = tokenPair.first;
        std::string output = tokenPair.second.first;
        std::string type = tokenPair.second.second;
        
        fout << output << " ";
    }
    
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;
    
    std::cout << "Processed " << inputFile << " in " << elapsed.count() << " seconds" << std::endl;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <input_file1> <input_file2> ... <input_fileN>" << std::endl;
        return 1;
    }

    for (int i = 1; i < argc; ++i) {
        std::string inputFile = argv[i];
        std::string outputFile = "Output_" + std::to_string(i) + ".txt";
        processFile(inputFile, outputFile);
    }

    return 0;
}