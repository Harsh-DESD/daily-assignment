#include<stdio.h>
int main()

{
	int num;
	int rev = 0;

	scanf("%d",&num);

	while(num>0)
	{
		int rem = num % 10;
		rev = rev*10 + rem;

		num = num/10;
	}
	printf("%d\n", rev);
	return 0;
}
