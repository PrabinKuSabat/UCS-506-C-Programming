/*
	Written By:-	Prabin Kumar Sabat
	Regd No:-	211220
	Date:-		Mon Aug  7 2023
	Task:-		To check whether a given number is perfect or not.
*/

#include <stdio.h>

int main()
{
	printf("\n Enter the number:");
	int number;
	scanf(" %d", &number);

	//The number 1 is a perfect number
	if(number == 1)		//1 is being checked before to keep the loop simpler.
	{
		printf(" CONGO!!! The given number 1 is a perfect number. \n\n");
		return 0;	//terminates the process early if input is 1.
	}
	
	//uses a loop to find out the perfect divisors and to calculate their sum
	int sum=0;
	for(int divisor=1; divisor<number; divisor++)		//loop runs till divisor becomes equal to the number
	{
		if(number%divisor == 0)
		{
			sum+=divisor;			//if divisor is equal to the number it is added to the sum
		}
	}
	
	//checks if the sum is equal to the number and prints the result accordingly
	if (sum==number)
	{
		printf(" CONGO!!! The given number %d is a perfect number. \n\n", number);
	}
	else
	{
		printf(" The given number %d is not a perfect number. \n\n", number);
	}
	
	return 0;
	
}

