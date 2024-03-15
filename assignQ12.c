#include<stdio.h>
int main()

{
	int base,index;
	int pwr=1;

	printf("base : ");
	scanf("%d",&base);

	printf("index : ");
	scanf("%d",&index);
	
	int a;
	for(int i=1;i<=index;i++)
	{
		pwr= pwr * base;
	}
	printf("%d\n",pwr);
	return 0;
}
