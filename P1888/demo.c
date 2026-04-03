#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>


void sort_int(int* a, int* b, int* c)
{
	int tmp = 0;
	if (*a > *b)
	{
		tmp = *a;
		*a = *b;
		*b = tmp;
	}
	if (*a > *c)
	{
		tmp = *a;
		*a = *c;
		*c = tmp;
	}

	if (*b > *c)
	{
		tmp = *b;
		*b = *c;
		*c = tmp;
	}
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);

	sort_int(&a, &b, &c);// 升序排序
	int d = 0;
	int min = a;
	int max = c;
	// 辗转相除法找出最大公因数
	// 27%15=12
	// 15%2=3  刚开始的除数变被除数，余数变除数
	// 12%3=0  此时的除数3就是最大公因数
	
	while (a!=0)
	{
		d = c % a; // 余数
		c = a; // 除数变被除数
		a = d; // 余数变除数
	}
	
	// 最小的作为分子，最大的作为分母
	printf("%d/%d\n",  min / c, max / c);

	return 0;
}

// 正弦值：对边除以斜边
