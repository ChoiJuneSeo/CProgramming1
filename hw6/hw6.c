#include <stdio.h>


// �� 5���� ������ �迭�� �Ѳ����� �Է� �޾Ƽ�,
// Ȧ���� ¦���� �������� ����ϴ� ���α׷��� �ۼ��� ������.

void main()
{
	int iArr[5];

	printf("Please input five integers: ");
	for (int i = 0; i < 5; ++i)
	{
		scanf_s("%d", &iArr[i]);
	}
	printf("\nOdd numbers: ");
	for (int i = 0; i < 5; ++i)
	{
		if (iArr[i] % 2 == 1)
		{
			printf("%d ", iArr[i]);
		}
	}
	printf("\nEven numbers: ");
	for (int i = 0; i < 5; ++i)
	{
		if (iArr[i] % 2 == 0)
		{
			printf("%d ", iArr[i]);
		}
	}
}