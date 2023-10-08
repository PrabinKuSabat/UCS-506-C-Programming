/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Mon Sep  4 2023
	Task:-		To write a program which does the following:
			1. Declare N using #define N .....								(1M)
			2. Write a function to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5+....+N!/N. 		(4M)
			3. Write a function to read an array A of size N of type real numbers.				(4M)
			4. Write a function to sort array A using one of sorting algorithms known to you.		(4M)
			5. Write a function to print an array A of size N of type real numbers.				(3M)
			6. Write a function to print maximum and minimum of array A of size N of type real numbers.	(2M)
			7. Write a main program which uses above functions.						(2M)
*/


//Declaration 
void fileHeader(void);
void fileEnd(void);
#define N 40

void find_series_sum(void);
double series_sum( int);
long int factorial(int);

void read_array(double array[], int);
void sort(double array[], int);
void print_array(double array[], int);
void max_min(double array[], int);

#include <stdio.h> 

//#THE MAIN FUNCTION
int main()
{
	fileHeader();		//asthetics

	printf(" The maximum number you enter can't be more than %d.\n\n\n", N);
	find_series_sum();		
	
	int upto;
	double array[N];
	printf(" !!! WARNING : YOU CAN ENTER ONLY MAXIMUM OF %d VALUES INTO THE ARRAY !!!\n", N);
	printf(" HOW MANY INPUTS ARE YOU GOING TO ENTER:");	//lets the user decide how many slots of the array he is going to use. Performs the role of an dynamic array.
	scanf(" %d", &upto);
	while(upto>N)
	{
		printf(" Please enter a value less than %d.\n ", N);	//doesn't allow the user to exceed the given limit of N.
		scanf(" %d", &upto);
	}
	
	if(upto<=0)
	{
		printf("\n\n\n !!!! 	THANK YOU 	!!!!");		//if the user doesn't want to use the array he can exit early.
		fileEnd();
		return 0;
	}
	read_array(array,upto);
	sort(array,upto);
	print_array(array,upto);
	max_min(array,upto);
	
	fileEnd();

	return 0;
}

//sum of the series
void find_series_sum(void)
{	
	int upto;
	printf(" The series is: 1!/1 + 2!/2 + 3!/3 + ...... + N!/N \n");
	printf(" Till what number  you want to find the series??\n ");		//let's the user decide till where he want to find the series_sum.
	scanf(" %d", &upto);
	while(upto > N)
	{
		printf(" Please enter a number less than %d.\n ", N);		//again doesn't let the user to exceed the max limit of N.
		scanf(" %d", &upto);
	}
	double sum = series_sum(upto);
	printf(" The sum of the series upto %d is %lf.\n\n", upto, sum);	
	return;
}
		
	
	


double series_sum(int upto)
{
	int count=1;
	double sum=0;
	for(;count<=upto; count++)
	{
		sum+=factorial(count)*1.0/count;		//simple loop to count the sum of the series while using the factorial function.
	}
	
	return sum; 
}

long int factorial(int number)
{
	int count;
	long int fact=1;
	for(count=1; count<=number; count++)
	{
		fact*=count;					//uses the simple for loop to find the factorial 
	}
	return fact;
}

//read an array A
void read_array(double array[], int upto)
{
	int count=0;
	do
	{
		printf(" Please enter the %d input:", count+1 );	//takes the inputs from the user based on the number of inputs he wanted to give.
		scanf(" %lf", &array[count]);
		count++;
	}
	while (count < upto);
	return;
}

//sorting an array(selection sort)
void sort(double array[], int upto)
{
	int sorted_count;
	int minFind_count;
	int min;
	int temp;
	for(sorted_count=0; sorted_count<upto; sorted_count++)		//this selection sort uses two for loops to sort the given array
	{
		min = sorted_count;					//ensures that the sorted list is not disturbed.
		minFind_count = sorted_count;				//ensures that the second loop doesn't considers the sorted list.
		for(; minFind_count<upto; minFind_count++)		//finds the minimum for the particular index.
		{
			if(array[min]>array[minFind_count])
				min=minFind_count;			//changes the min index if any other index with a minimum values if found.
		}
		temp = array[sorted_count];
		array[sorted_count]=array[min];				//changes the value of the index with the min value
		array[min]=temp;
	}
	return;
}
				
				
	
//print an array
void print_array(double array[], int upto)
{
	int count = 0;
	printf("\n\n\n The array is:\n [");
	for(; count < upto-1; count++)					//uses a simple for loop for printing the values of the array
	{
		printf(" %lf,", array[count]);
	}
	printf(" %lf ] \n\n\n", array[count]);
	return;
}

//print maximum and minimum
void max_min(double array[], int upto)
{
	int count=0;
	int max=0, min=0;
	for(;count < upto; count++)					//this loop goes through the array ones and finds the max index  and min index
	{
		if(array[max]<array[count])
			max = count;
		if(array[min]>array[count])
			min = count;
	}
	printf(" The maximum and minimum values of the array are %lf and %lf respectively.\n", array[max], array[min]);
	return;
}

	


//for asthetics purpose
void fileHeader(void)
{
	printf("\n\n");
	printf("######################################################################################################");
	printf("\n");						//   |	
	printf("					#### CIE 2 04/09/2023 ###	    							  ");
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
