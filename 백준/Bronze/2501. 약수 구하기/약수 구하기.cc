#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main() {
	int N, K;
	scanf("%d%d", &N, &K);
	int cnt = 0;
	for (int i = 1; i <= N; i++) {
		if (N % i == 0) {
			cnt++;
			if (cnt == K) {
				printf("%d", i);
				break;
			}
		}
	}
	if (cnt < K) printf("0");
}