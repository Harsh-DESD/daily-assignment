#include<stdio.h>

int main()
{
	int num;
	int fact= 1;
	printf("Enter num : ");
	scanf("%d",&num);

	int i=num;
	while(i>=1)
	{   
		printf("%d * ",i);

		fact *= i;

		i--;
	}
		printf("\b\b = %d\n",fact);

	return 0;

}
