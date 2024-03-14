#include<stdio.h>

int main()

{
	int num;
	char ch;

	printf("Enter num :");
	scanf("%d",&num);

	printf("Enter character :");
	scanf("%*c%c",&ch);

	int i=1;
	while(i<=num)
	{
		printf("%c\t",ch);
		i++;
	}
	return 0;
}
