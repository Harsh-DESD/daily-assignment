#include<stdio.h>

int main()
{
	int num;
	int fact= 1;
	printf("Enter num : ");
	scanf("%d",&num);

	int i=1;
	while(i<=num)
	{   
		printf("%d * ",i);

		fact *= i;

		i++;
	}
		printf("\b\b = %d\n",fact);

	return 0;

}
