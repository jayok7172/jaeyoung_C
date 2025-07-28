#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int main() {
	int T;
	scanf("%d", &T); 

	while (T--) {
		int a, b;
		scanf("%d %d", &a, &b);
		int result = a * b / gcd(a, b); 
		printf("%d\n", result);
	}

	return 0;
}
