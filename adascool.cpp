#include <bits/stdc++.h>
using namespace std;

void adascool() {
	int n, m;
	cin >> n >> m;
	((m * n) % 2 == 0) ? cout << "YES" << endl : cout << "NO" << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) 
		adascool();
	return 0;
}