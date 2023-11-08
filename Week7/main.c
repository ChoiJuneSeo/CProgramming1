#include <stdio.h>
// 1 1  2  3  5
int re_Fibonacchi(int num)
{
	if(num==1	|| num ==2 )
	{
		return 1;
	}
	return re_Fibonacchi(num-2)+re_Fibonacchi(num-1);
}
int Fibonacchi(int num)
{
	if (num == 1 || num == 2)
	{
		return 1;
	}
	int a=1, b=1, c;
	for (int i = 3; i <= num; ++i)
	{
		c = a + b;
		a = b;
		b = c;
	}

	return c;



}
void gugudan()
{
	for (int i = 1; i <= 9; ++i)
	{
		printf("%d´Ü\n", i);
		for (int j = 1; j <= 9; ++j)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}
}
int main()
{
	for (int i = 1; i <= 10; ++i)
	{
		printf("%d  ",re_Fibonacchi(i));
	}
	printf("\n");
	for (int i = 1; i <= 10; ++i)
	{
		printf("%d  ", Fibonacchi(i));
	}
	printf("\n");

	gugudan();


	return 0;
}