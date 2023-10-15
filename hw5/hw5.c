#include <stdio.h>


void DecToBi(int num)
{
	if (num != 1)
	{
		DecToBi(num / 2);
	}

	int a = num % 2;
	
	printf("%d", a);

}

int main()
{
	int input;
	printf("Please enter a number: ");
	scanf_s("%d", &input);
	printf("Decimal: %d  Binary: ",input);
	DecToBi(input); 
	printf("\n\n");
	
	return 0;
}
