	#define _CRT_SECURE_NO_WARNINGS
	#include <stdio.h>
	#include <string.h>

	int main() {
		int N, K;
		int cnt = 0;
		int result;
		scanf("%d%d", &N, &K);
		for (int i = 1; i <= N; i++) {
			if (N % i == 0) cnt++;
			if (cnt == K) {
				result = i;
				break;
			}
		}
		if (cnt < K) printf("0");
		else printf("%d", result);	
	}