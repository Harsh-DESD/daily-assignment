#include<stdio.h>

int main()

{
 	int num;

	printf("Enter number : ");
	scanf("%d", &num);
	int fact ;
	int i=1;
	printf("all factors :  ");
	while(i <= num/2)
		{ 
			if (num % i == 0)
			printf("%d\t", i);
			i++;
		}

		return 0;
	
}


