#include<stdio.h>


int character(int,char);

int main(void)
{
	int num;
	char ch;
	int result;
	
	printf("Enter number : ");
	scanf("%d",&num);

	printf("Enter character : ");
	scanf("%*c%c",&ch);

	result = character(ch);

	printf("character = %c\n",ch);
	
}

int character(int num,char ch)
	int result = 1;
{
	for(int i=1; i<=num; i++)

	result = ch==i;

    return 0;
}
