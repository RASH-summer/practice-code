#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int main()
{
	int m = 0;
	int n = 0;
	int arr[10] = { 0 };

	scanf("%d %d", &m, &n);

	int i = 0;
	for (i = m; i <= n; i++)
	{
		int tmp = i; // 临时变量，不能直接操作i

		while (tmp)
		{
			int digit = tmp % 10; // 最大只能是9
			arr[digit]++; // 对应的位置+1
			tmp /= 10;
		}

	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");

	return 0;
}