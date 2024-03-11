#include<stdio.h>
int main ()
{
	int unit_price = 5;
	int total_price;
	int q;
	scanf("%d",&q);

	if(q > 50) total_price = q * unit_price * (1-0.15);
	else if(q > 30) total_price = q * unit_price * (1-0.1);
	else total_price = q * unit_price;

	printf("For %d number of items, Total price %d", q, total_price);
	
	return 0;
}
