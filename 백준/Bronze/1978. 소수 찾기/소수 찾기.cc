#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int N;
	int result=0;
	int i, j;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		int a;
		scanf("%d", &a);
		for (j = 2; j < a; j++) {
			if (a % j == 0) {
				break;
			}
		}
		if (j == a) result++;
	}
	printf("%d", result);
}