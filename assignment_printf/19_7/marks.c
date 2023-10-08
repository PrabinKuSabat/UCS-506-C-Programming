#include <stdio.h>
int main()
{
	float a,b,c,d,e;
	float avg;
	printf("Enter the marks of the 5 subjects:\n");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	avg=(a+b+c+d+e)/5;
	printf("The average of the 5 marks is: %f\n",avg); 
	return 0;
}
