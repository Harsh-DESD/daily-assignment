#include<stdio.h>
int main()
{	int N;
	scanf("%d",&N);
	if(N==1)
	{
		printf("Number of days : 31\n");
	}
	else if(N==2)
	{
		printf("Number of days : 28/29\n");
	}
	else if(N==3)
	{
		printf("Number of days = 31\n");
	}
	else if(N==4)
	{
		printf("Number of days = 30\n");
	}
	else if(N==5)
	{
		printf("Number of days = 31\n");
	}
	else if(N==6)
	{
		printf("Number of days = 30\n");
	}
	else if(N==7)
	{
		printf("Number of days = 31\n");
	}
	else if(N==8)
	{
		printf("Number of days = 31\n");
	}
	else if(N==9)
	{
		printf("Number of days = 30\n");
	}
	else if(N==10)
	{
		printf("Number of days = 31\n");
	}
	else if(N==11)
	{	
		printf("Number of days = 30\n");
	}
	else if(N==12)
	{	
		printf("Number of days = 31\n");
	}
	else 
	{	
		printf("invalid month\n");
	}
	return 0;
}
