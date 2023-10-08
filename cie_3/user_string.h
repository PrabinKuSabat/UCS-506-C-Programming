/*
	Written By:-	Prabin Kumar Sabat
	Regd. No:-	211220
	Date:-		Thu Oct  5 2023
	Task:-		Header file for the user_string.c
*/

//Constants
# define maxLimit 20

//Header Files
# include<stdio.h>
# include<string.h>

//Function Prototypes

//0.
int lenStr(char *);
void takeInput(char *);
void prntStr(char *);
void clearBuffer(char *);

//1.
void count_chars(char *); //Function prototype which takes a string as input and prints
				//the count of each character.
void checkChar(char , char *);
void prntChar(char *);
//2.
//
void sort_chars(char *); //Function prototype which takes a string pointer as input and
				//sorts the characters in the string the pointer is 
				//pointing, in the string itself using merge sort
				//and prints the string.
int strLen(char *, char *);
void divide(char *, char *);
void merge(char *, char *, char *, int);
