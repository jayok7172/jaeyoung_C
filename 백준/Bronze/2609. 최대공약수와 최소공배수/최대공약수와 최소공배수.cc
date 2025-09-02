#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int a,int b) {
	int tmp;
	while (b != 0) {
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

int main() {
	int A, B;
	scanf("%d%d", &A, &B);
	printf("%d\n%d", gcd(A,B),A*B/gcd(A, B));
}