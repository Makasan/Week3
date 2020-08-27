#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<cstdlib>
int main() {
	int n;
	scanf_s("%d", &n);
	if (n <= 0)
	{
		printf("Error");
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 0; j < n - i; j++)
			{
				printf(" ");
			}
			if (i == 1) { printf("*"); }
			else
			{
				for (int j = 0; j < 2; j++)
				{
					printf("*");
					for (int j = 3; j < i * 2; j++)
					{
						printf(" ");
					}
				}
			}
			printf("\n");
		}

		for (int i = (n - 1); i > 0; i = i - 1)
		{
			for (int j = 0; j < (n - i); j++)
			{
				printf(" ");
			}
			for (int j = 1; j < (2 * i); j++)
			{
				if (j == 1 or j == (2 * i) - 1)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
}