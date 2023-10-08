/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Thu Aug  3 2023
	Task:-		To print the sum of first n numbers.
	Guided By:-	Darsan Sir
*/

#include <stdio.h>

void main()
{
	printf("Enter the number:");
	int number;
	scanf(" %d", &number);
	int i = 1;
	int sum = 0;
	while (i <= number)
	{
		sum += i;
		i++;
	}
	printf("The sum of first '%d' numbers is %d \n", number, sum);
}
