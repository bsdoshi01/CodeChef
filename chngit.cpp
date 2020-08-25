#include <bits/stdc++.h>
using namespace std;

void chngit() {
	int n, max = 0, count = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) 
		cin >> a[i];
	for (int i = 0; i < n; ++i) {
		count = 0;
		for (int j = i + 1; j < n; ++j) 
			count = (a[i] == a[j]) ? count + 1 : count;
		max = (count > max) ? count : max;
	}
	cout << (n - (max + 1)) << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) 
		chngit();
	return 0;
}