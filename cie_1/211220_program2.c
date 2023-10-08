/*
	Written By:-	Prabin Kumar Sabat
	Regd. No:-	211220
	Date:-		Mon Aug  7 2023
	Task:-		To print the number of Sundays a month has in the current  year 2023.
*/

#include <stdio.h>

int main()
{
	//let's the user know about accepted inputs
	printf("\n !!! Disclaimer !!!\n");
	printf(" The program uses letters A,B,C... for representing the months.\n");
	printf(" So, \n A = January \n");
	printf(" B = February \n");
	printf(" C = March \n");
	printf(" D = April \n");
	printf(" E = May \n");
	printf(" F = June \n");
	printf(" G = July \n");
	printf(" H = August \n");
	printf(" I = September \n");
	printf(" J = October \n");
	printf(" K = November \n");
	printf(" L = December \n\n\n");

	//takes the input from the user.
	printf(" Enter the Letter Representing the month:");
	char l_month;		//l_month = Letter representing the month
	scanf(" %c", &l_month);
	
	//swtich-case being used for assining the no. of sundays and the month to the respective variables
	int no_sundays;
	char* month;
	switch(l_month)
	{
		case 'A':
			no_sundays = 5;
			month = "January";
			break;
		case 'B':
			no_sundays = 4;
			month = "February";
			break;
		case 'C':
			no_sundays = 4;
			month = "March";
			break;
		case 'D':
			no_sundays = 5;
			month = "April";
			break;
		case 'E':
			no_sundays = 4;
			month = "May";
			break;
		case 'F':
			no_sundays = 4;
			month = "June";
			break;
		case 'G':
			no_sundays = 5;
			month = "July";
			break;
		case 'H':
			no_sundays = 4;
			month = "August";
			break;
		case 'I':
			no_sundays = 4;
			month = "September";
			break;
		case 'J':
			no_sundays = 5;
			month = "October";
			break;
		case 'K':
			no_sundays = 4;
			month = "November";
			break;
		case 'L':
			no_sundays = 5;
			month = "December";
			break;
		default:
			printf("Please Enter a valid LETTER!!");

	
	}

	//printing the result
	printf(" There are %d Sundays in %s 2023. \n\n\n", no_sundays, month);

	return 0;
}
