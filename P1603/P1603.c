#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

void sort_int(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}


int main()
{
	const char* str[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven",
							"twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty",
							"a", "both", "another", "first", "second", "third" };

	int number[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,1,2,1,1,2,3 };

	char word[10] = { 0 };

	int num[10] = { 0 };

	size_t str_size = sizeof(str) / sizeof(str[0]);

	int k = 0;
	// 输入6个单词
	for (int i = 1; i <= 6; i++)
	{
		scanf("%s", word);

		// 查看word是否英文的数字单词
		for (int j = 0; j < str_size; j++)
		{
			if (strcmp(word, str[j]) == 0)
			{
				// 数字的平方
				int n = number[j];
				n = n * n % 100;
				num[k++] = n;
				break;
			}
		}
	}

	// 防止后续的前导0陷入死循环
	if (k == 0)
	{
		printf("0");
		return 0;
	}

	// 排序-升序
	sort_int(num,k); // 4,25

	// 跳过前导0
	int z = 0;
	while (num[z] == 0 && z < k)
	{
		z++;
	}

	// num = {4,25,0,0}
	// z = 0
	// 单独处理第1个数字
	printf("%d", num[z]);
	
	for (int i = z+1; i < k; i++)
	{
		printf("%02d", num[i]);
	}



	return 0;
}

/*
	1. 如果word没有任何的数字单词，k=0同时num所有的元素也是0，因为没有发生任何的变化。为了防止跳过前导0陷入死循环所以
	   在这之前需要判断一下k==0的情况
	2. 比如在word中找到了数字单词，但是有可能也都是0，那么也会出现死循环，所以还需要加上 z<k
		如：word = "ten ten ten"


	3.在输出的num元素时，首元素需要单独处理。因为1~9用%2d是带有前导0的。题目要求每个数字当成两位数去拼接
		如：num = { 1,3,25}
		"01"+"03"+"25"
		输出的的时候又不需要前导0，不单独处理第1个数字就会输出010325
		还有就是num[1]不能以%d形式输出，否则会少很多位数：1325
*/