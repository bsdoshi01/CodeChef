#include <bits/stdc++.h>
using namespace std;

void crdgame3() {
	int pc, pr, cc=0, cr=0;
	cin >> pc >> pr;
	cc = (((float)vc)/9.0 > vc/9) ? vc/9 + 1 : vc/9;
	cr = (((float)vr)/9.0 > vr/9) ? vr/9 + 1 : vr/9;
	if (cr >= cc) {
		cout << "1 " << cr << endl;
	} else if (cr < cc) {
		cout << "0 " << cc << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		crdgame3();
	}
	return 0;
}