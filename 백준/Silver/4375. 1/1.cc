#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	while (scanf("%d", &n)!=EOF) {
		int cnt = 1, x = 1;
		while (1) {
			if (x % n == 0) {
				printf("%d\n", cnt);
				break;
			}
			else {
				x = (x % n) * 10 + 1;
				cnt++;
			}
		}
	}
}