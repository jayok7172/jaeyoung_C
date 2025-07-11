#include <stdio.h>

int main()
{
	int n, cnt1, cnt2;

	scanf("%d", &n);

	cnt1 = n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		for (int k = (cnt1 - 1) * 2; k > 0; k--)
		{
			printf(" ");
		}
		cnt1 -= 1;
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	cnt2 = 2;
	for (int a = 0; a < n - 1; a++)
	{
		for (int b = 0; b < n - a - 1; b++)
		{
			printf("*");
		}
		for (int c = 0; c < cnt2; c++)
		{
			printf(" ");
		}
		cnt2 += 2;
		for (int b = 0; b < n - a - 1; b++)
		{
			printf("*");
		}
		printf("\n");
	}
}