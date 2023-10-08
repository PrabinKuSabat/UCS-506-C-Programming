/*
	Written By:-	Prabin Kumar Sabat
	Date:- 		24/07/23
	Task:-		To check if a given year is leap year or not.
	Guided by:-	Darshan Sir
*/

#include <stdio.h>

int main()
{
	int year;
	printf("\nEnter the year:\n");
	scanf("%d", &year);
	if (year%400==0)
			printf("\nThe given year %d is a leap year.\n\n", year);
	else
		if(year%4==0 && year%100!=0)
			printf("\nThe given year %d is a leap year.\n\n", year);
	else
		printf("\nThe given year %d is not a leap year.\n\n", year);
	return 0;
}
