#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	int y;
}coord;

int compare(const void* a, const void* b) {
	coord* num1 = (coord*)a;  
	coord* num2 = (coord*)b;  

	if (num1->x < num2->x) return -1;
	else if (num1->x > num2->x) return 1;
	else {
		if (num1->y < num2->y) return -1;
		else return 1;
	}
	return 0;
}

int main() {
	int num = 0;
	coord* list;

	scanf("%d", &num);
	list = (coord*)malloc(sizeof(coord) * num);

	for (int i = 0; i < num; i++) {
		scanf("%d %d", &list[i].x, &list[i].y);
	}

	qsort(list, num, sizeof(list[0]), compare);
	

	for (int i = 0; i < num; i++) {
		printf("%d %d\n", list[i].x,list[i].y);
	}

	return 0;
}