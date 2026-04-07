#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>


int main()
{
	int n = 0;
	scanf("%d", &n);

	
	// 前两项都是1
	int a = 1;
	int b = 1; 
	int c = 0;

	if (n == 1 || n == 2)
	{
		printf("1\n");
		return 0;
	}

	int i = 0;
	for (i = 3; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	
	printf("%d\n", c);

	return 0;
}

//1 1 2 3 5 8 13 21 34 55
