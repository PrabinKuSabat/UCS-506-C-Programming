/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Thu Aug  3 2023
	Task:-		To print the sum of series of 0/1 + 1/2 .... + n/(n+1) for a user given n. 
	Guided By:-	Darsan Sir
*/

#include <stdio.h>

void main()
{
	printf("Enter the number:");
	int number;
	scanf(" %d", &number);
	int count = number;
	int numerator = number;
	int denominator = number +1;
	float series_sum = 0;
	while ( count > 0 )
	{
		series_sum += numerator*1.0/denominator;
		numerator--;
		denominator--;
		count--;
	}
	printf("The sum of the series 0/1 + 1/2 .... + n/(n+1) for first %d numbers is %f. \n", number, series_sum);
}
