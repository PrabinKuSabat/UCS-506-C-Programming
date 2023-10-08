/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Sat Aug 12 2023
	Task:-		
	Guided By:-	Darsan Sir
*/


#include <stdio.h> 

int main()
{
	printf(" Till where u want to print the table??");
	int uInput;
	scanf(" %d", &uInput);
	while (uInput>10000)
	{
		printf(" Please enter a integer less than 10000: ");
		scanf(" %d", &uInput);
	}

	int multiple=0;
	for(;multiple <= uInput;multiple++)
	{
		printf(" 5 * %4d = %6d | 	6 * %4d = %6d | 	7 * %4d = %6d | 	8 * %4d = %6d | 	9 * %4d = %6d \n", multiple, 5*multiple, multiple, 6*multiple, multiple, 7*multiple, multiple, 8*multiple, multiple, 9*multiple);
	}
	
	return 0;
}
