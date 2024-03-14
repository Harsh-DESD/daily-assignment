#include<stdio.h>

int max_if_else(int n1, int n2, int n3)
{
	int max;

	if(n1>n2)
		max = n1;
	else 
		max = n2;
	
	if(n3>max)
		max = n3;
	
	return max;
}

int max_conditional(int n1, int n2, int n3)
{ 
	int max = n1>n2 ? n1 : n2;

	max = n3 > max ? n3 : max;

	return max;

}

int main ()
{	 
	  int n1;
	  printf("enter n1 : ");
	  scanf("%d",&n1);

	  int n2;
	  printf("enter n2 : ");
	  scanf("%d",&n2);

	  int n3;
	  printf("enter n3 : ");
	  scanf("%d",&n3);
	
	  int max;
	  max = max_if_else(n1, n2, n3);

	  printf("max of %d & %d & %d using if else is %d\n", n1,n2,n3,max);

	  max = max_conditional(n1,n2,n3);
	  
	  printf("max of %d & %d & %d using conditional is %d\n", n1,n2,n3,max);

	  return 0;
}
		
