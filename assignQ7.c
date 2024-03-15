#include<stdio.h>
int main()

{
	int num;

	printf("Enter num : ");
	scanf("%d",&num);

	int i=1;
	int n;
	while(i<num)
	{	
	if(num % i == 0)

	if(num/i>i)
		printf("%d*%d = %d\n",i,num/i,num);
		i++;
	}

	return 0;
}	
