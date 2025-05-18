int d;
bool valid_user(char *user, char *pass) {
    char line[700];
    char *token;
    int iteration=0;    
    rewind(fptr);
    while (fgets(line, sizeof(line), fptr)) {
        token=strtok(line, "|");
        while (token != 0) {
        if (strcmp(token, user)==0 && iteration%2==0) {
            token=strtok(0, "|");
            if (strcmp(token, pass)==0) {return true;}
            else if (ch) {
                demo();
            }
            else if (ch2) {
                demo2();
            }
            else {
                demo3();
            }        
        }
        token = strtok(0, "|");
        iteration++;
        d=iteration;
        }

    }
    rewind(fptr);
    return false;
}

bool user_avail(char *user) {
    char line[700];
    char *token;
    rewind(fptr);
    int iter=0;
    while (fgets(line, sizeof(line), fptr)) {
        token=strtok(line, "|");
        while (token != 0) {
        if (strcmp(token, user)==0 && iter%2==0) return true;
        token = strtok(0, "|");
        iter++;
        }
    }
    rewind(fptr);
    return false;
}

void *get_details(int d) {
    FILE *g=fopen("udetails.bin", "rb");
    char line[700];
    char *token;
    rewind(g);
    int iter=1;
    while (fgets(line, sizeof(line), g)) {
        token=strtok(line, "|");
        while (token != 0) {
        if (iter==d) break;
        token = strtok(0, "|");
        iter++;
        }
    }
    fclose(g);
    
}