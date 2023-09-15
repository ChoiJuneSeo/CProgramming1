#include <stdio.h>

void p()
{
	int temp1, temp2;
	printf("정수를 입력하세요.\n");
	scanf_s("%d", &temp1);
	printf("정수를 입력하세요.\n");
	scanf_s("%d", &temp2);

	printf("Input two integers: %d %d\n", temp1, temp2);
	printf("10 & 15 = %d\n", temp1 & temp2);
	printf("10 | 15 = %d\n", temp1 | temp2);
	printf("10 ^ 15 = %d\n", temp1 ^ temp2);


}

int main()
{

	p();
	return 0;
}