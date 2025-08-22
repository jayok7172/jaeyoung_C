#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX(a,b) ((a>=b) ? a : b)

int main() {
	int a, b, c;
	int A;
	scanf("%d%d%d", &a, &b, &c);
	A = MAX(a, MAX(b, c));
	if (A >= a + b + c - A) printf("%d", (a + b + c - A) * 2 - 1);
	else printf("%d", a + b + c);
}