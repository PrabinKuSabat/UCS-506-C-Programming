/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Mon Aug 21 2023
	Task:-		To find the nth term of fibonnacci series.
	Guided By:-	Darsan Sir
*/


//Declaration 
void fileHeader(void);
void fileEnd(void);
int fibonnaciSeries(int,int,int);

#include <stdio.h> 

int main()
{
	fileHeader();

	int uInput;
	printf("Please enter the term number: ");
	scanf(" %d", &uInput);
	
	int a=0, b=1;
	
	if(uInput==1)
	{
		printf("\nThe first term is: %d", a);
		fileEnd();
		return 0;
	}
	if(uInput==2)
	{
		printf("\nThe first term is: %d", b);
		fileEnd();
		return 0;
	}
	
	int nextTerm=uInput-2;
	
	int term = fibonnaciSeries(a,b,nextTerm);
	
	printf("\nThe %d term is: %d", uInput, term);
	
	fileEnd();
	return 0;
}

int fibonnaciSeries(int a, int b, int termNumber)
{
	int c=a+b;
	if(termNumber==0)
		return c;
	else
		return fibonnaciSeries(b,c,termNumber-1);
}

void fileHeader(void)
{
	printf("\n\n");
	printf("######################################################################################################");
	printf("\n");						//   |	
	printf("					    FIBONNACI SERIES	    							  ");
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
