/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Thu Aug 10 2023
	Task:-		To find the product of n integers entered by a user. If user enters 0 the input is skipped.
	Guided By:-	Darsan Sir
*/


#include <stdio.h> 

int main()
{
	printf("Enter the total number of numbers:");
	int total;
	scanf(" %d", &total);
	
	int product=1;
	int usr_input;
	int input_count=1;

	do
	{
		printf("Enter the number %d :",input_count);
		scanf(" %d", &usr_input);
		if (usr_input==0)
		{
			input_count++;
			continue;
		}
		product *= usr_input;
		input_count++;
	}
	while (input_count <= total);
	
	printf("The product of the inputs given is: %d\n", product);
}
