/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Thu Aug 10 2023
	Task:-		
	Guided By:-	Darsan Sir
*/


#include <stdio.h> 

int main()
{
	printf("Enter the total number of numbers:");
	int total;
	scanf(" %d", &total);
	float sum = 0.0;
	int usr_input;
	int input_count = 1;
	
	do
	{
		printf("Enter number %d:", input_count);
		scanf(" %d", &usr_input);
		if (usr_input < 0)
		{
			printf("The average of %d numbers entered til now is: %f \n", input_count-1, sum/(input_count-1));
			break;
		}
		sum+=usr_input;
		input_count++;
	}
	while(input_count <= total);
	
	if (input_count > total)
	{
		printf("The average of all the %d numbers entered till now is: %f \n", total, sum/total);
	}
	return 0;
}
