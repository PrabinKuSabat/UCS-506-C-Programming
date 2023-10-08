/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Sat Sep  9 2023
	Task:-		To find out how many of the given inputs into an array are postive andnegative.
	Guided By:-	Darsan Sir
*/


//Declaration 
void fileHeader(void);
void fileEnd(void);
int take_input(double array[]);
void find(double array[], int, int *, int *);

# define maxLimit 25


#include <stdio.h> 


int main()
{
	fileHeader();
	double array[maxLimit];
	int total_inputs=take_input(array);
	int positives=0, negatives=0;
	find(array, total_inputs, &positives, &negatives);
	printf(" The total number of positives in the array are %d. \n The total number of negatives are %d. \n", positives, negatives);

	fileEnd();

	return 0;
	
}

int take_input(double array[])
{
	int count=0;
	do
	{
		printf(" Please enter the %d input:", count+1);
		scanf(" %lf", &array[count]);
		if(array[count]==0)
			break;
		count++;
	}
	while(count<maxLimit);
	
	return count;
}

void find(double array[], int total_inputs, int *positives, int *negatives)
{
	int count = 0;
	for(;count<total_inputs; count++)
	{
		if(array[count]>=0)
			*positives=*positives+1;
		else
			*negatives=*negatives+1;
	}
	return;
}

void fileHeader(void)
{
	printf("\n\n");
	printf("######################################################################################################");
	printf("\n");						//   |	
	printf("					COUNT POSITIVES AND NEGATIVES	    							  ");
	printf("\n");
	printf("######################################################################################################");
	printf("\n\n");
}

void fileEnd(void)
{
	printf("\n\n");
	printf("######################################################################################################");
	printf("\n");
	printf("						  SAIRAM!!						  ");
	printf("\n");
	printf("######################################################################################################");
	printf("\n\n");
}
