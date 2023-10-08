/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Thu Sep 14 2023
	Task:-		1. Take inputs for a 2D array.
			2. Display the 2D array.
			3. Check for symmetry
			4. Add two metrices
			5. Multiply two metrices
			6. Transpose two metrices
	Guided By:-	Darsan Sir
*/

#define rows 10
#define cols 10


//Declaration 
void fileHeader(void);
void fileEnd(void);
void fill2D(double [][cols], int *, int *);
void print2D(double [][cols], int, int );
int checkSymmetric( double [][cols], int, int);
void addMatrices(double [][cols], double [][cols], double [][cols], int , int);
void takeAddMatrix(double [][cols], int, int);
void takeMulMatrix(double [][cols], int, int*);
void multiplyMatrices(double [][cols], double [][cols], double [][cols], int, int, int);
void transpose(double [][cols], double [][cols], int, int);


#include <stdio.h> 
#include <stdlib.h>

int main()
{	
	fileHeader();
	char uInput;
	int u1Rows, u1Cols;
	printf(" The maxmum rows and columns are: %d and %d respectively. \n\n", rows, cols);
	printf(" Functions these program can do for u:\n");
	printf(" 1. Check Symmetric -- s\n");
	printf(" 2. Add Two Metrices -- a\n");
	printf(" 3. Multiply Two Metrices -- m\n");
	printf(" 4. Transpose One Matrix -- t\n");
	scanf(" %c", &uInput);
	//double array1[rows][cols];
	//double array2[rows][cols];
	//double array3[rows][cols];
	switch(uInput)
	{
		case 's':
		{
			double array1[rows][cols];
			fill2D(array1, &u1Rows, &u1Cols);

			printf("\n\n The matrix is:\n");
			print2D( array1, u1Rows, u1Cols);

			int result = checkSymmetric(array1, u1Rows, u1Cols);
			if(result==0)
				printf("\n\n The input matrix is symmetric.\n");
			else
				printf("\n\n The input matrix is not symmetric.\n");
			break;
		}
		case 'a':
		{
			double array1[rows][cols];
			printf("\n\n Please Enter the First Matrix:\n");
			fill2D(array1, &u1Rows, &u1Cols);

			printf("\n\n Please Enter the Second Matrix:\n");
			double array2[u1Rows][u1Cols];
			takeAddMatrix(array2, u1Rows, u1Cols);

			printf("\n\n The 1st matrix is:\n");
			print2D( array1, u1Rows, u1Cols);
			printf(" The 2nd matrix is:\n");
			print2D( array2, u1Rows, u1Cols);

			double array3[u1Rows][u1Cols];
			addMatrices(array1, array2, array3, u1Rows, u1Cols);

			printf("\n\n The 3rd matrix is:\n");
			print2D( array3, u1Rows, u1Cols);

			break;
		}
		case 'm':
		{
			double array1[rows][cols];
			printf("\n\n Please Enter the first Matrix:\n");
			fill2D( array1, &u1Rows, &u1Cols);

			double array2[u1Cols][cols];
			int u2Cols;
			printf("\n\n Please Enter the Second Matrix:\n");
			takeMulMatrix( array2, u1Cols, &u2Cols);

			printf("\n\n The 1st matrix is:\n");
			print2D( array1, u1Rows, u1Cols);
			printf(" The 2nd matrix is:\n");
			print2D( array2, u1Rows, u2Cols);
			
			double array3[u1Rows][u2Cols];
			multiplyMatrices( array1, array2, array3, u1Rows, u1Cols, u2Cols);
			printf("\n\n The result of the multiplication is:\n");
			print2D( array3, u1Rows, u2Cols);

			break;
		}
		case 't':
		{
			double array1[rows][cols];
			printf("\n\n Please Enter the Matrix:\n");
			fill2D( array1, &u1Rows, &u1Cols);

			double array2[u1Rows][u1Cols];
			printf("\n\n The matrix is:\n");
			print2D( array1, u1Rows, u1Cols);

			transpose( array1, array2, u1Rows, u1Cols);

			printf("\n\n The transposed matrix is:\n");
			print2D( array2, u1Rows, u1Cols);

			break;
		}
		
	}

	fileEnd();
	return 0;	
}

void fill2D(double array[][cols], int *uRows, int *uColumns)
{
	int rCount, cCount;
	char uNeed;
	printf("\n\n How many rows and cols u are going to enter?\n");
	scanf(" %d", uRows);
	scanf(" %d", uColumns);
	for(rCount=0;rCount<*uRows;rCount++)
	{
		for(cCount=0;cCount<*uColumns;cCount++)
		{
			printf(" Please enter the(%d,%d) element:", rCount, cCount);
			scanf(" %lf", &array[rCount][cCount]);
		}
	}
	return;
}

void print2D( double array[][cols], int uRows, int uCols)
{
	int count;
	int rCount, cCount;
	printf("  ---");
	for(count=0; count<uCols-1; count++)
		printf("              ");
	printf("      ---\n");
	for(rCount=0; rCount<uRows; rCount++)
	{
		printf(" | ");
		for(cCount=0; cCount<uCols; cCount++)
		{
			printf(" %9.3lf", array[rCount][cCount]);
			if(cCount!=uCols-1)
				printf("   :");
		}
		printf(" | \n");
	}
	printf("  ---");
	for(count=0; count<uCols-1; count++)
		printf("              ");
	printf("      ---\n");
	return;
}

int checkSymmetric( double array[][cols], int uRows, int uCols)
{
	int rCount, cCount;
	for(rCount=0; rCount<uRows; rCount++)
	{
		for(cCount=0; cCount<uCols; cCount++)
		{
			if(array[rCount][cCount]!=array[cCount][rCount])
				return 3;
		}
	}
	return 0;
}

void addMatrices(double array1[][cols], double array2[][cols], double array3[][cols], int uRows, int uCols)
{
	int rCount, cCount;
	for(rCount=0;rCount<uRows; rCount++)
	{
		for(cCount=0; cCount<uCols; cCount++)
		{
			array3[rCount][cCount] = array1[rCount][cCount] + array2[rCount][cCount];
		}
	}
	return;
}

void takeAddMatrix(double array2[][cols], int u1Rows, int u1Cols)
{
	int rCount, cCount;
	for(rCount=0; rCount<u1Rows; rCount++)
	{
		for(cCount=0; cCount<u1Cols; cCount++)
		{
			printf(" Please enter the (%d,%d) element:", rCount+1, cCount+1);
			scanf(" %lf", &array2[rCount][cCount]);
		}
	}
	return;
}



void takeMulMatrix(double array2[][cols], int uCols, int *u2Cols)
{
	int rCount, cCount;
	printf(" How many cols u are going to enter?");
	scanf(" %d", u2Cols);
	for(rCount=0; rCount<uCols; rCount++)
	{
	  	for(cCount=0; cCount<*u2Cols; cCount++)
		{
			printf("\n Please enter the (%d,%d) element:", rCount+1, cCount+1);
			scanf(" %lf", &array2[rCount][cCount]);
		}
	}
	return;
}


void multiplyMatrices(double array1[][cols], double array2[][cols], double array3[][cols], int u1Rows, int u1Cols, int u2Cols)
{
	int rCount, cCount, count;
	for(rCount=0; rCount<u1Rows; rCount++)
	{
		for(cCount=0; cCount<u2Cols; cCount++)
		{
			for(count=0; count<u1Cols; count++)
			{
				array3[rCount][cCount]+=array1[rCount][count]*array2[count][cCount];
			}
		}
	}
	return;
}


void transpose(double array1[][cols], double array2[][cols], int uRows, int uCols)
{
	int rCount, cCount;
	for(rCount=0; rCount<uRows; rCount++)
	{
		for(cCount=0; cCount<uCols; cCount++)
		{
			array2[rCount][cCount]=array1[cCount][rCount];
		}
	}
	return;
}

//asthetics
void fileHeader(void)
{
	printf("\n\n");
	printf("######################################################################################################");
	printf("\n");						//   |	
	printf("					    MATRIX OPERATIONS	   	 				  ");
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
