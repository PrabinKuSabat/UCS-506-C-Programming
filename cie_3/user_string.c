/*
	Written By:-	Prabin Kumar Sabat
	Regd. No.:-	211220
	Date:-		Thu Oct  5 2023
	Task:-		To write the functions file for the user_main.c file.
*/


#include "user_string.h"

//0. Taking input from user
int lenStr(char *strPointer)
{
	int length=0;
	while(*strPointer++)
		length++;
	return length;
}
void takeInput(char *strPointer)
{
	fgets(strPointer, maxLimit, stdin);
	int stringLen=lenStr(strPointer);
	if(stringLen<maxLimit-1)
	{
		int replacementPoint=stringLen-1;
		*(strPointer+replacementPoint)=0;
	}
	clearBuffer(strPointer);
	return;
}
void clearBuffer(char *strPointer)
{
        if(lenStr(strPointer)>=maxLimit-1)
        {
                char c;
                while((c=getchar()) != '\n' && c != EOF);
        }
        return;
}

void prntStr(char *strPointer)
{
	printf(" \"");
	for(;*strPointer;strPointer++)
		printf("%c", *strPointer);
	printf("\"\n");

	return;
}
//1. Function which takes a strPointer as input and prints the count of each character in the string
void count_chars(char *strPointer)
{
	char charStr[2*maxLimit+1]="";
	char *location;
	while(*strPointer)
	{
		checkChar(*strPointer,charStr);
		*strPointer++;
	}
	printf(" The number of characters in the string are as follows:");
	prntChar(charStr);
	printf(" \n");

}
void checkChar(char character, char *charStrPointer)
{
	while(*charStrPointer)
	{
		if(*charStrPointer==character)
		{
			*(charStrPointer+1)+=1;
			return;
		}
		charStrPointer++;
	}
	*charStrPointer=character;
	*(charStrPointer+1)=1;
	*(charStrPointer+2)=0;
	return;
}
void prntChar(char *charStr)
{
	while(*charStr)
	{
		printf(" %c--%d ", *charStr, *(charStr+1));
		charStr+=2;
	}
	return;

}


//2. Function which takes a strPointer as input and sorts the characters in the string
void sort_chars(char *strPointer)
{
	char *endPointer=strPointer+lenStr(strPointer)-1;
	printf(" The given string is:");
	prntStr(strPointer);
	divide(strPointer, endPointer);
	printf(" The sorted string is:");
	prntStr(strPointer);

	return;
}

int sortStrLen(char *strPointer, char *endPointer)
{
	int length=0;
	for(; strPointer<=endPointer; strPointer++)
		length++;
	return length;
}

void divide(char *strPointer, char *endPointer)
{
	int stringLen=sortStrLen(strPointer, endPointer);
	char *midPoint=strPointer+stringLen/2;
	if(strPointer!=midPoint)
	{
		divide(strPointer, midPoint-1);
		divide(midPoint, endPointer);
		merge(strPointer, midPoint, endPointer, stringLen);
	}

	return;
}

void merge(char *str1Pointer, char *str2Pointer, char *endPoint2, int stringLen)
{
	char *endPoint1=str2Pointer;
	char *mainStrPointer=str1Pointer;
	char sortedString[stringLen+1];
	char *sortedStrPointer=sortedString;
	while(str1Pointer<endPoint1 && str2Pointer<=endPoint2)
	{
		if(*str1Pointer<*str2Pointer)
		{
			*sortedStrPointer=*str1Pointer;
			str1Pointer++;
			sortedStrPointer++;
		}
		else
		{
			*sortedStrPointer=*str2Pointer;
			str2Pointer++;
			sortedStrPointer++;
		}
	}

	for(; str1Pointer<endPoint1; str1Pointer++, sortedStrPointer++)
		*sortedStrPointer=*str1Pointer;
	for(; str2Pointer<endPoint2; str2Pointer++, sortedStrPointer++)
		*sortedStrPointer=*str1Pointer;
	*sortedStrPointer=0;
	sortedStrPointer=sortedString;
	for(;*sortedStrPointer; sortedStrPointer++,mainStrPointer++)
		*mainStrPointer=*sortedStrPointer;

	return;
}
