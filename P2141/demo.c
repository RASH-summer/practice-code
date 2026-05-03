#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int main()
{
	int n = 0;
	int arr[10] = { 0 };

	scanf("%d", &n);

	int i = 0;
	for (i = 0; i < n;i++)
	{
		scanf("%d", &arr[i]);
	}

	int count = 0;

	for (i = 0; i < n; i++) // 枚举target
	{
		int j = 0;
		int flag = 0; // 表示未找到target
		for (j = 0; j < n - 1; j++) // j作为加数1
		{
			if (i == j)
			{
				continue; // 跳过target
			}
			
			int k = 0;

			for (k = j + 1; k < n && !flag; k++) // k作为加数2
			{
				if (k == i)
				{
					continue; // 跳过target
				}
				if (arr[j] + arr[k] == arr[i])
				{
					flag = 1; // 找到就停止
					count++;
				}

			}
		}
	}


	printf("%d\n", count);


	return 0;
}

// flag是通过true和false来去重计数，再通过逻辑取反来看之前这个target有没有被找到过，如果有就不会再重新计数