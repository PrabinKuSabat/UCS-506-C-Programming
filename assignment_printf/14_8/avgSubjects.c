/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Mon Aug 21 2023
	Task:-		To find the average of marks obtained by all students of my class, based on how many subjects they appeared for.
	Guided By:-	Darsan Sir
*/


//Declaration 
void fileHeader(void);
void fileEnd(void);


#include <stdio.h> 
#include <stdlib.h>

void takeInputs(FILE *);

int main()
{
	fileHeader();

	FILE *fptr;
	fptr= fopen("./log.txt","a+");

	takeInputs(fptr);

	char file;

	fptr= fopen("./log.txt","a+");

        if(fptr == NULL)
        {
                printf("Error!");
                exit(1);
        }
	
	char c=fgetc(fptr);
	
	printf(" The average marks of all the students with their regd no. is:");
	while(c!=EOF)
	{
		printf("%c", c);
		c=fgetc(fptr);
	}
	fclose(fptr);

	fileEnd();
	return 0;
}

void takeInputs(FILE *fptr)
{
	int regdNo;
	printf("Please enter the regd. no:");
	scanf( "%d", &regdNo);

	if(regdNo==0)
		return;

	printf("Please enter the marks of all the subjects:");
	int marks,sum=0,i=0;
	do
	{
		i++;
		scanf(" %d", &marks);
		sum+=marks;
	}
	while(marks!=0);

	double avg=sum*1.0/(i-1);

	//FILE *fptr;

        //fptr= fopen("./log.txt","a");

        /*if(fptr == NULL)
        {
                printf("Error!");
                exit(1);
        }*/


	fprintf(fptr, "%d----%f\n", regdNo, avg);

	//fclose(fptr);
	
	return;
}



void fileHeader(void)
{
	printf("\n\n");
	printf("######################################################################################################");
	printf("\n");						//   |	
	printf("				AVERAGE MARKS OF ALL THE STUDENTS OF THE CLASS		    							  ");
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
