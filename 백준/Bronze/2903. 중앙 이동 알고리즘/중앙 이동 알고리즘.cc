#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fib(int a) {
	return a + a - 1;
}

int main() {
	int N;
	scanf("%d", &N);
	int result = 2;
	for (int i = 0; i < N; i++) {
		result = fib(result);
	}
	printf("%d", result * result);
}