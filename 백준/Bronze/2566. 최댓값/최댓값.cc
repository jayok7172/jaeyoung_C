#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[100];
	int N, x, y;
	int result = -1;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &N);
			if (N > result) {
				result = N;
				x = i+1;
				y = j+1;
			}
		}
	}
	printf("%d\n", result);
	printf("%d %d", x, y);
}