#include <bits/stdc++.h>
using namespace std;

void kttable() {
	int n, i, count = 0;
	cin >> n;
	long a[n+1], b[n];
	a[0] = 0;
	for (i = 1; i < n+1; ++i)
		cin >> a[i];
	for (i = 0; i < n; ++i) {
		cin >> b[i];
		count = ((a[i+1] - a[i]) >= b[i]) ? count + 1 : count;
	}
	cout << count << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) 
		kttable();
	return 0;
}