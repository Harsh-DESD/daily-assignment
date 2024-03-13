#include<stdio.h>

int sum(int num1, int num2) {
	return num1 + num2 ;
}

int sub(int num1, int num2) {
	return num1 - num2 ;
}

int product(int num1, int num2){
	return num1 * num2 ;
}

float div(int num1, int num2){
	if(num2 != 0) {
		return num1/num2;
	}

	printf("Divide by zero not possible\n");
	return 0.0;
}

int main()
{
	int num1,num2;
	char ch;

	printf("Enter numbers : \n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%*c%c",&ch);

	switch(ch)
	{	case '+':   printf("sum = %d\n", sum(num1, num2));
				    break;
		case '-':   printf("sub = %d\n", sub(num1, num2));
					break;
		case '*':   printf("product = %d\n", product(num1, num2));
					break;
		case '/':   printf("div = %.2f\n", div(num1, num2));
					break;
		default:	printf("invalid opertation");
	}
	return 0;
}
