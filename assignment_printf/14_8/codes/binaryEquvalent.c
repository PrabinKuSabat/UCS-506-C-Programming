/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Thu Aug 17 2023
	Task:-		To determine the binary equivalent of a decimal number and demostrate its usage.
	Guided By:-	Darsan Sir
*/

//DECLARATION	
long double findBinary(long int);
int power(int,int);


#include <stdio.h> 

int main()
{
	long int decimal;
	printf(" Please enter your decimal integer number:");
	scanf(" %ld", &decimal);
	long double binary= findBinary(decimal);
	printf(" The binary representation of your decimal number is: %.2LF\n", binary);
	return 0;
}

long double findBinary(long int decimal)
{
	long double binary=0.0;
	int count=0;
	while(decimal>0)
	{
		int place=power(count,10);
		binary= binary+ (decimal%2)*place;
		count++;
		decimal=decimal/2;
	}
	return binary;
}

int power(int i,int n)
{
	int result=1;
	if ( i==0)
	{
		return result;
	}
	
	for (; i>0; i--)
	{
		result = result * n;
	}
	return result;
}
