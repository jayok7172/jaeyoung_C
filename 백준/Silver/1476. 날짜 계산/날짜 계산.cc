#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int E, S, M;
	int result = 1;
	scanf("%d%d%d", &E, &S, &M);
	while (1) {
		if ((result-E) % 15 == 0 && (result-S) % 28 == 0 && (result-M) % 19 == 0) break;
		else result++;
	}
	printf("%d", result);
}