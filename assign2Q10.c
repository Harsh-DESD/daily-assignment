#include<stdio.h>
int main()
{	char c;
	scanf("%c",&c);
	
	if(c >= 65 && c <= 90 || c >= 97 && c <= 122)
	{
		printf("Alphabet\n");

		if(c >= 65 && c <= 90)
		{
			printf("Uppercase letter\n");
		}
		else
		{
			printf("Lowercase letter\n");
		}
	}
	else if(c >= 48 && c <= 57)
	{
		printf("Digit\n");
	}
	else if(c == 32)
	{
		printf("Space\n");
	}
	else if(c == 9)
	{
		printf("Tab\n");
	}
	else if(c == 13)
	{
		printf("Carriage return\n");
	}
	else if(c == 10)
	{
		printf("New line\n");
	}
	else 
	{
		printf("Not listed above\n");
	}
	return 0;
	
}











