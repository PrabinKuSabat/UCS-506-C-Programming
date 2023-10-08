/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Fri Jul 28 2023
	Task:-		To reverse a given 5-digit number
	Guided By:-	Darsan Sir
*/

#include <stdio.h>

void main()
{
	int number;
	printf(" Enter your 5 digit number: \n");
	scanf(" %d", &number);
	if (number/100000 == 0 && number/10000!=0 )
	{

		// To reverse a number
	
		int unit, ten, hundred, thousand, ten_thousand;
	
		unit = number%10;
		ten = (number/10)%10; 
		hundred = (number/100) % 10; 
		thousand = (number/1000) % 10;
		ten_thousand = (number/10000) % 10;

		int rev_number;
		rev_number = unit*10000 + ten*1000 + hundred*100 + thousand*10 + ten_thousand;
		printf(" The reversed number is:%d \n", rev_number);

		if (number == rev_number)
		printf(" The given number %d and it's reverse are same. \n", number);
	}
	else
		printf(" Please enter a 5- digit number. \n");
}


