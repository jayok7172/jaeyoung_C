#define _CRT_SECURE_NO_WARNINGS
# include <string.h>
# include <stdio.h>

int fac(int n) {
	if (n == 0)	return 1;
	else return n * fac(n - 1);
}

int main() {
	int a;
	scanf("%d", &a);
	printf("%d", fac(a));
}
