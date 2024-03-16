#include<stdio.h>
int main()

{
	char ch;

	printf("Enter character :");
	scanf("%c",&ch);

	for(int i = 1; i < 6; i++)
	{	printf("\n");
		for(int j = 1; j < 6; j++)
		printf(" %c ",ch);
	}
	printf("\n");
	return 0;
}
