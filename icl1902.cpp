#include <bits/stdc++.h>
using namespace std;

void icl1902() {
	int n, num_squares = 0;
	cin >> n;
	while (n > 0) {
		n -= ((int)sqrt(n) * (int)sqrt(n));
		num_squares++;
	}
	cout << num_squares << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) 
		icl1902();
	return 0;
}