#include<stdio.h>

int sum(int num1, int num2);

int sub(int num1, int num2);

int product(int num1, int num2);

float div(int num1, int num2);

void calculator(int num1, int num2, int operand);

int isDivideByZero = 1;

int main()
{
	int num1,num2;
	char operand, ch = 'Y';

	while(ch == 'Y' || ch == 'y')
	{
		printf("Enter numbers : \n");
		scanf("%d", &num1);
		scanf("%d", &num2);
		scanf("%*c%c",&operand);
		calculator(num1, num2, operand);
	
		printf("Do you want to continue (Y or y): ");
		scanf("%*c%c", &ch);
	}

	return 0;
}

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

	isDivideByZero = 0;
	printf("Divide by zero not possible\n");
	return 0.0;
}

void calculator(int num1, int num2, int operand)
{
	switch(operand)
	{	case '+':   printf("sum = %d\n", sum(num1, num2));
				    break;
		case '-':   printf("sub = %d\n", sub(num1, num2));
					break;
		case '*':   printf("product = %d\n", product(num1, num2));
					break;
		case '/':   float res = div(num1, num2);
					if(isDivideByZero != 0)
						printf("div = %.2f\n", res);
					else
						printf("Divide by zero error");
					break;
		default:	printf("invalid opertation");
	}
}
