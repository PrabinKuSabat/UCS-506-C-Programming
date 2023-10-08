/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Mon Jul 31 2023
	Task:-		To print the number of days a month has, given the month number.
	Guided By:-	Darsan Sir
*/

#include <stdio.h>
	
void main()
{
	printf("Enter the month number:");
	int month_no;
	scanf("%d", &month_no);
	if ( month_no == 2 )
	{ 
		printf( "The month is Feb and has 28 days. (Except for leapyears in which it has 29 days.) \n ");
	}
	else if ( month_no < 8 )
	{
		switch ( month_no % 2 )
		{
			case 1:
				printf( "The month has 31 days. \n " );
				break;
			case 0:
				printf( "The month has 30 days. \n " );
				break;
		}
	}
	else if ( month_no >= 8 && month_no <= 12)
	{
		switch ( month_no % 2 )
		{
			case 1:
				printf( "The month has 30 days. \n " );
				break;
			case 0:
				printf( "The month has 31 days. \n " );
				break;
		}
	}
	else
	{
		printf( "Those many months doesn't exist. \n " );
		printf( "Please refer to a calender! \n " );
	}
}
