#include <stdio.h>
#include <math.h>

void p()
{
	int temp1, temp2;
	printf("������ �Է��ϼ���.\n");
	scanf_s("%d", &temp1);
	printf("������ �Է��ϼ���.\n");
	scanf_s("%d", &temp2);
#if 1
	printf("Input two integers: %d %d\n", temp1, temp2);
	printf("%d & %d = %d\n", temp1, temp2, temp1 & temp2);
	printf("%d | %d = %d\n", temp1, temp2, temp1 | temp2);
	printf("%d ^ %d = %d\n", temp1, temp2, temp1 ^ temp2);
#endif
						 
	
	printf("%d��%d�� = %.f\n", temp1, temp2, pow(temp1, temp2));
}

int main()
{

	p();
	return 0;
}