#include <bits/stdc++.h>
using namespace std;

void csub() {
	long long count = 0, n;
	cin >> n;
	char ch[n];
	cin >> ch;
	for (int i = 0; i < n; ++i) 
		if (ch[i] == '1')  
			count++;
	count = count * (count + 1) / 2;
	cout << count << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) 
		csub();
	return 0;
}