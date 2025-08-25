#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int S(int a) {
	int result = a;
	while (a > 0) {
		result += a % 10;
		a /= 10;
	}
	return result;
}

int main() {
	int N;
	int R = 0;
	scanf("%d", &N);
	int tmp=0, cnt = 1;
	tmp = N;
	while (tmp >= 10) {
		tmp = tmp / 10;
		cnt++;
	}
	for (int i = N - 9 * cnt; i <= N; i++) {
		if (N == S(i)) {
			if (R == 0) R = i;
			else {
				if (R > i) R = i;
			}
		}
	}
	printf("%d", R);
}