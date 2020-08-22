#include <bits/stdc++.h>
using namespace std;

void chefstlt() {
	char s1[100] = {0}, s2[100] = {0};
	int number_of_question_marks = 0, number_of_different_letters = 0, min, max;
	cin >> s1;
	cin >> s2;
	for (int i = 0; i < 100; ++i) {
		if (s1[i] == '?' || s2[i] == '?') 
			++number_of_question_marks;
		else if (s1[i] != s2[i]) 
			++number_of_different_letters;
	}
	min = number_of_different_letters;
	max = number_of_different_letters + number_of_question_marks;
	cout << min << " " << max << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) 
		chefstlt();
	return 0;
}