#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, max = 0;
	cin >> n;
	int a[n], b[n];
	for (int i = 0; i < n; ++i) 
		cin >> a[i];
	for (int i = 0; i < n; ++i) {
		cin >> b[i];
		max = (max < (a[i]*20 - b[i]*10)) ? a[i]*20 - b[i]*10 : max;
	}
	cout << max << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) 
		solve();
	return 0;
}