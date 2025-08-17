#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int max(int arr[], int n) {
	int result =arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > result) result = arr[i];
	}
	return result;
}

int min(int arr[], int n) {
	int result = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] < result) result = arr[i];
	}
	return result;
}

int main() {
	int N;
	int arr[1000000];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	printf("%d %d", min(arr,N), max(arr, N));
}