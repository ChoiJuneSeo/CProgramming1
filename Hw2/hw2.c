#include <stdio.h>


int main()
{
	double input;

	printf("Please enter kilometers:");
	scanf_s("%lf", &input);
	double output = input / 1.609;
	printf("%.1fkm is equal to %.1f miles\n", input, output);
	
	return 0;
}