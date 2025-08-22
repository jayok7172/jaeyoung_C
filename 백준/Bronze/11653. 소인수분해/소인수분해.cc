#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 2; i; i++) {
		if (N % i == 0) {
			printf("%d\n", i);
			N = N / i;
			i--;
		}
		if (i > N) break;
	}

}