#include<stdio.h>

int main ()

{
	int num, temp, cube;
	int arm=0;
	

	printf("Enter number : ");
	scanf("%d",&num);
	temp = num;

	while(num>0)
	{
		int rem = num % 10;

		cube = cube + (rem * rem * rem); 

		num /= 10;
	}

	if(cube ==  temp)
		printf("%d is Armstrong no\n",temp);

	else
		printf("%d is not Armstrong no\n",temp);
	
	return 0;
}
