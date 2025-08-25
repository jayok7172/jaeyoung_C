#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, i, j, cnt, sum, arr[10000] = { 0 };
	while (1) {
		cnt = 0, sum = 0;
		scanf("%d", &n);
		if (n == -1) break;
		for (i = 1,j=0; i < n; i++) {
			if (n % i == 0) {
				cnt++;
				sum += i;
				arr[j++] = i;
			}
		}
		if (n == sum) {
			printf("%d = %d", n, arr[0]);
			for (i = 1; i < cnt; i++) {
				printf(" + %d", arr[i]);
			}
			printf("\n");
		}
		else printf("%d is NOT perfect.\n", n);
	}
}