/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Mon Aug 21 2023
	Task:-		To print the sum of the next n integers starting from a given integer.
	Guided By:-	Darsan Sir
*/


//Declaration 
void fileHeader(void);
void fileEnd(void);
int findsum(int,int);

#include <stdio.h> 

int main()
{
	fileHeader();
	
	int startTerm;
	printf("Please enter the starting term:");
	scanf(" %d", &startTerm);

	int noTerms;
	printf("Please enter the no. of terms:");
	scanf(" %d", &noTerms);
	
	int lastTerm=startTerm+noTerms;

	int sum= findsum(startTerm, lastTerm);
	
	printf(" The sum of next %d numbers starting from %d is: %d", noTerms, startTerm, sum);
	fileEnd();
	
	return 0;
}

int findsum(int startTerm, int lastTerm)
{
	int sum;
	if(lastTerm==startTerm)
	{
		return 0;
	}
	sum = lastTerm + findsum(startTerm,lastTerm-1);
}

void fileHeader(void)
{
	printf("\n\n");
	printf("######################################################################################################");
	printf("\n");						//   |	
	printf("					SUM OF NEXT 'n' INTEGER 	  				  ");
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
