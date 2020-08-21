#include <bits/stdc++.h>
using namespace std;

void trisp() {
	int n;
	cin >> n;
	n = (n - 2) / 2;
	n = n * (n + 1) / 2;
	cout << n << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) 
		trisp();
	return 0;
}