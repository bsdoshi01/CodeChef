#include <bits/stdc++.h>
using namespace std;

void pcj18b() {
	int n, ans = 0;
	cin >> n;
	while(n > 0) {
		ans += n*n;
		n -= 2;
	}
	cout << ans << endl;
}

int main() {
	int test_cases;
	cin >> test_cases;
	while(test_cases--) {
		pcj18b();
	}
	return 0;
}