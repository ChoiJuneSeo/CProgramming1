#include <stdio.h>


// 총 5개의 정수를 배열로 한꺼번에 입력 받아서,
// 홀수와 짝수를 구분지어 출력하는 프로그램을 작성해 보세요.

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