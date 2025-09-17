#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int N, M;
int result[100];
int check[100];

int DFS(int depth) {
	if (depth == M) {
		for (int i = 0; i < M; i++) {
			printf("%d ", result[i]);
		}
		printf("\n");
	}
	for (int i = 1; i <= N; i++) {
		if (check[i] == 0) {
			check[i] = 1;
			result[depth] = i;
			DFS(depth + 1);
			check[i] = 0;
		}
	}
	return 0;
}

int main() {
	scanf("%d%d", &N, &M);
	DFS(0);
}