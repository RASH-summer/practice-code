#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//7 3 1 6 1 6 4 3 1 6 1 6 1 3 7

int main()
{
	int n = 0;
	scanf("%d", &n);

	
	int count = 0;
	int m = 0;
	int flag = 0; 
	while (count < n * n)
	{
		scanf("%d", &m);
		int i = 0;
		for (i = 0; i < m; i++)
		{
			printf("%d", flag);
			count++; // 统计矩阵字符的个数

			if (count % n == 0) // 输出n个字符换行
			{
				printf("\n");
			}
		}
		flag = 1 - flag; // 交替0和1
	}


	return 0;
}