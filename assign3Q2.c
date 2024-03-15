#include<stdio.h>

int main()

{
	int num = 9;
	int table;

	int i=1;
	
	while(i<=10) 
	{	table = num*i;
		printf("%d*%d=%d\n",num, i , table);
		i++;
	}
	return 0;
}
