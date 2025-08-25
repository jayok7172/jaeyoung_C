#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 2; i <= N; i++) {
		if (N % i == 0) {
			N = N / i;
			printf("%d\n", i);
			i--;
		}
	}
}