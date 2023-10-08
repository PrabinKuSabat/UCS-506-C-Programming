/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Sat Sep  9 2023
	Task:-		To swap even and odd position numbers in an array of doubles.
	Guided By:-	Darsan Sir
*/


//Declaration 
void fileHeader(void);
void fileEnd(void);
int take_input(double array[]);
void arraySwap(double [], int);
void printArray(double [], int);

# define maxLimit 10


#include <stdio.h> 


int main()
{
	fileHeader();
	double array[maxLimit];
	int total_inputs=take_input(array);
	printArray(array, total_inputs);

	arraySwap(array,total_inputs);
	printArray(array, total_inputs);
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

void arraySwap(double array[],int total_inputs)
{
	int count=0;
	double temp;
	for(;count<total_inputs;count=count+2)
	{
		temp=array[count];
		array[count]=array[count+1];
		array[count+1]=temp;
	}
	return;
}

void printArray(double array[], int total_inputs)
{
	int count=0;
	printf(" The array is: [");
	for(; count<total_inputs; count++)
	{
		printf(" %lf,", array[count]);
	}
	printf("] \n");
	return;
}


//asthetics
void fileHeader(void)
{
	printf("\n\n");
	printf("######################################################################################################");
	printf("\n");						//   |	
	printf("					  SWAP EVEN AND ODD POSITIONS	    							  ");
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
