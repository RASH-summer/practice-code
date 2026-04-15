#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 方法1
//int main()
//{
//	int arr[105] = { 0 };
//	int i = 0;
//	
//	for (i = 0; i < 100; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] == 0)
//		{
//			break;
//		}
//	}
//
//	for (i=i-1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//}


// 方法2
int main()
{
	int arr[105] = { 0 };
	
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		scanf("%d", &arr[i]);

		if (arr[i] == 0)
		{
			int j = i;
			for (j = i - 1; j >= 0; j--)
			{
				printf("%d ", arr[j]);
			}
			break; // 跳出外层循环
		}
	}

	return 0;
}