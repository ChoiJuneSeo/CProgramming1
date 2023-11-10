#include <stdio.h>


void main()
{
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };
	int temp[6];

	int* pInt = arr1;
	int* pInt2 = arr2;
	printf("arr1: ");
	for (int i = 0; i < 6; ++i)
	{
		printf("%d ", arr1[i]);
	}
	printf("\narr2: ");
	for (int i = 0; i < 6; ++i)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n\nafter swap\narr1: ");
	for (int i = 0; i < 6; ++i)
	{
		temp[i] = *(pInt + i);
		*(pInt + i) = *(pInt2 + i);
		*(pInt2 + i) = temp[i];
		printf("%d ", arr1[i]);
	}

	printf("\narr2: ");
	for (int i = 0; i < 6; ++i)
	{
		printf("%d ", arr2[i]);
	}
}