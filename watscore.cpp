#include <bits/stdc++.h>
using namespace std;

void watscore() {
	int n, score[11] = {0}, p, s, sum = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> p >> s;
		if (score[p - 1] < s) 
			score[p - 1] = s;
	}
	for (int i = 0; i < 8; ++i) 
		sum += score[i];
	cout << sum << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) 
		watscore();
	return 0;
}