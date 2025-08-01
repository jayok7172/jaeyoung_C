#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int X;
	scanf("%d", &X);

	int line = 1;
	while (X > line) {
		X -= line;
		line++;
	}

	if (line % 2 == 1) {
		printf("%d/%d", line - X + 1, X);
	} else {
		printf("%d/%d", X, line - X + 1);
	}

	return 0;
}
