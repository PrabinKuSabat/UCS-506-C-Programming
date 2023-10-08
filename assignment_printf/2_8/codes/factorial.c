/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Thu Aug  3 2023
	Task:-		
	Guided By:-	Darsan Sir
*/

#include <stdio.h>

void main()
{
	printf("Enter the number:");
	int number;
	scanf(" %d", &number);
	int number_to_multiply  = number;
	int factorial=1;
	while ( number_to_multiply  > 0)
	{
		factorial = factorial * number_to_multiply;
		number_to_multiply--;
	}
	printf("The factorial of %d is %d. \n", number, factorial);
}

