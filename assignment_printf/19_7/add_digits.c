/*
	Written By:- Prabin Kumar Sabat
*/

#include <stdio.h>
int main()
{
	int num,u,t,h,sum;
	printf("Enter a 3-digit number:");
	scanf("%d",&num);
	u=num%10,num=num/10;
	t=num%10,num=num/10;
	h=num;
	sum=u+t+h;
	printf("Sum of all the digits is:%d",sum);
	return 0;
}
