/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Thu Sep 21 2023
	Task:-		i) Function to find string length.
			ii)Function to copy a string 
			iii)Function to concatenate 2 strings
			iv)Function to print Alternate characters in string
			vi)Function to Accept a String and returns its substring. substr(str,start_pos,no_of_chars)
			vii)Function to prints its alternate characters in reverse
			viii)Function takes input 2 strings and returns the largest string.
			ix)Function to Accept a String and prints vowels
			x)Function to Accept a String and returns no of vowels
			xi)Function to Accept a String and prints no of each Vowel
			xii)Function to Accept a String and a character and find out whether this character is present in the string
			xiii)Function to replace a substring by another substring in a given string.
			xiv)Function to sort alphabets of a given a string.
			xv)Function to sort all words in a given string.

	Guided By:-	Darsan Sir
*/


int strLength(char *s);
#include <stdio.h> 
#include "myFunctions.h"
#include "string.h"

int main()
{
	hashLine();
	int uInput;
	printf(" What Function U want to PERFORM??");
	scanf("%d", &uInput);
	getchar();
	switch(uInput)
	{
		case 1:
		{
			char myString1[]="abcd";
			printStr(myString1);
			int length=lenStr(myString1);
			printf(" The length of the string is: %d",length);
			
			break;
		}
		case 2:
		{
			char myString1[maxLimit], myString2[maxLimit];
			int sIndex, eIndex;
			printf(" Please enter the first String:   (Don't enter more than %d!!!) \n", maxLimit);
			fgets(myString1,maxLimit,stdin);
			int replacementPoint=lenStr(myString1)-1;
			*(myString1+replacementPoint)=0;

			printf(" The given string is:");
			printStr(myString1);
			int maxPermiLen=lenStr(myString1)-1;

			printf(" Please enter the Starting and Ending Indices: \n");
			printf(" (The index starts from 0 and max is %d.)\n", maxPermiLen);
			scanf("%d",&sIndex);
			while(sIndex<0 || sIndex>maxPermiLen)
			{
				printf(" Please Enter a valid staring Index:");
				scanf(" %d", &sIndex);
			}
			scanf("%d",&eIndex);
			while(eIndex<sIndex || eIndex>maxPermiLen)
			{
				printf(" Please Enter a valid ending Index:");
				scanf(" %d", &eIndex);
			}

			char *strtIndex=myString1+sIndex, *endIndex=myString1+eIndex;
			cpyStr(myString2, strtIndex, endIndex);

			printf(" The copied string is:");
			printStr(myString2);

			break;
		}
		case 3:
		{	
			printf(" This part will concatenate the 2nd string to the 1st string. \n");
			char myString1[maxLimit], myString2[maxLimit];
			printf(" Please enter the first string:   (Don't enter more than %d!!!) \n", maxLimit);
			fgets(myString1, maxLimit, stdin);
			int replacementPoint1=lenStr(myString1)-1;
			*(myString1+replacementPoint1)=0;
			printf(" The 1st string is:");
			printStr(myString1);

			printf(" Please enter the second string:   (Don't enter more than %d!!!) \n", maxLimit);
			fgets(myString2, maxLimit, stdin);
			int replacementPoint2=lenStr(myString2)-1;
			*(myString2+replacementPoint2)='\0';
			printf(" The 2nd string is:");
			printStr(myString2);

			catStr(myString1, myString2);

			printf(" The concatenated string is:");
			printStr(myString1);

			break;
		}
		case 4:
		{
			char myString1[maxLimit];
			printf(" Please enter the string:");
			myFgets(myString1);
			printf(" The 1st string is:");
			printStr(myString1);

			printf(" Printing the alternate characters of the string:");
			altStrPrinting(myString1);
			
			break;
		}
		case 5:
		{
			char myString1[maxLimit], myString2[maxLimit];
			int strtPos, totPos;
			printf(" Please enter the string:");
			myFgets(myString1);
			printf(" The 1st string is:");
			printStr(myString1);

			printf(" The minimum position is 0 and maximum position is %d!!! \n", lenStr(myString1));
			printf(" Enter the starting positions:");
			scanf(" %d", &strtPos);
			while(strtPos<0 || strtPos>maxLimit)
			{
				printf(" Please enter a valid input:");
				scanf(" %d", &strtPos);
			}
			printf(" Enter the total no of Positons u want:");
			scanf(" %d", &totPos);
			while(strtPos+totPos>maxLimit)
			{
				printf(" Please enter a valid input:");
				scanf(" %d", &totPos);
			}

			subStr(myString1, myString2, strtPos, totPos);
			printf(" The substring which u wanted is:");
			printStr(myString2);

			break;
		}
		case 6:
		{
			char myString1[maxLimit];
			printf(" Please enter the string:");
			myFgets(myString1);
			printf(" The 1st string is:");
			printStr(myString1);

			printf(" Printing the alternate characters of the string in reverse order:");
			revAltStrPrinting(myString1);

			break;
		}
		case 7:
		{
			char myString1[maxLimit], myString2[maxLimit];
			printf(" Please enter the 1st string:");
			myFgets(myString1);
			printf(" Please enter the 2nd string:");
			myFgets(myString2);
			printf(" Both the strings are:\n");
			printStr(myString1);
			printStr(myString2);
			
			printf(" The largest string is:");
			printStr(largestString(myString1, myString2));
			
			break;
		}
		case 8:
		{
			char myString1[maxLimit];
			printf(" Please enter the string:");
			myFgets(myString1);
			printf(" The entered string is:");
			printStr(myString1);

			printf(" The total number of vowels in the string is: %d", vCountStr(myString1));

			break;
		}
		case 9:
		{
			char myString1[maxLimit];
			get1Str(myString1);
			printf(" The vowels present in the string are:");
			vPrnStr(myString1);

			break;
		}
		case 10:
		{
			char myString1[maxLimit];
			get1Str(myString1);

			printf(" The vowels with their counts are:");
			vCuntPrnStr(myString1);

			break;
		}
		case 11:
		{
			
		}
		case 12:
		{
			char myString1[maxLimit];
			get1Str(myString1);
			char given;
			printf(" Please enter the character u want to look for:");
			given=getchar();

			int present=findCharStr(myString1, given);
			if(present)
				printf(" The given character is present in the string.");
			else
				printf(" The given character is not present in the string.");

			break;
		}
		case 13:
		{
			char myString1[maxLimit];
			get1Str(myString1);
			sortStr(myString1);

			break;
		}
		case 14:
		{

		}


	}
	fileEnd();

	return 0;

}

