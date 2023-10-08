/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Thu Aug  3 2023
	Task:-		To find the gcd of two user given numbers.
	Guided By:-	Darsan Sir
*/

#include <stdio.h>

void main()
{
	printf("Enter the two numbers: \n");
	int number1;
	int number2;
	scanf(" %d", &number1);
	scanf(" %d", &number2);
	int count;
	int divident;
	if ( number1 < number2 )
	{
		count = number1;
		divident = number2;
	}
	else
	{
		count = number2;
		divident = number1;
	}
	while ( count > 0 )
	{
		if ( ( number2 % count ==0 ) && ( number1 % count ==0 ) )
		{
			printf("The gcd of %d and %d is %d. \n", number1, number2, count);
			break;
		}
		else
			count--;
	}
	if ( count == 0 )
	{
		printf("The gcd of %d and %d is 1. Hence they are co-primes. \n", number1, number2);
	}
}
