#include <bits/stdc++.h>
using namespace std;

void cnote() {
	int y, x, k, n, p, c;
	bool check = 0;
	cin >> x >> y >> k >> n;
	for (int i = 0; i < n; ++i)	{
		cin >> p >> c;
		if (c <= k && y + p >= x) 
			check = 1;
	}
	(check) ? cout << "LuckyChef" << endl : cout << "UnluckyChef" << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) 
		cnote();
	return 0;
}