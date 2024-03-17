#include<stdio.h>
int main()

{
	int num;
	int sum = 0;

	printf("Enter number : ");
	scanf("%d",&num);

	while(num>0)
	{
		int rem = num%10;
		sum = sum + rem;

		if(num / 10 > 0)
			printf("%d + ", rem);
		else 
			printf("%d = ", rem);
	
		num  = num/10;
	}

	printf("%d\n", sum);
	
	return 0;
}
