#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 0;
	int prize[7] = { 0 };
	int ticket[1000][7] = { 0 };
	int win[7] = { 0 };


	scanf("%d", &n);

	int i = 0;
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &prize[i]);
	}

	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < 7; j++)
		{
			scanf("%d", &ticket[i][j]);
		}
	}

	
	// 遍历有多少张彩票
	for (i = 0; i < n; i++)
	{
		int count = 0;
		// 遍历中将彩票的号码
		int j = 0;
		for (j = 0; j < 7; j++)
		{
			// 遍历每张彩票有多少个号码
			int k = 0;
			for (k = 0; k < 7; k++)
			{
				if (ticket[i][k] == prize[j])
				{
					count++; // 计数器++
					break; // 遇到相同的就可以跳过了
				}
			}
		}

		//
		if (7 == count)
		{
			win[0]++;
		}
		else if (6 == count)
		{
			win[1]++;
		}
		else if (5 == count)
		{
			win[2]++;
		}
		else if (4 == count)
		{
			win[3]++;
		}
		else if (3 == count)
		{
			win[4]++;
		}
		else if (2 == count)
		{
			win[5]++;
		}
		else if (1 == count)
		{
			win[6]++;
		}
	}
	
	for (i = 0; i < 7; i++)
	{
		printf("%d ", win[i]);
	}
	

	return 0;
}