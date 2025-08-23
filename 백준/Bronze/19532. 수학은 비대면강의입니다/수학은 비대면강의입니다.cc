#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int a, b, c, d, e, f;
	int x, y;
	int det;
	scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
	y = (c * d - f * a) / (b * d - e * a);
	x = (c * e - f * b) / (a * e - d * b);
	printf("%d %d", x, y);
}