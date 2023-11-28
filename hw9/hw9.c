#include <stdio.h>
#include <string.h>

void main()
{
	char input[64];

	printf("Input> ");
	fgets(input, sizeof(input), stdin);

	int len = strlen(input);
	for (int i = 0; i < len; ++i)
	{
		if ('a' <= input[i] && input[i] <= 'z')
		{
			input[i] -= 'a' - 'A';
		}
		else if ('A' <= input[i] && input[i] <= 'Z')
		{
			input[i] += 'a' - 'A';
		}
	}

	printf("Output> %s", input);
	

}