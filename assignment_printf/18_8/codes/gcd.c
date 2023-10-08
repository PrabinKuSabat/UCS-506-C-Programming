/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Mon Aug 21 2023
	Task:-		To find the gcd of two numbers.
	Guided By:-	Darsan Sir
*/


//Declaration 
void fileHeader(void);
void fileEnd(void);
int gcd(int,int);


#include <stdio.h> 

int main()
{
	fileHeader();
	
	int InputF, InputS;
	printf("Please enter the two numbers:\n");
	scanf(" %d %d", &InputF, &InputS);
	
	int result=gcd(InputF,InputS);
	
	printf("The gcd of the given two numbers is: %d", result);

	fileEnd();
	return 0;	

}

int gcd(int a, int b)
{
	if(b%a==0)
		return a;
	if(a%b==0)
		return b;
	if(a<b)
	{
		return gcd(b%a,a);
	}
	if(a>b)
	{
		return gcd(a%b,b);
	}
}




void fileHeader(void)
{
	printf("\n\n");
	printf("######################################################################################################");
	printf("\n");						//   |	
	printf("				     TO FIND THE GCD OF 2 GIVEN NUMBERS	    							  ");
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
