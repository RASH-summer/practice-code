#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main()
{
	int s1 = 0;
	int s2 = 0;
	int s3 = 0;

	int arr[81] = { 0 };

	scanf("%d %d %d", &s1, &s2, &s3);

	int min_sum = s1 + s2 + s3;

	int j = 0;
	int k = 0;

	int sum = 0;
	int i = 0;
	for (i = 1; i <= s1; i++)
	{
		//int j = 0;
		for (j = 1; j <= s2; j++)
		{
			//int k = 0;
			for (k = 1; k <= s3; k++)
			{
				sum = i + j + k;
				arr[sum]++; // 数组对应的下标元素自增1
			}
		}

	}

	int idx = 0; // 出现次数最多的最大值的下标
	int max = 0;
	for (i = 3; i <= sum; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i]; // 更新最大值
			idx = i;
		}
	}


	printf("%d\n", idx);

	return 0;
}

// max(s1) + max(s2) + max(s3) = 80 这是最大的和了，数组从0开始，但是[0][1][2]都是空的，是通过sum的值来确定下标
// 这样就可以对应上了，如：sum=3  arr[3]的元素就会自增1