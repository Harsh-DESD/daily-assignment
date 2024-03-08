#include<stdio.h>

void printPattern() {
	printf("*\n");
	printf("**\n");
	printf("***\n");
	printf("****\n");
	printf("*****\n");
}

int printPattern2() {
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=i; j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
}

int main() {
	printPattern();
	printf("\n");
	printPattern2();
	return 0;
}
