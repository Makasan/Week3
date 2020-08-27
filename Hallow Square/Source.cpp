#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int Side;
	scanf("%d", &Side);
	if(Side > 0)
	{
		if(Side == 1)
		{
			printf("*");
			return 0;
		}
		for (int i = 1; i <= Side; i++)
		{
			printf("*");
		}
		printf("\n");
		for(int i = 1; i<= (Side-2); i++)
		{	
			printf("*");
			for(int j = 1; j<=(Side-2); j++)
			{	
				printf(" ");
			}	
			printf("*\n");
		}
		for (int i = 1; i <= Side; i++)
		{
			printf("*");
		}

	}
	else 
	{
		printf("Error");
	}
	
	return 0;
}
