#include <bits/stdc++.h>
using namespace std;

void tlg() {
	int n, p1, p2, i, lead = 0, win;
	cin >> n;
	for (i = 0; i < n; ++i) {
		cin >> p1 >> p2;
		if (p1 - p2 > lead) {
			lead = p1 - p2;
			win = 1;
		} else if (p2 - p1 > lead) {
			lead = p2 - p1;
			win = 2;
		}
	}
	if (win == 1) 
		cout << "1 " << lead << endl;
	else if (win == 2)
		cout << "2 " << lead << endl;
}

int main() {
	tlg();
	return 0;
}