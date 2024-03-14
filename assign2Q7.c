#include<stdio.h>
int main()
{	
	int year;
	scanf("%d",&year);
	if(year % 4 == 0)
	{
		if(year % 100 != 0)
		{
			printf("leap\n");
		}
		else 
		{
			if(year % 400 == 0 )
			{	
				printf("leap\n");
			}
			else
			{
				printf("not leap year\n");
			}	
		}

	}
	else
	{
				printf("not leap year\n");
	}
	return 0;
}

