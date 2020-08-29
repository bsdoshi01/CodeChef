#include <bits/stdc++.h>
using namespace std;

void chn15a() {
	int n, k, ans = 0, a;
	cin >> n >> k;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		ans = ((a + k) % 7 == 0) ? ans + 1 : ans;
	}
	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) 
		chn15a();
	return 0;
}