/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Fri Jul 28 2023
	Task:-		TO print the size of different data types
	Guided By:-	Darsan Sir
*/

#include <stdio.h>
#include <math.h>

void main()
{
	printf(" The size of different data types are:");
	printf(" The size of long int is:     %zu\n", sizeof(long int));
	printf(" The size of short int is:    %zu\n", sizeof(short int));
	printf(" The size of unsigned int is: %zu\n", sizeof(unsigned int));
	printf(" The size of signed int is:   %zu\n", sizeof(signed int));
	printf(" The size of double is:       %zu\n", sizeof(double));
	printf(" The size of character is:    %zu\n", sizeof(char));
	printf(" The size of float is:        %zu\n", sizeof(float));
	printf(" The size of long double is:  %zu\n", sizeof(long double));
}
