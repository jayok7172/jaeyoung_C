#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int arr[5];
	int mid, avg=0;
	int tmp;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		avg += arr[i];
	}
	avg = avg / 5;
	mid = arr[2];
	printf("%d\n%d", avg, mid);
}