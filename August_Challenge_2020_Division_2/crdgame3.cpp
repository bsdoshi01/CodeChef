#include <bits/stdc++.h>
using namespace std;

void crdgame3() {
	int pc, pr, cc=0, cr=0;
	cin >> pc >> pr;
	cc = (((float)pc)/9.0 > pc/9) ? pc/9 + 1 : pc/9;
	cr = (((float)pr)/9.0 > pr/9) ? pr/9 + 1 : pr/9;
	if (cr <= cc) {
		cout << "1 " << cr << endl;
	} else if (cr > cc) {
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