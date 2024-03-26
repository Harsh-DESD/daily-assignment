#include<stdio.h>


int fact(int);

int main()
{
	int n;
	int factorial;

	printf("Enter num : ");
	scanf("%d",&n);
	
	factorial = fact(n);

	printf("factorial = %d\n",factorial);

	return 0;

}

int fact(int n)
{
	int factorial=1;

	for(int i=1; i<=n; i++)
	{
		factorial *= i;
	}


	return factorial;
}
