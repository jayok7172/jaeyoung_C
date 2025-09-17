#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a,const void* b) {
	return (*(int*)a - *(int*)b);
}


int main() {
	int h[10],sum=0;
	for (int i = 0; i < 9; i++) {
		int a;
		scanf("%d", &a);
		h[i] = a;
		sum += a;
	}

	qsort(h, 9, sizeof(int), compare);
	
	for (int i = 0; i < 9; i++) {
		for (int j = i+1; j < 9; j++) {
			if (sum - h[i] - h[j] == 100) {
				for (int k = 0; k < 9; k++) {
					if (k != i && k != j) printf("%d\n", h[k]);
				}
				return 0;
			}
		}
	}
}