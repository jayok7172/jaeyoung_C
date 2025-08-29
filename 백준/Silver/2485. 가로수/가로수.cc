#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int gcd(int a,int b) {
	int ans;
	while (1){
		if (a % b != 0) {
			ans = a % b;
			a = b;
			b = ans;
		}
		else return b;
	}
}

int main() {
	int N, arr[100005];
	int result,ans =0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int T;
		scanf("%d", &T);
		arr[i] = T;
	}
	result = gcd(arr[1] - arr[0], arr[2] - arr[1]);
	for (int i = 2; i < N-1; i++) {
		result = gcd(arr[i + 1] - arr[i],result);
	}
	for (int i = 0; i < N-1; i++) {
		ans +=(arr[i + 1] - arr[i]) / result - 1;
	}
	printf("%d", ans);
}