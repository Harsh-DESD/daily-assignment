#include<stdio.h>
int main ()
{

	int a,b;

	scanf("%d", &a);
	scanf("%d", &b);
	
	int sum = a+b;
	int diff = a-b;
	int product = a*b;

	printf("sum of %d & %d is %d\n", a,b,sum);
	printf("diff of %d & %d is %d\n", a,b,diff);
	printf("product of %d & %d is %d\n", a,b,product);

	return 0;

}



