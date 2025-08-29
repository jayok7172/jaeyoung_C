#include<stdio.h>

int main() {
	int arr[1000001] ;
	for (int i = 2; i < 1000001; i++)
		arr[i] = i;   

	for (int i = 2; i <= 1000001; i++)
		for (int j = 2; j * i <= 1000001; j++)
			arr[i * j] = 0; 

	int ntest;
	scanf("%d", &ntest);
	for (int i = 0; i < ntest; i++) {
		int a;
		int answer = 0;
		scanf("%d", &a);
		for (int i = 2; i < a; i++) {
			if (arr[a - i] + arr[i] == a) {
				answer++;
				if (a - i == i) 
					answer++;
			}
			
		}
		printf("%d\n", answer / 2);
	}
}