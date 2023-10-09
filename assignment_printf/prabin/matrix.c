#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"
//0. Ask size
void askSize(int *r, int *c)
{
	printf(" How many rows u want? ");
	scanf(" %d", r);
	printf(" How many cols u want? ");
	scanf(" %d", c);
}
//1. allocate matrix
double **allocate(int r, int c)
{	
	int i=0;
	double **mtrx=(double **)malloc(r*sizeof(double *));
	while(i<r)
	{
		*(mtrx+i)=(double *)malloc(c*sizeof(double));
		i++;
	}
	return mtrx;
}

//2. print matrix
void prntMtrx(double **array, int r, int c)
{
	printf(" The matrix is: \n");
	int row=0,col;
	while(row<r)
	{
		col=0;
		while(col<c)
		{
			printf(" %lf", *(*(array+row)+col));
			col++;
		}
		printf(" \n");
		row++;
	}
}

//3. read matrix
void readMtrx(double **array, int r, int c)
{
	printf(" Please enter the matrix elements: \n");
	int row=0,col;
	while(row<r)
	{
		col=0;
		while(col<c)
		{
			printf(" [ %d, %d ] : ", row, col);
			scanf(" %lf", &array[row][col]);
			col++;
		}
		row++;
	}
	return;
}

//4. trace matrix
double traceMtrx( double **array, int r)
{
	int row=0;
	double trace;
	while(row<r)
	{
		trace+=*(*(array+row)+row);
		row++;
	}

	return trace;
}

//5. Check Symmetric
int checkSymt(double **array, int r, int c)
{
	int row=0,col;
	while(row<r)
	{
		col=0;
		while(col<c)
		{
			if((*(*(array+row)+col))!=(*(*(array+col)+row)))
			{
				printf( " The matrix is not symmetric. \n");
				return 1;
			}
			col++;
		}
		row++;
	}

	printf(" The matrix is symmetric. \n");
	return 0;
}

//6. add matrix
double **addMtrx( double **array1, double **array2, int r, int c)
{
	double **add=allocate(r,c);
	int row=0,col;
	while(row<r)
	{
		col=0;
		while(col<c)
		{
			(*(*(add+row)+col))=(*(*(array1+row)+col))+(*(*(array2+row)+col));
			col++;
		}
		row++;
	}

	return add;
}

//7. subtract matrix
double **subMtrx(double **array1, double **array2, int r, int c)
{
	double **sub=allocate(r,c);
	int row=0,col;
	while(row<r)
	{
		col=0;
		while(col<c)
		{
			*(*(sub+row)+col)=(*(*(array1+row)+col))-(*(*(array2+row)+col));
			col++;
		}
		row++;
	}

	return sub;
}

//8. multiply matrix
double **multiMtrx(double **array1, double **array2, int r, int c)
{
	double **multi=allocate(r,c);
	int row=0,col1,col2;
	while(row<r)
	{
		col1=0;
		while(col1<c)
		{
			col2=0;
			while(col2<c)
			{
				*(*(multi+row)+col1)+=(*(*(array1+row)+col2))*(*(*(array2+col2)+row));
				col2++;
			}
			col1++;
		}
		row++;
	}

	return multi;
}

