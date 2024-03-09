#include<stdio.h>
int main ()
	{
	 int C;
	 scanf("%d",&C);
	 printf("temp in Celsius is : %d\n",C);
	
	 float F = ((9/5.0)*C+32);
	 printf("Coverted temp in Celsius to Fahrenheit is : %.2f\n",F);

	 int F1;
	 scanf("%d",&F1);
	 printf("temp in Fahrenheit is : %d\n",F1);
	
	 float C1 = ((5/9.0)*F1-32);
	 printf("Coverted temp in Fahrenheit to Celsius is : %.2f\n",C1);
	 return 0;
	 }

	


