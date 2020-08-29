#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	(n >= 1 && n <= 50) ? cout << "100" << endl : (n >= 51 && n <= 100) ? cout << "50" << endl : cout << "0" << endl;
}

int main() {
	solve();
	return 0;
}