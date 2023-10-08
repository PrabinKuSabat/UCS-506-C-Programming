/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Sat Aug 19 2023
	Task:-		
	Guided By:-	Darsan Sir
*/

//Declaration
void swap(int*,int*);
void fileHeader(void);
void fileEnd(void);


#include <stdio.h> 

int main()
{	
	fileHeader();
	int a,b;
	printf("\nPlease enter two positive numbers:  \n");
	scanf(" %d%d", &a, &b);
	printf("The first number is:%d, The second number is:%d\n\n", a,b);
	swap(&a,&b);
	printf("The first number is:%d, The second number is:%d\n", a,b);
	fileEnd();
	return 0;
}

void swap(int *a, int *b)
{
	int c;
	c=*a;*a=*b;*b=c;
}



	
void fileHeader(void)
{
	printf("######################################################################################################\n");
	printf("				 	      SWAP 2 NUMBERS  						      \n");
	printf("######################################################################################################\n\n");
}
	
void fileEnd(void)
{
	printf("######################################################################################################\n");
	printf("						  SAIRAM!					      \n");	
	printf("######################################################################################################\n\n");
}
