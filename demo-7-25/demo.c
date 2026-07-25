#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>

//大数加法
int main()
{
	char s1[100] = { 0 };
	char s2[100] = { 0 };

	int a1[100] = { 0 }; // 操作数2
	int a2[100] = { 0 }; // 操作数2
	int sum[100] = { 0 }; // 结果

	scanf("%s %s", s1, s2);

	// 将输入进来的字符串倒着存到a1和a2中
	for (int i = 0; i <= strlen(s1) - 1; i++)
	{
		// 数字字符转为数字
		a1[strlen(s1) - 1 - i] = s1[i] - '0';

	}

	for (int j = 0; j <= strlen(s2) - 1; j++)
	{
		// 数字字符转为数字
		a2[strlen(s2) - 1 - j] = s2[j] - '0';

	}

	// 确定最长的字符串长度
	int k = (int)strlen(s1);
	if (strlen(s2) > strlen(s1))
	{
		k = (int)strlen(s2);
	}

	for (int i = 0; i < k; i++)
	{
		sum[i] = a1[i] + a2[i];
	}

	for (int i = 0; i < k; i++)
	{
		// 查看是否有进位
		if (sum[i] >= 10)
		{
			sum[i + 1] = sum[i + 1] + sum[i] / 10;
			sum[i] = sum[i] % 10;
		}
	}

	// 逆序输出
	if (sum[k] != 0)
	{
		k += 1;
	}
	for (int i = k - 1; i >= 0; i--)
	{
		printf("%d", sum[i]);
	}
	printf("\n");

	return 0;
}