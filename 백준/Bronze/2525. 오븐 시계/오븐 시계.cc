#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int H, M;
	scanf("%d%d", &H, &M);
	int T;
	scanf("%d", &T);
	
	if (M + T >= 60) {
		H += (M + T) / 60;
		M = (M + T) % 60;
		
	}
	else {
		M = M + T;
	}
	if (H >= 24) H -=24;

	printf("%d %d", H, M);
}