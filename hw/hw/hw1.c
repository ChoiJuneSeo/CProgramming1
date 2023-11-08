#include <stdio.h>
#include <math.h>

void p()
{
	int temp1, temp2;
	printf("정수를 입력하세요.\n");
	scanf_s("%d", &temp1);
	printf("정수를 입력하세요.\n");
	scanf_s("%d", &temp2);
#if 1
	printf("Input two integers: %d %d\n", temp1, temp2);
	printf("%d & %d = %d\n", temp1, temp2, temp1 & temp2);
	printf("%d | %d = %d\n", temp1, temp2, temp1 | temp2);
	printf("%d ^ %d = %d\n", temp1, temp2, temp1 ^ temp2);
#endif
						 
	
	printf("%d의%d승 = %.f\n", temp1, temp2, pow(temp1, temp2));
}

int main()
{

	p();
	return 0;
}