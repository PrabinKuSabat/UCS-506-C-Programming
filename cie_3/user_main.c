/*
	Written By:-	Prabin Kumar Sabat
	Regd. No.:-	211220
	Date:-		Thu Oct  5 2023
*/


#include <stdio.h> 
#include "user_string.h"

int main()
{
	int uInput;
	printf(" What operation u want to perform?");
	scanf(" %d", &uInput);
	getchar();

	switch(uInput)
	{
		case 1:
		{
			char uString[maxLimit];
			printf(" Please enter the string: \n");
			takeInput(uString);
			count_chars(uString);
			break;
		}

		case 2:
		{
			char uString[maxLimit];
			printf(" Please enter the string: \n");
			takeInput(uString);
			sort_chars(uString);
			break;
		}
	}
	
	return 0;


}
