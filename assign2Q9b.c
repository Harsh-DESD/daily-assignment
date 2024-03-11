#include<stdio.h>
int main()
{	int N;
	scanf("%d",&N);
	(N==1 || N==3 || N==5 || N==7 || N==8 || N==10 || N==12) && 
	{
		printf("Number of days : 31\n");
	}
	(N==4 || N==6 || N==9 || N==11)
	{
		printf("Number of days : 30\n");
	}
	(N==2)
	{
		printf("Number of days = 28/29\n");
	} 
	{
		printf("invalid month\n");
	}

	return 0;
}
