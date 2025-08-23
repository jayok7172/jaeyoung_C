#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	int y;
}Point;

int gcd(int a, int b) {
	while (b != 0) {
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

int main() {
	int T;
	scanf("%d", &T);
	Point* arr = (Point*)malloc(sizeof(Point) * T);
	for (int i = 0; i < T; i++) {
		scanf("%d%d", &arr[i].x, &arr[i].y);
	}

	for (int i = 0; i < T; i++) {
		printf("%d\n", (arr[i].x) * (arr[i].y) / gcd(arr[i].x, arr[i].y));
	}
}