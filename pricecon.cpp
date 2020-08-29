#include <bits/stdc++.h>
using namespace std;

void pricecon() {
	int n, k, p;
	long long revenue_loss = 0;
	cin >> n >> k;
	for (int i = 0; i < n; ++i) {
		cin >> p;
		revenue_loss = (p > k) ? revenue_loss + p - k : revenue_loss;
	}
	cout << revenue_loss << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) 
		pricecon();
	return 0;
}