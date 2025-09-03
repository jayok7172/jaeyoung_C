#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int N, M, num_1, num_2, broken[11] = { 0, }, min = 1000001, length, l;

int check(int a) {
	int len = 0;
	if (a == 0) return broken[0] ? 0 : 1;
	while (a) {
		len++;
		if (broken[a % 10]) return 0;
		a /= 10;
	}
	return len;
}

int main() {
	
	scanf("%d%d", &N,&M);
	num_1 = N - 100;
	if (num_1 < 0) num_1 = -1 * num_1;
	
	for (int i = 0; i < M; i++) {
		int a;
		scanf("%d", &a);
		broken[a] = 1;
	}

	for (int i = 0; i < 1000001; i++) {
		length = check(i);
		if (length) {
			int a = N - i;
			if (a < 0) a = a * -1;
			if (a < min) {
				min = a;
				l = length;
			}
		}
	}
	num_2 = min + l;

	printf("%d", num_1 < num_2 ? num_1 : num_2);
}