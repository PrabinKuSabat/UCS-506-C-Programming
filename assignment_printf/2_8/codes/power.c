/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Thu Aug  3 2023
	Task:-		To print the result of a^b where a and b are two user given numbers.
	Guided By:-	Darsan Sir
*/

#include <stdio.h>

void main()
{
	printf("Enter the number:");
	int number;
	scanf(" %d", &number);
	printf("Enter the exponent:");
	int exponent;
	scanf(" %d", &exponent);
	int count = exponent;
	int result = 1;
	while ( count > 0 )
	{	
		result = result*number;
		count--;
	}
	printf("The answer of %d^%d is %d.\n", number, exponent, result);
}

