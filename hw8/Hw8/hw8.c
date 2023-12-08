#include <stdio.h>
#include <math.h>

double stdDev(double iarr[])
{
	double a = 0;

	for (int i = 0; i < 5; ++i)
	{
		a += iarr[i];
	}

	double  mean = a / 5;
	a = 0;
	
	for (int i = 0; i < 5; ++i)
	{
		a += pow((iarr[i] - mean), 2);
	}

	return sqrt(a/5);
}

void main()
{
	double iarr[5];

	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; ++i)
	{
		scanf_s("%lf", &iarr[i]);
	}
	printf("Standard Deviation = %f\n", stdDev(iarr));
}