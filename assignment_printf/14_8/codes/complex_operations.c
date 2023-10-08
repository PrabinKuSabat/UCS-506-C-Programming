/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Thu Aug 17 2023
	Task:-		To add, sub, multiply or divide two complex numbers.
	Guided By:-	Darsan Sir
*/

//DECLARATION
void operate(int,int,int,int,char);


#include <stdio.h> 

int main()
{
	printf("\n \nPlease enter the real part of the first com. num.:");
	int r1;
	scanf(" %d", &r1);
	
	printf("Please enter the imaginary part of the first com. num.:");
	int i1;
	scanf(" %d", &i1);
	
	printf("Please enter the real part of the second com. num.:");
	int r2;
	scanf(" %d", &r2);
	
	printf("Please enter the imaginary part of the second com. num.:");
	int i2;
	scanf(" %d", &i2);
	
	printf("\n \nAvailable operations are: \n a -> addition \n s -> subtraction \n m -> multiplication \n d -> division \n");
	printf("Please enter the operation:");
	char operation;
	scanf(" %c", &operation);

	operate(r1,r2,i1,i2,operation);
	
	return 0;
}

void operate(int r1, int r2, int i1, int i2, char operation)
{
	long double r, i;
	switch(operation)
	{
		case 'a':
			r=r1+r2;
			i=i1+i2;
			break;
		case 's':
			r= r1 - r2;
			i= i1 - i2;
			break;
		case 'm':
			r= r1*r2 - i1*i2;
			i= r2*i1 + r1*i2;
			break;
		case 'd':
			r= (r1*r2 + i1*i2)*1.0/(r2*r2 + i2*i2);
			i= (i1*r2 - r1*i2)*1.0/(r2*r2 + i2*i2);
			break;
		default:
			printf("Please enter valid operation input!!");
	}
	printf("\n\n The result is: %.2LF + i%.2LF \n\n", r, i);
}
