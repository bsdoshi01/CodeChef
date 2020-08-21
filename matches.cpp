#include <bits/stdc++.h>
using namespace std;

void matches() {
	int a, b, add, ans = 0;
	int matches_required[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
	cin >> a >> b;
	add = a + b;
	while (add > 0) {
		ans += matches_required[add % 10];
		add /= 10;
	}
	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) 
		matches();
	return 0;
}