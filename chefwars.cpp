#include <bits/stdc++.h>
using namespace std;

void chefwars() {
	int health, power;
	cin >> health >> power;
	while(health != 0 || power != 0) {
		health -= power;
		power /= 2;
	}
	if(health == 0) {
		cout << "1" << endl;
	} else if (power == 0) {
		cout << "0" << endl;
	}
}

int main() {
	int test_cases;
	cin >> test_cases;
	while(test_cases--) {
		chefwars();
	}
	return 0;
}