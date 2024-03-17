#include<stdio.h>
int main()

{
	int num,rem,temp;
	int revers = 0;

	printf("Enter number : ");
	scanf("%d",&num);
	temp = num;

	while(num>0)
	{
		 rem = num % 10;

		 revers = (revers*10) + rem;

		 num = num/10;
	}
		 if(temp == revers)
			 printf("%d is a numeric palindrom\n",temp);
		
		else
		 	printf("%d is not a numeric palindrom\n",temp);
			

	
	return 0;
}
