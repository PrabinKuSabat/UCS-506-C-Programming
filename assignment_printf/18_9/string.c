#include <stdio.h>
#include "string.h"

//0. Printing a string and Take a string Input
int printStr(char *pointer)
{
	printf(" \"");
	while(*pointer)
	{
		printf("%c",*pointer);
		pointer++;
	}
	printf("\" \n");

	return 0;
}

int getStr(char *pointer)
{
	char *endPointer=pointer+maxLimit;
	while(pointer<endPointer || *pointer != '\n')
	{
		*pointer=getchar();
		pointer++;
	}
	*pointer=0;
}

void myFgets(char *myString1)
{
        fgets(myString1, maxLimit, stdin);
	if(lenStr(myString1)<maxLimit-1)
	{
        	int replacementPoint=lenStr(myString1)-1;
        	*(myString1+replacementPoint)=0;
	}
	clearBuffer();
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

void get1Str(char *myString1)
{
        printf(" Please enter the string:");
        myFgets(myString1);
        printf(" The entered string is:");
        printStr(myString1);
	return;
}


//1. String Length
int lenStr(char *pointer)
{
	int length=0;
	while(*pointer++)
		length++;
	return length;
}

//2. Copy String
void cpyStr(char *str2Pointer, char *strtIndex, char *endIndex)
{
	while(strtIndex <= endIndex)
	{
		*str2Pointer=*strtIndex;
		str2Pointer++;
		strtIndex++;
	}

	*str2Pointer=0;
	return;
}

//3. Concatenate Strings
void catStr(char *str1Pointer, char *str2Pointer)
{
	char *catPoint=str1Pointer+lenStr(str1Pointer);
	while(*str2Pointer)
	{
		*catPoint=*str2Pointer;
		catPoint++;
		str2Pointer++;
	}
	*catPoint=0;

	return;
}

//4. Function to print Alternate characters in string.
void altStrPrinting(char *str1Pointer)
{
	char *endPoint=str1Pointer+lenStr(str1Pointer);
	printf(" \" ");
	while(str1Pointer+1<endPoint)
	{
		printf("%c ", *str1Pointer+1);
		printf("%c ", *str1Pointer);
		str1Pointer+=2;
	}
	if(str1Pointer<endPoint)
		printf("%c ", *str1Pointer);
	printf("\" \n");
	
	return;
}

//6. Function to accept a String and returns its substring
void subStr(char *str1Pointer, char *str2Pointer, int strtPos, int totPos)
{
	char *strtPointer=str1Pointer+strtPos;
	char *endPointer=str1Pointer+totPos;

	while(strtPointer<endPointer)
	{
		*str2Pointer=*strtPointer;
		str2Pointer++;
		strtPointer++;
	}
	*str2Pointer=0;

	return;
}

//7. Function to print alternate characters of a string in reverse
void revAltStrPrinting(char *str1Pointer)
{
	char *printPointer=str1Pointer + lenStr(str1Pointer)-1;
	printf(" \" ");
	while(printPointer>str1Pointer)
	{
		printf("%c ", *(printPointer-1));
		printf("%c ", *printPointer);
		printPointer-=2;
	}
	if(lenStr(str1Pointer)%2==1)
		printf("%c ", *printPointer);
	printf("\" \n");

	return;
}

//8. Function which takes 2 strings as input and returns the largest string
char *largestString(char *str1Pointer, char *str2Pointer)
{
	int len1=lenStr(str1Pointer);
	int len2=lenStr(str2Pointer);
	if(len1<len2)
		return str2Pointer;
	else 
		return str1Pointer;
}

//9. Function to accept a string and return number of vowels
int vCountStr(char *str1Pointer)
{
	int vCount=0;
	while(*str1Pointer)
	{
		switch(*str1Pointer)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				vCount++;
				break;
		}
		str1Pointer++;
	}
	return vCount;
}

//10. Function to accept a string and print vowels
int vPrnStr(char *str1Pointer)
{
	printf(" \"");
	while(*str1Pointer)
	{
		switch(*str1Pointer)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				printf(" %c", *str1Pointer);
				break;
		}

		*str1Pointer++;
	}
	printf(" \"");
	return 0;
}

//11. Function to accept a string and print no. of each vowel
int vCuntPrnStr(char *str1Pointer)
{
	int count=0;
	printf(" \"");
	while(*str1Pointer)
        {       
                switch(*str1Pointer)
                {       
                        case 'a':
                        case 'e':
                        case 'i':
                        case 'o':
                        case 'u':
				count++;
				printf(" %d--%c ", count, *str1Pointer);
				break;
                }

                *str1Pointer++;
        }
	printf("\"");

	return 0;
}

//12. Function to replace a substring by another substring in a given string.
void replaceSubStr(char str1Pointer, char str2Pointer, int strtPos)
{
	char *repPos=str1Pointer+strPos;
	for(;*str2Pointer;str2Pointer++,repPos++)
		repPos=*str2Pointer;
}

//13. Function to accept a string and a char and find out whether this char
//is present in the  string.
int findCharStr(char *str1Pointer, char given)
{
	for(;*str1Pointer;str1Pointer++)
		if(*str1Pointer=given)
			return 1;
	return 0;
}
	

//14. Function to sort alphabets of a given string
int sortStr(char *str1Pointer)
{
	char *endPointer=str1Pointer+lenStr(str1Pointer)-1;
	printf(" The sorted string is:");
	divide(str1Pointer, endPointer);
	printStr(str1Pointer);

	return 0;
}

void divide(char *strtPos, char *endPos)
{
	int strLen=sortStrLen(strtPos,endPos);
	char *midPos=strtPos+strLen/2;
	if(strtPos!=midPos)
	{
		divide(strtPos,midPos-1);
		divide(midPos,endPos);
		merge(strtPos,midPos,endPos,strLen);
	}
}

int sortStrLen(char *strtPos, char *endPos)
{
	int length=0;
	for(;strtPos<=endPos;strtPos++)
	{
		printf(" %c", *strtPos);
		length++;
	}
	printf("%d\n",length);
	return length;
}

void merge(char *strt1Pos, char *strt2Pos, char *end2Pos,int strLen)
{
	char *mainStrPointer=strt1Pos;
	char *end1Pos=strt2Pos;
	char sortedString[strLen+1];
	char *sortedPos=sortedString;
	while(strt1Pos<end1Pos && strt2Pos<=end2Pos)
	{
		if(*strt1Pos<*strt2Pos)
		{
			*sortedPos=*strt1Pos;
			printf(" 1%c--", *sortedPos);
			strt1Pos++;
			sortedPos++;
		}
		else
		{
			*sortedPos=*strt2Pos;
			printf(" 0%c--", *sortedPos);
			strt2Pos++;
			sortedPos++;
		}
	}
	for(;strt1Pos<end1Pos;strt1Pos++,sortedPos++)
		*sortedPos=*strt1Pos;
	for(;strt2Pos<end2Pos;strt2Pos++,sortedPos++)
		*sortedPos=*strt2Pos;

	*sortedPos=0;
	sortedPos=sortedString;
	for(;*sortedPos;mainStrPointer++,sortedPos++)
	{
		printf(" %c--\n", *sortedPos);
		*mainStrPointer=*sortedPos;
	}
	return;
}


//15. Function to sort all words in a given string

