/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Mon Sep 11 2023
	Task:-		1) To print the address and values of an array of 5 integers.
			2) To repeat the above step after initializing the values.
			3) Print values of array using a[i], i[a], *(a+i), *(i+a) and address using (a+i).
			4) Declare a pointer variable type integer and print values of array using pointer.
	Guided By:-	Darsan Sir
*/


//Declaration 
void fileHeader(void);
void fileEnd(void);
void printArray(int []);
void initArray(int []);
void printPointer(int []);


#include <stdio.h> 
#define maxLimit 5

int main()
{
	fileHeader();
	int array[maxLimit];
	printArray(array);
	initArray(array);
	int count =0;
	for(; count<maxLimit; count++)
	{
		printf(" array[count]=%d  count[array]=%d  *(array+count)=%d  *(count+array)=%d  (array+count)=%ls \n\n", array[count], count[array], *(array+count), *(count+array), (array+count));
		printf("\n");
	}
	printPointer(array);

	fileEnd();
	return 0;

}

void printArray(int array[])
{
	int count=0;
	printf(" The array is: [");
	for(;count<maxLimit; count++)
	{
		printf(" %ls, %d", &array[count], array[count]);
	}
	printf("] \n\n");
	return;
}

void initArray(int array[])
{
	int count=0;
	for(; count< maxLimit; count++)
	{
		array[count]=count+1;
	}
	return;
}

void printPointer(int array[])
{
	int count;
	int *ptr;
	ptr = array;
	for(count=0; count<maxLimit; count++)
	{
		printf("%ls  %d \n\n", ptr, *ptr);
	}
	return;
}
	




void fileHeader(void)
{
	printf("\n\n");
	printf("######################################################################################################");
	printf("\n");						//   |	
	printf("						    							  ");
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
