#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a + b + c != 180) printf("Error");
	else if (a == 60 && b == 60 && c == 60) printf("Equilateral");
	else if (a + b + c == 180 && (a == b || b == c || c == a)) printf("Isosceles");
	else if (a + b + c == 180 && a != b != c) printf("Scalene");
}