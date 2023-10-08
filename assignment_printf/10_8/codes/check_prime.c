/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Sat Aug 12 2023
	Task:-		To check if a given number is prime or not.
	Guided By:-	Darsan Sir
*/


#include <stdio.h> 

int main()
{
	printf(" Enter your number:");
	int uInput;
	scanf(" %d", &uInput);
	if (uInput==1)
	{
		printf(" Please check your basics!!!\n 1 is obviously not a PRIME  number. \n");
		return 0;
	}
	int numCounter=2;
	
	do
	{
		if (numCounter*numCounter > uInput)
		{
			printf(" The given number is a PRIME number. \n");
			break;
		}
		if (uInput%numCounter==0)
		{
			printf("The given number is not PRIME. \n");
			break;
		}
		numCounter++;
	}
	while (numCounter <= uInput);
	
	return 0;
		
}
