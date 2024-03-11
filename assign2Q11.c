#include<stdio.h>

int main ()
{
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);

	if(x >0 && y > 0)
	{
		printf("point lies on 1st quadrant\n");
	}
	else if(x<0 && y>0)
	{
		printf("point lies on 2nd quadrant\n");
	}
	else if(x<0 && y <0)
	{
		printf("point lies on 3rd quadrant\n");
	}
	else if(x>0 && y<0)
	{
		printf("point lies on 4th quadrant\n");
	}
	else if(x==0)
	{
		if(y>0)
		{
			printf("On positive Y axis\n");
		}
		else if(y<0)
		{
			printf("On negative Y axis\n");
		}
		else
		{
			printf("On Orign\n");
		}
	}
	else if(y==0)
	{
		if(x>0)
		{
			printf("On positive X axis\n");
		}
		else if(x<0)
		{
			printf("On negative X axis\n");
		}
	}	
	return 0;
}
