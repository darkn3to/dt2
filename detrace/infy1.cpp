#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int e, n;	
	cout << "Enter the total energy: " ;
	cin >> e;
	cout << "Enter the number of exercises: ";
	cin >> n;
	int x, c=0;
	vector<int> v;
	while (n-->0) {
		cin >> x;
		v.push_back(x);	
	}
	sort(v.rbegin(), v.rend());
	x = 0;
	for (auto it:v) {
		if (x < e) {
			x+=it; ++c;
			if (x >= e) {
				cout << "Minimum Excercises: " << c << endl;
				exit(0);
			}
			x += it;
			++c;
			if (x >= e) {
				cout << "Minimum Excercises: " << c << endl;
				exit(0);
			}
		}
	}
	cout << "Minimum Excercises: " << -1 << endl;
	return 0;
}
