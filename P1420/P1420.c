#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>	

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[10] = { 0 };


	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	int max_len = 1; // 最大连续长度
	int current_len = 1; // 当前的连续长度
	for (i = 0; i < n - 1; i++)
	{
		if (arr[i] + 1 == arr[i+1])
		{
			// 连续值
			current_len++;
			if (current_len > max_len)
			{
				max_len = current_len; // 更新最大的连续长度
			}
		}
		else
		{
			current_len = 1; // 断开的情况

			
		}
	}

	printf("%d\n", max_len);

	return 0;
}

// 因为每个数字本身就是长度为 1 的连续序列，所以 max_len 和 current_len 都从 1 开始