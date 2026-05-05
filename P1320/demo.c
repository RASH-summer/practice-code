#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int count = 0; // 统计输出了多少个字符
//	int flag = 0; 
//	int m = 0;
//	while (count < n * n)
//	{
//		// 从第2个数字开始读取
//		scanf("%d", &m);
//
//		int i = 0;
//		for (i = 0; i < m; i++)
//		{
//			printf("%d", flag);
//			count++; // 输出1个字符就加1
//
//			// 控制换行 每行7个字符也就是n个字符
//			if (count % n == 0)
//				printf("\n");
//
//		}
//		
//		// 0 变1， 1变0
//		flag = 1 - flag; 
//
//	}
//
//	return 0;
//}

#include <math.h>


int main()
{
	char src = 0;

	int i = 0;
	int count = 0;
	int ans[200] = { 0 };
	char flag = '0';
	while (scanf("%c", &src) != EOF)
	{
		count++; // 统计全部字符个数
		if (src == flag)
		{
			ans[i]++; // ans[i]位置再增1
		}
		else
		{
			// 过滤掉每行后的\n
			if (src != '\n')
			{
				i++;
				ans[i] = 1; // 该字符最少出现1次
				flag = src; // 交换当前字符
			}
		}

	}

	printf("%d ", (int)sqrt(count));

	int j = 0;
	for (j = 0; j <= i; j++)
	{
		printf("%d ", ans[j]);
	}

	printf("\n");

	return 0;
}