#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <limits.h>
#include <math.h>


int is_prime(int num) // 101
{
	// 特殊处理
	if (num < 2)
	{
		return 0;
	}

	int i = 0;
	int flag = 1;
	for (i = 2; i < sqrt(num); i++)
	{
		if (num % i == 0)
		{
			// 不是质数
			flag = 0;
		}
	}
	if (flag)
		return 1;
	else
		return 0;
}



void letter_times(char* src, int* arr, size_t sz)
{
	int count = 0;
	while (*src)
	{
		arr[*src - 'a']++;
		src++;
		count++;
	}


	// 找出最大和最小值
	int max = INT_MIN;
	int min = INT_MAX;

	int i = 0;
	for (i = 1; i < sz;i++)
	{
		// 跳过0
		if (*(arr + i) > 0)
		{
			if (arr[i] > max)
				max = arr[i];
			if (arr[i] < min)
				min = arr[i];
		}

	}

	// 是否为质数
	if (is_prime(max - min))
	{
		printf("Lucky Word\n");
		printf("%d\n", max - min);
	}
	else
	{
		printf("No Answer\n");
		printf("0\n");
	}
}




int main()
{
	char word[100] = { 0 };
	int arr[26] = { 0 };
	size_t sz = sizeof(arr) / sizeof(arr[0]);
	scanf("%s", word);

	letter_times(word,arr, sz);
	
	return 0;
}


