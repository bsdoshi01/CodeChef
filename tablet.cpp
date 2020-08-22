#include <bits/stdc++.h>
using namespace std;

#define ll long long

void tablet() {
	ll n, b, p, w, h, area = 0;
	cin >> n >> b;
	for (int i = 0; i < n; ++i) {
		cin >> w >> h >> p;
		if (p <= b && area < h * w) 
			area = w * h;
	}
	(area) ? cout << area << endl : cout << "no tablet" << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) 
		tablet();
	return 0;
}