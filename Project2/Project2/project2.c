#include <stdio.h>
#include "ascii_art.h"

void movePrint(char* _pChar,int _m,int _n)
{
	int a = 0;
	int b = 0;

	printf("오른쪽으로 몇 칸 이동할까요? ");
	scanf_s("%d", &a);
	printf("아래로 몇 줄 이동할까요? ");
	scanf_s("%d", &b);
	printf("선택한 그림을 해당 위치로부터 출력합니다.\n");

	for (int i = 0; i < b; ++i)	
	{
		printf("\n");
	}

	for (int i = 0; i < _m; ++i)
	{
		for (int j = 0; j < a; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < _n; ++j)
		{
			printf("%c", *_pChar++);
		}
		printf("\n");
	}
	printf("\n");
}

void main()
{
	int num = 0;
	char* pChar = &ascii_main;
	int m = 0, n = 0;	// ascii_name[m][n]
	int state = 1;

	do
	{
		printf("그림 번호 선택(1.main, 2.flower, 3.castle, 기타: 종료): ");
		scanf_s("%d", &num);

		switch (num)
		{
		case 1:
			pChar = &ascii_main;
			m = 9, n = 46;
			movePrint(pChar, m, n);
			break;
		case 2:
			pChar = &ascii_flower;
			m = 13, n = 18;
			movePrint(pChar, m, n);
			break;
		case 3:
			pChar = &ascii_castle;
			m = 20, n = 57;
			movePrint(pChar, m, n);
			break;
		default:
			printf("안녕히 가세요.\n");
			state = 0;
			break;
		}
	} while (state);
}