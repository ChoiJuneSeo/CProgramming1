#include < stdio.h>

int main()
{
	const int NUM_LINE = 15;

	for (int i = 1; i <= NUM_LINE; ++i)
	{
		for (int j = NUM_LINE -i; j > 0; --j)
		{
			printf(" ");
			
		}
		for (int j = 0; j < (2 * i - 1); ++j)
		{
			printf("*");

		}
		printf("\n");
	}






	return 0;
}