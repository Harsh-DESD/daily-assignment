#include<stdio.h>

int max_if_else(int n1, int n2)
{
	 if(n1>n2)
	 {
		return n1;
	 }
	 else
	 {
		return n2;
	 }
}

int max_conditional( int n1, int n2)
{
	int max = n1>n2 ? n1 : n2;
	return max;
}

int main ()
{
     int num1;
	 printf("enter num1 :\n");
	 scanf("%d", &num1);

	 int num2;
	 printf("enter num2 :\n");
	 scanf("%d",&num2);
     
	 int max;

	 max = max_if_else(num1,num2);

	 printf("Max of %d and %d using if else is %d\n", num1, num2, max);

	 max = max_conditional(num1,num2);
	 
	 printf("Max of %d and %d using conditional is %d\n", num1, num2, max);

	 return 0;
} 
   


