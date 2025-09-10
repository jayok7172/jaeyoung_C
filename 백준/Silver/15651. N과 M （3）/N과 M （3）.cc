#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int N, M;
int result[100];

int DFS(int a) {
	if (a == M) {
		for (int i = 0; i < M; i++) {
			printf("%d ", result[i]);
		}
		printf("\n");
	}
	else {
		for (int i = 1; i <= N; i++) {
			result[a] = i;
			DFS(a + 1);
		}
	}
	return 0;
}

int main() {
	scanf("%d%d", &N, &M);
	DFS(0);
	return 0;
}