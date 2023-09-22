#include <stdio.h>


int main()
{
	float input;

	printf("Please enter kilometers:");
	scanf_s("%f", &input);
	float output = input / 1.609;
	printf("%.1fkm is equal to %.1f miles\n", input, output);

	return 0;
}