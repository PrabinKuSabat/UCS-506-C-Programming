/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Sat Aug 12 2023
	Task:-		To print the first n prime numbers using do-while loop.
	Guided By:-	Darsan Sir
*/


#include <stdio.h> 

int main()
{
	printf(" How many prime numbers u want..");
	int total;
	scanf("%d",&total);
	
	while ( total <= 0)
	{
		printf(" Please enter a positive integer:");
		scanf(" %d", &total);
	}

	int pNumCount= 0;
	
	printf(" The first %d prime numbers are:", total);
	
	int numCount=2;
	do
	{
		int facCount=2;	//factor count
		do
		{
			if ( facCount * facCount > numCount )
			{
				printf(" %d", numCount);
				numCount++;
				pNumCount++;
				break;
			}
			if ( numCount % facCount == 0)
			{
				numCount++;
				break;
			}
			facCount++;
		}
		while( facCount <= numCount );
	}
	while ( pNumCount < total);
	
	printf(" \n");

	return 0;

}
