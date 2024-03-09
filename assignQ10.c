#include<stdio.h>
#include<math.h>
int main()
	{
	  float a,b,c;
	  scanf("%f",&a);
	  scanf("%f",&b);
	  scanf("%f",&c);

	  float P = a+b+c;
	  printf("Perimeter of tringle is : %.2f\n",P);

	  float S = P/2;
	  
	  float M = (S*(S-a)*(S-b)*(S-c));

	  float A = sqrt(M);
	  printf("Area of tringle is : %.2f\n",A);

	  return 0;
	 }
