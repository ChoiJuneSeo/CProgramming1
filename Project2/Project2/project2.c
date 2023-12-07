#include <stdio.h>
#include "ascii_art.h"

void movePrint(char* _pChar,int _m,int _n)
{
	int a = 0;
	int b = 0;

	printf("���������� �� ĭ �̵��ұ��? ");
	scanf_s("%d", &a);
	printf("�Ʒ��� �� �� �̵��ұ��? ");
	scanf_s("%d", &b);
	printf("������ �׸��� �ش� ��ġ�κ��� ����մϴ�.\n");

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
		printf("�׸� ��ȣ ����(1.main, 2.flower, 3.castle, ��Ÿ: ����): ");
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
			printf("�ȳ��� ������.\n");
			state = 0;
			break;
		}
	} while (state);
}