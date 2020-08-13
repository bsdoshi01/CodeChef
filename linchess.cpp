#include <bits/stdc++.h>
using namespace std;

#define ll long long

void linchess() {
	int n, ans = -1;
	ll k;
	cin >> n >> k;
	ll p[k];
	for (int i = 0; i < k; i++) {
		cin >> p[i];
		if (ans == -1) {
			ans = (k % p[i] == 0) ? p[i] : ans;
		} else {
			ans = (k % p[i] == 0 && ((k % p[i]) < (k % ans))) ? p[i] : ans;
		}
	}
	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		linchess();
	}
	return 0;
}