#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int N, M;
int result[1000];
int check[1000];

int DFS(int depth,int cut) {
	if (depth == M) {
		for (int i = 0; i < M; i++) {
			printf("%d ", result[i]);
		}
		printf("\n");
	}
	else {
		for (int i = 1; i <= N; i++) {
			if (check[i] == 0 && cut < i) {
				result[depth] = i;
				check[i] = 1;
				DFS(depth + 1, i);
				check[i] = 0;
			}
		}
	}
	return 0;
}

int main() {
	scanf("%d%d", &N, &M);
	DFS(0, 0);
	return 0;
}