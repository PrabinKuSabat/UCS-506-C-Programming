/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Sat Aug 26 2023
	Task:-		To take inputs of regd no. and marks for an particular subject, store them in a array, and find 
			the topper, maximum marks, average of marks, minimum marks, standard deviation of marks, and
			median of marks.
	Guided By:-	Darsan Sir
*/


//Declaration 
void fileHeader(void);
void fileEnd(void);
void takeInput( int regdNo[], int marks[], int *); 
void printInput( int regdNo[], int marks[], int);
void max( int regdNo[], int marks[], int);
double avg(int marks[], int);
void min( int marks[], int);
void standardDeviation(int, int marks[], int);

//CONSTANTS
# define maxStudents 100

//LIBRARIES
#include <stdio.h> 

int main()
{
	fileHeader();
	
	int tStudents;	
	printf("What's the total no. of students: ");
	scanf(" %d", &tStudents);
	if( tStudents > 100 )
		do
		{
			printf("The program can't be used for more than 100 inputs. \n So enter a number less than 100 or ENTER 0 to exit!");
			scanf(" %d", &tStudents);
		}
		while( tStudents > 100);
	if( tStudents < 0 )
	{
		printf(" INVALID INPUT !!! ");
		return 0;
	}
	if( tStudents == 0)
	{
		printf(" THANK YOU !!! ");
		return 0;
	}
	printf("\n\n");


	int regdNo[maxStudents];
	int marks[maxStudents];

	takeInput( regdNo, marks, &tStudents);

	printInput( regdNo, marks, tStudents);

	max( regdNo, marks, tStudents);

	double average=avg( marks, tStudents);
	
	min( marks, tStudents);

	standardDeviation(average, marks, tStudents);

	fileEnd();
	return 0;
}

void takeInput( int regdNo[], int marks[], int *tStudents)
{
	int index = 0;
	do
	{
		printf(" Enter the REGD. NO.: ");
		scanf(" %d", &regdNo[index]);
		if( regdNo[index] == 0)
		{
			*tStudents = index;
			break;
		}
		printf(" Enter the MARK: ");
		scanf(" %d", &marks[index]);
		index++;
	}
	while(index < *tStudents);	
}

void printInput( int regdNo[], int marks[], int tStudents)
{
	int index=0;
	printf("\n\n REGD. NO. \t MARKS \n");
	printf(" --------------------- \n\n");
	for(; index < tStudents; index++)
	{
		printf(" %9d \t %5d \n", regdNo[index], marks[index]);
	} 
}

double avg( int marks[], int tStudents)
{
	double average;
	int index=0;
	int total=0;
	
	for(; index < tStudents; index++)
	{
		total += marks[index];
	}
	
	average = total*1.0 / tStudents;
	
	printf("\n The AVERAGE of all the marks is: %lf\n", average);
	
	return average;
}

void max(int regdNo[], int marks[], int tStudents)
{
	int index=0;
	int maxIndex=0;

	for(; index < tStudents; index++)
	{
		if (marks[index] > marks[maxIndex])
			maxIndex = index;
	}

	printf("\n\n The TOPPER is \t REGD. NO.: %d    with \t MARKS: %d. \n", regdNo[maxIndex], marks[maxIndex]);

	for(index=0; index < tStudents; index++)
	{
		if (marks[index] == marks[maxIndex])
		{
			if( index == maxIndex )
				continue;
			printf(" The other JOINT TOPPER is \t REGD. NO.: %d    with \t MARKS: %d. \n", regdNo[index], marks[index]);
		}
	} 

}

void min( int marks[], int tStudents)
{
	int index=0;
	int minIndex=0;
	
	for(; index < tStudents; index++)
	{
		if ( marks[index] < marks [minIndex])
			minIndex = index;
	}

	printf("\n The MINIMUM mark is: %d\n", marks[minIndex]);
}

void standardDeviation( int average, int marks[], int tStudents)
{
	int index=0;
	double sum=0.0;
	double standardDeviation;
	int mark;
	
	for(; index < tStudents; index++)
	{
		mark = marks[index];
		sum += (average - mark)*(average - mark);
	}

	standardDeviation = sum / tStudents;

	printf("\n The STANDARD DEVIATION of marks is: %lf\n", standardDeviation);
}

void bubbleSort( int marks[], int tStudents)
{
	int index1=0;
	int index2=1;
	int minIndex=0;
	int temp;
	for(;index < tStudents; index++)
	{
		for(;index2 < tStudents; index2++)
		{
			if(marks[index2] < marks[index])
			{
				minIndex = index2;
			}
		}
		
		temp = marks[index1]
		marks[index1] = marks[minIndex]
		marks[minIndex] = marks[index1]
 
	
	




void fileHeader(void)
{
	printf("\n\n");
	printf("######################################################################################################");
	printf("\n");						//   |	
	printf("					HANDLING MARKS OF A SUBJECT	    							  ");
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
