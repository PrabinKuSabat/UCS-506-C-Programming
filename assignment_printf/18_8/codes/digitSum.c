/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Mon Aug 21 2023
	Task:-		
	Guided By:-	Darsan Sir
*/


//Declaration 
void fileHeader(void);
void fileEnd(void);
int digitsum(long int);


#include <stdio.h> 

int main()
{
	fileHeader();
	
	long int uInput;
	printf("Please enter your number: ");
	scanf(" %ld", &uInput);

	int digitSum = digitsum(uInput);
	
	printf("\nThe sum of all the digits of %ld is: %d", uInput, digitSum);

	fileEnd();
	return 0; 

}

int digitsum(long int number)
{
	int sum;
	if (number<10)
		return number;
	sum = number % 10 + digitsum(number/10);
}


void fileHeader(void)
{
	printf("\n\n");
	printf("######################################################################################################");
	printf("\n");						//   |	
	printf("						    							  ");
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
