#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ott(int a) {
	if (a == 1) return 1;
	else if (a == 2) return 2;
	else if (a == 3) return 4;
	else if (a == 4) return 7;
	else return ott(a - 1) + ott(a - 2) + ott(a - 3);
}

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int t;
		scanf("%d", &t);
		printf("%d\n", ott(t));
	}
}