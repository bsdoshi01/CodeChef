#include <bits/stdc++.h>
using namespace std;

void cutboard() {
	int dim1, dim2;
	scanf("%d %d", &dim1, &dim2);
	printf("%d", ((dim2 - 1) * (dim1 - 1)));
}

int main() {
	int test_cases;
	scanf("%d", &test_cases);
	while(test_cases--) {
		cutboard();
	}
}