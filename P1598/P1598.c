#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

// 字母映射
void count(char (*src)[102], int* arr, int row)
{
	int i = 0;
	int j = 0;
	int k = 0;
	for ( i = 0; i <= row; i++)
	{
		// *src 的类型是char* 
		char* p = *(src+i);
		while (*p)
		{
			if (*p >= 'A' && *p <= 'Z')
			{
				arr[*p - 'A']++;
			}
			p++; // 下一个字符 
		}
	}

}


// 输出柱状图
void print(int* arr, int size_arr)
{
	// 找到最高的“柱子”
	int max = *(arr + 0);
	for (int i = 0; i < size_arr; i++)
	{
		if (*(arr + i) > max)
		{
			max = *(arr + i);
		}
	}

	// 从最高的“柱子”往下输出
	for (int row = max; row >= 1; row--)
	{
		// 先输出完一整行
		for (int col = 0; col < size_arr; col++)
		{
			// 判断该位置是*还是空格
			printf("%c ", row <= *(arr+col) ? '*' : ' ');
		}
		printf("\n");
	}

	// 输出底部字母
	for (int cols = 0; cols < size_arr; cols++)
	{
		printf("%c ", 'A' + cols);
	}
	printf("\n");

}


int main()
{
	char str[4][102] = { 0 };
	int arr[26] = { 0 };
	size_t size_str = 0;
	int cnt = 0;
	// 一行一行的读取
	for (int i = 0; i < 4; i++)
	{
		fgets(str[i], 102, stdin);
		size_str = strlen(str[i]) - 1;
		if (str[i][size_str] == '\n')
			str[i][size_str] = '\0';
	}
	// 统计字符串中每个字母出现的次数
	count(str, arr, 4);

	print(arr, 26);

	return 0;
}



