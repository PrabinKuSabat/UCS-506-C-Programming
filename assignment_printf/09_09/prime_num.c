/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Mon Sep 11 2023
	Task:-		To generate prime numbers from 1 to 100
	Guided By:-	Darsan Sir
*/


//Declaration 
void fileHeader(void);
void fileEnd(void);
void fillArray( int []);
void nonZero(int []);
void findDelete(int [], int);
void printPrimes(int []);

#include <stdio.h> 

#define maxLimit 100
#define startPoint 2

int main()
{
	fileHeader();
	int array[maxLimit];
	fillArray(array);
	nonZero(array);
	printPrimes(array);
	fileEnd();
	return 0;

}

void fillArray(int array[])
{
	int count = 0;
	for(; count<maxLimit; count++)
	{
		array[count]=count+1;
	}
	return;
}

void nonZero(int array[])
{
	int count = 1;
	for(; count<maxLimit; count++)
	{
		if(array[count]>0)
		{
			findDelete(array, count);
		}
	}
	return;
}


void findDelete(int array[], int index)
{
	int increment=array[index];
	int count=index+increment;
	for(; count<maxLimit; count=count+increment)
	{
		array[count]=0;
	}
	return;
}

void printPrimes(int array[])
{
	int count=0;
	printf(" The prime numbers are: \n");
	for(; count<maxLimit; count++)
	{
		if(array[count]>0)
		{
			printf(" %d", array[count]);
		}
	}
	printf("\n");
	return;
}

void fileHeader(void)
{
	printf("\n\n");
	printf("######################################################################################################");
	printf("\n");						//   |	
	printf("					 GENERATE PRIME NUMBERS  	    							  ");
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
