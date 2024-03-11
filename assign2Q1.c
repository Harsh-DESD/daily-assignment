#include<stdio.h>
int main ()
{
	int num1,num2;
	scanf("%d",&num1);
	scanf("%d",&num2);

	 if(num2 == 0) {	
	 	printf("Divide by zero error\n");
		return 0;
	 }

	float div = num1/(float)num2;
	printf("%.2f", div);
	 
	 return 0;
}
