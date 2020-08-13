#include <bits/stdc++.h>
using namespace std;

void lecandy() {
	int n;
	long c, sum = 0;
	cin >> n >> c;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		sum += a[i];
	}
	if (sum <= c) 
		cout << "Yes" << endl;
	else 
		cout << "No" << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) 
		lecandy();
	return 0;
}