/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Sat Aug 26 2023
	Task:-		To print multiplication table of a user given number using array and for loop.
	Guided By:-	Darsan Sir
*/


//Declaration 
void fileHeader(void);
void fileEnd(void);
void fillTable( int table[], int);
void printTable( int table[], int);

//CONSTANTS
# define tableLimit 10

//LIBRARIES
#include <stdio.h> 

int main()
{
	fileHeader();
	
	int number;
	printf("Please enter the number: ");
	scanf(" %d", &number);
	
	int table[tableLimit];
	
	fillTable( table, number);
	printTable( table, number);

	fileEnd();
	return 0;

}

void fillTable( int table[], int number)
{
	int index = 0;
	
	for(; index < tableLimit; index++)
	{
		table[index] = (index+1)*number;
	}
}

void printTable( int table[], int number)
{
	int count =0;

	printf("\n\n The MULTIPLICATION TABLE for %d is: \n", number);
	for (; count < tableLimit; count++)
	{
		printf(" %d  * %3d  =  %d \n", number, count+1, table[count]);
	}
}



void fileHeader(void)
{
	printf("\n\n");
	printf("######################################################################################################");
	printf("\n");						//   |	
	printf("					    MULTIPLICATION TABLE	    							  ");
	printf("\n");
	printf("######################################################################################################");
	printf("\n\n");
}

void fileEnd(void)
{
	printf("\n\n");
	printf("######################################################################################################");
	printf("\n");
	printf("						  SAIRAM!!						  ");
	printf("\n");
	printf("######################################################################################################");
	printf("\n\n");
}
