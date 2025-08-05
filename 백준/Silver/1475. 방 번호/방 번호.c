#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>
# define MAX(a,b) a>b?a:b


int main() {
	char bin[100];
	scanf("%s", bin);
	int len;
	int set = 0;
	len = strlen(bin);
	int R[10] = { 0 };
	for (int i = 0; i < len; i++) {
		R[bin[i] - '0']++;
	}
	for (int i = 0; i < 10; i++) {
		if (i != 6 && i != 9) set = MAX(R[i], set);
	}
	set = MAX((R[6] + R[9] + 1) / 2, set);
	printf("%d", set);
}