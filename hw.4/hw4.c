#include <stdio.h>

int main()
{

	int input = 0;
	int cnt = 0;
	printf("Please enter a number: ");
	scanf_s("%d", &input);

	for (int i = 1; i <= input; ++i)
	{
		if (input % i == 0)
		{
			++cnt;
		}
	}
	if (cnt == 2)
	{
		printf("It is a prime number.\n");
	}
	else
	{
		printf("It is not a prime number.\n");
	}

	return 0;
}