#include <stdio.h>
#include "matrix.h"
#include <stdlib.h>

int main()
{
	int uInput;
	int r, c;
	printf(" What function you want to run?");
	scanf(" %d", &uInput);

	switch(uInput)
	{
		case 1://trace
		{
			askSize(&r,&c);
			double **tracemtrx=allocate(r,c);
			readMtrx(tracemtrx, r, c);
			prntMtrx(tracemtrx, r, c);
			double trace=traceMtrx(tracemtrx, r);
			printf(" The trace is: %f \n", trace);

			break;
		}

		case 2://check symmetric
		{
			askSize(&r,&c);
			double **mtrx=allocate(r,c);
			readMtrx(mtrx, r, c);
			prntMtrx(mtrx, r, c);
			checkSymt(mtrx, r, c);
			
			break;
		}

		case 3://add matrix
		{
			askSize(&r,&c);
			double **mtrx1=allocate(r,c);
			double **mtrx2=allocate(r,c);
			printf(" Matrix - 1: \n");
			readMtrx(mtrx1,r,c);
			prntMtrx(mtrx1,r,c);
			printf(" Matrix - 2: \n");
			readMtrx(mtrx2,r,c);
			prntMtrx(mtrx2, r, c);

			double **add=addMtrx(mtrx1, mtrx2, r, c);
			printf(" Result: \n");
			prntMtrx(add,r,c);

			break;
		}

		case 4://sub matrix
		{
			askSize(&r,&c);
			double **mtrx1=allocate(r,c);
                        double **mtrx2=allocate(r,c);
                        printf(" Matrix - 1: \n");
                        readMtrx(mtrx1,r,c);
                        prntMtrx(mtrx1,r,c);
                        printf(" Matrix - 2: \n");
                        readMtrx(mtrx2,r,c);
                        prntMtrx(mtrx2, r, c);

			double **sub=subMtrx(mtrx1, mtrx2, r, c);
                        printf(" Result: \n");
                        prntMtrx(sub,r,c);

                        break;
		}
		
		case 5://multiply
		{
			askSize(&r, &c);
			double **mtrx1=allocate(r,c);
			double **mtrx2=allocate(r,c);
			printf(" Matrix -1: \n");
			readMtrx(mtrx1,r,c);
			prntMtrx(mtrx1,r,c);
			printf(" Matrix - 2: \n");
			readMtrx(mtrx2,r,c);
			prntMtrx(mtrx2,r,c);

			double **multi=multiMtrx(mtrx1,mtrx2,r,c);
			printf(" Result: \n");
			prntMtrx(multi,r,c);

			break;
		}

	}
	return 0;
}
