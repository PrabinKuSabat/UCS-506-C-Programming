/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Wed Jul 26 2023
	Task:-		Evaluate a given expression
	Guided By:-	Darsan Sir
*/

#include <stdio.h>
#include <math.h>

void main()
{
	printf(" Enter a real number:");
	double number;
	scanf(" %lf", &number);
	double result;
	result=2*M_PI*log(sqrt(1/9.8))*((1.0/4)*pow(sin(number/2),3)+exp(1.32));
	printf(" The result of the expression is: %lf\n", result);
}
