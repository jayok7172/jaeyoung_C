#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int prime(int a) {
	while (1) {
		int cnt = 0;
		if (a == 1) return 0;
		if (a == 2) return 1;
		for (int i = 2; i * i <= a; i++) {
			if (a % i == 0) {
				cnt++;
				break;
			}
		}
		if (cnt == 0) return 1;
		else return 0;
	}
}

int main() {
	int n;
	while (scanf("%d", &n) == 1 && n != 0) {
		int cnt = 0;
		for (int i = n+1; i <= 2*n; i++) {
			if (prime(i) == 1) cnt++;
		}
		printf("%d\n", cnt);
	}
}