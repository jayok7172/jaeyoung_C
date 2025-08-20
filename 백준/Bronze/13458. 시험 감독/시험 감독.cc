#include<stdio.h>

int n, b, c;
long long answer;
int arr[1000000];

void check() {
	for (int i = 0; i < n; i++) {
		arr[i] -= b;
		answer++;
		if (arr[i] > 0) {
			if (arr[i] % c == 0) answer += arr[i] / c;
			else answer += arr[i] / c + 1;
		}
	}
	return;
}

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d %d", &b, &c);
	check();
	printf("%lld", answer);
	return 0;
}