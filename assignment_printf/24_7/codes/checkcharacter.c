/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Wed Jul 26 2023
	Task:-		
	Guided By:-	Darsan Sir
*/

#include <stdio.h>

int main()
{
	printf("Enter your character:");
	char character;
	scanf("%c", &character);
	int ascii=character;
	if (ascii >= 65 && ascii <= 90)
		printf(" The given character is an uppercase character.\n");
	else
		if ( ascii >= 97 && ascii <= 122)
			printf(" The given character is an lowercase character.\n");
		else
			if ( ascii >= 48 && ascii <= 57)
				printf(" The given character is a digit.\n");
			else
				printf(" The given character is a special character.\n");
	return 0;
}
