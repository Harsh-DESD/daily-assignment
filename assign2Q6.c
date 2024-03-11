#include<stdio.h>
int main()
	{int num;
	 scanf("%d",&num);

	 int original = num;
	 int rev_num = 0;

	 while(num>0)
	 {int reminder = num % 10;
	  rev_num = rev_num * 10 + reminder;
	  num = num/10;
	 }
	  printf("reversed num is %d\n",rev_num); 
	 return 0;
	 }
