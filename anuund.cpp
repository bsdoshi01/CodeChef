#include <bits/stdc++.h>
using namespace std;

void anuund() {
	int n, i;
	cin >> n;
	long a[n];
	for (i = 0; i < n; ++i)
		cin >> a[i];
	sort(a, a+n);
	for (i = 1; i < n - 1; i += 2)
		swap(a[i], a[i+1]);
	for (i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--)
		anuund();
	return 0;
}