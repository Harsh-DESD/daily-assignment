#include<stdio.h>
int main()

{
	int num;

	printf("Enter num : ");
	scanf("%d",&num);

	for(int i=2; i<num; i++){	
		if(num % i != 0)
		{
			printf("Given num %d is prime\n",num);
			return 0;
		}
		else
		{	
			printf("Given num %d is not prime\n",num);
			return 0;
		}
	}
	return 0;
}
