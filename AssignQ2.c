#include<stdio.h>


int pwr(int,int);

int main()
{
	int base,index;
	int result;

	printf("Enter base : ");
	scanf("%d",&base);
	
	printf("Enter index : ");
	scanf("%d",&index);
	
	result = pwr(base,index);

	printf("%d^%d = %d\n", base,index,result);

	return 0;

}

int pwr(int base,int index)
{
	int result=1;

	for(int i=1; i<=index; i++)
	{
		result *= base;
	}


	return result;
}
