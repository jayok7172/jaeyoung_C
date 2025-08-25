#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int result = 0;
int min = 0;

void num(int a) {
	int cnt = 0;
	if (a < 2) return;

	for (int i = 2; i < a; i++) {
		if (a % i == 0) {
			cnt++;
		}
	}
	if (cnt == 0) {
		result += a;
		if (min > a || min==0) min = a;
	}
}

int main() {
	int M, N;
	scanf("%d%d", &M, &N);
	for (int i = M; i <= N; i++) {
		num(i);
	}
	if (result == 0) printf("%d", -1);
	else printf("%d\n%d", result, min);
}