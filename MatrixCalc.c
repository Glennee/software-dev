/* Program to calculate inverse of a 2x2 matrix */

//Input output Library
#include <stdio.h>


float a11, a12, a21, a22, b11, b12, b21, b22, determinate;


//Main function
int main()
{
	//Program Title
	printf("MATRIX CALCULATOR");

	//ask for 2x2 matrix; a11, a12, a21, a22.
	printf("\nEnter value a11:");
	scanf("%f", &a11);
	printf("\nEnter value a12:");
	scanf("%f", &a12);
	printf("\nEnter value a21:");
	scanf("%f", &a21);
	printf("\nEnter value a22:");
	scanf("%f", &a22);

	//Original Matrix
	printf("\nOriginal Matrix: [%1.2f,%1.2f;%1.2f,%1.2f]",a11, a12, a21, a22);
	
	//calculate determinate;
	determinate = (a11*a22 - a12*a21);

	//determinate = 0
	if (determinate == 0)
	{
		printf("The Determinate is 0, therefore the inverse of the matrix cannot be found!");
	}
	if (determinate != 0)
	{
		//multiply det by the adj
		b11 = 1/determinate * a22;
		b12 = 1/determinate * -1 * a12;
		b21 = 1/determinate * -1 * a21;
		b22 = 1/determinate * a11;
	
		//print results
		printf("\nInverse Matrix: [%1.2f,%1.2f;%1.2f,%1.2f]",b11, b12, b21, b22);

	}

	//End of program
	return 0;
}