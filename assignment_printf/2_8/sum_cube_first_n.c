/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Thu Aug  3 2023
	Task:-		To print the sum of cubes of first n numbers.
	Guided By:-	Darsan Sir
*/

#include <stdio.h>

void main()
{
	printf("Enter the number:");
	int number;
	scanf(" %d", &number);
	int count = number;
	int cube;
	int sum = 0;
	while (count > 0)
	{
		cube=1;
		cube = count*count*count;
		sum += cube;
		count--;
	}
	printf("The sum of cubes of first %d numbers is:%d \n", number, sum);
}

