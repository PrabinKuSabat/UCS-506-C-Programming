/* 
	Written by:- Prabin Kumar Sabat
*/
#include <stdio.h>
int main()
{	printf("Enter the two numbers:\n");
	float a,b,c;
	scanf("%f %f",&a,&b);
	printf("The value of a is:%f and value of b is:%f",a,b);
	c=a;a=b;b=c;
	printf("The value of a is:%f and value of b is:%f",a,b);
	return 0;
}
