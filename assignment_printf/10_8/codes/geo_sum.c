/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Sat Aug 12 2023
	Task:-		To find the sum of first n terms in any geometric series using for.
	Guided By:-	Darsan Sir
*/


#include <stdio.h> 

int main()
{
	printf(" Enter the total no. of terms:");
	int terms;
	scanf(" %d", &terms);
	printf(" Enter the start term:");
	int stTerm;
	scanf(" %d", &stTerm);
	printf(" Enter the common ratio:");
	int ratio;
	scanf(" %d", &ratio);

	int terCount=0;
	int nextTerm=stTerm;
	int sum;
	
	for (sum=0;terCount<terms;terCount++)
	{
		sum+=nextTerm;
		nextTerm*=ratio;
	}
	
	printf(" The sum of the first n terms in your geometric series is:%d\n",sum);
}
