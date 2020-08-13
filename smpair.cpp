#include <bits/stdc++.h>
using namespace std;

void smpair() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) 
		cin >> a[i];
	sort(a, a+n);
	cout << a[0] + a[1] << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		smpair();
	}
	return 0;
}