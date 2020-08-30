#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
	Create a hollow triangle
	With a (2*n-1) long base
*/
int main() {
	int num, i, j;
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		for (j = i; j < num; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= (2 * i - 1); j++)
		{
			if(i == num || j == 1 || j ==(2*i-1))
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
	return 0;
}
