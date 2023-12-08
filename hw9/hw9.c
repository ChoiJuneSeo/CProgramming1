#include <stdio.h>
#include <string.h>

void main()
{
	char input[64];

	printf("Input> ");
	fgets(input, sizeof(input), stdin);

	int len = strlen(input); // strlen(input) -1  \n문자
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
	input[len - 1] = 0;	// 마지막 \n 제거
	printf("Output> %s", input);
	

}