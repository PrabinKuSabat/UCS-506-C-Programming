/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Mon Jul 31 2023
	Task:-		To check whether a given alphabet is vowel or consonant.
	Guided By:-	Darsan Sir
*/

#include <stdio.h>

void main()
{
	printf("Enter your alphabet: (Only the first alphabet of your input will be considered) \n ");
	char alpha;
	scanf( " %c", &alpha);
	int ascii_value = alpha;
	if ( (ascii_value >= 65 && ascii_value <= 90) || (ascii_value >= 97 && ascii_value <= 122) )
	{
		switch(alpha)
		{
			case 'a':
			case 'A':

			case 'e':
			case 'E':

			case 'i':
			case 'I':

			case 'o':
			case 'O':

			case 'u':
			case 'U':
				printf("It's a vowel! \n ");
				break;
			default:
				printf("It's a consonant! \n ");
		}
	}
	else
		printf("Please enter an Alphabet! \n "); 
}
