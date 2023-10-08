/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Thu Aug 17 2023
	Task:-		To print the PASCAL TRIANGLE for a given input n.
	Guided By:-	Darsan Sir
*/

//DECLARATION
long int factorial(int n);
long int combination(int, int);



#include <stdio.h> 

int main()
{
	int rows;
	do
	{
		printf("How many rows u want? \n");
		printf("Please enter a positive number:");
		scanf(" %d", &rows);
	} 
	while(rows<=0);
	
	printf(" ######################################################################################################### \n");
	printf(" 					PASCAL TRIANGLE							   \n");
	printf(" ######################################################################################################### \n");

	int row, term;
	
	for( row =1; row <= rows; row++)
	{
		for (term=1; term <= row; term++)
		{
			//space=
			printf(" %ld", combination(row,term));
		}
		printf("\n");
	}
	return 0;
}

long int factorial(int n)
{
	long int i=1;
	long int facValue=1;
	for(;i<=n;i++)
	{
		facValue *= i;
	}
	return facValue;
}

long int  combination(int c, int r)
{
	long int comValue;
	comValue = factorial(c) / ( factorial(r) * factorial(c-r) );
	return comValue;
}
