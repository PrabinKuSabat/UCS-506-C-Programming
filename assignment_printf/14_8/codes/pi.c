/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Sat Aug 19 2023
	Task:-		TO find the value of pi constant based on series expansion pi = 4( 1 - 1/3 + 4/5 - 1/7+....)
	Guided By:-	Darsan Sir
*/


//Declaration 
void fileHeader(void);
void fileEnd(void);
long double piValue(int);


#include <stdio.h> 
#include <math.h>

int main()
{
	fileHeader();

	int terms;
	printf("Enter how many terms of the series expansion u want to use:\n");
	scanf(" %d", &terms);

	long double pi;
	pi=piValue(terms);

	printf("The value of pi is:%.4LF",pi);
	
	fileEnd();
	return 1;

}

long double piValue(int i)
{
	long double value=0;
	for(;i>0;i--)
	{
		value+= pow(-1,i+1)*1/(2*i-1);
		printf(" %LF %d\n", value, i);
	}
	return 4*value;
}

void fileHeader(void)
{
	printf("\n\n");
	printf("######################################################################################################");
	printf("\n");						//   |	
	printf("						 PI VALUE   							  ");
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
