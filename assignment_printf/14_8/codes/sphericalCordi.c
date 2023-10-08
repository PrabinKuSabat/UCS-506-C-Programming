/* 	Written By:-	Prabin Kumar Sabat
	Date:-		Sat Aug 19 2023
	Task:-		To transform cartesian coordinates to spherical coordinates.
	Guided By:-	Darsan Sir
*/


//Declaration 
void fileHeader(void);
void fileEnd(void);
long double radius(int,int,int);
long double phi(int,int,int);
long double theta(int,int);


#include <stdio.h> 
#include <math.h>

int main()
{
	fileHeader();
	int x, y, z; //CARTESIAN coordinates
	printf("Please enter the CARTESIAN coordinates:\n");
	scanf(" %d %d %d", &x,&y,&z);
	
	long double r, the, fi;
	r=radius(x,y,z);
	the=theta(x,y);
	fi=phi(x,y,z);
	
	printf("\n\nThe spherical coordinate is (%.3LF,%.3LF,%.3LF).\n", r, the, fi);
	fileEnd();
	return 0;
}

long double radius(int x, int y, int z)
{
	long double radi;
	radi=sqrt( pow(x,2) + pow(y,2) + pow(z,2));
	return radi;
}

long double phi(int x, int y, int z)
{
	long double fi;
	fi = atan( sqrt( pow(x,2) + pow(y,2) )/z  );
	return fi;
}

long double theta(int x, int y) 
{
	long double theta;
	theta = atan(y*1.0/x);
	return theta;
}

void fileHeader(void)
{
	printf("\n\n");
	printf("######################################################################################################");
	printf("\n");						   
	printf("			      CARTESIAN COORDINATES TO SPHERICAL CORDINATES 			      ");
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
