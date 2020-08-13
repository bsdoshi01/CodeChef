#include <bits/stdc++.h>
using namespace std;

void snckyear() {
	int year;
	cin >> year;
	if(year == 2010 || year == 2015 || year == 2017 || year == 2019 || year == 2016) {
		cont << "HOSTED" << endl;
	} else {
		cout << "NOT HOSTED" << endl;
	}
}

int main() {
	int test_cases;
	cin >> test_cases;
	while(test_cases--) {
		snckyear();
	}
	return 0;
}