#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main()
{
	int len = 0;
	int m = 0;
	scanf("%d %d", &len, &m);
	
	int arr[10005] = { 0 };
	int i = 0;
	int start = 0;
	int end = 0;
	int sum = 0;

	for (i = 0; i < m; i++)
	{
		scanf("%d %d", &start, &end); // 输入区域坐标

		// 把start ~ end 区间的树全部砍掉
		int j = 0;
		for (j = start; j <= end; j++)
		{
			if (arr[j] == 0)
			{
				arr[j] = 1;
				sum++; // 统计砍掉的树
			}
		}
	}

	printf("%d\n", len - sum + 1);

	return 0;
}

