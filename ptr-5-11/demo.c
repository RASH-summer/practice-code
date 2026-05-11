#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


void Swap(int* n, int* m)
{
	int tmp = *n;
	*n = *m;
	*m = tmp;
}

//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	printf("输入两个整数: ");
//	scanf("%d %d", &a, &b);
//
//	printf("交换前: %d %d\n", a, b);
//	printf("-----------------\n");
//	Swap(&a, &b);
//	printf("交换后: %d %d\n", a, b);
//
//	return 0;
//}



void split_time(long total_sec, int* hour, int* minute, int* sec)
{
	*hour = total_sec / 3600 % 24; // 1小时=3600秒 对24取模0~23，因为时24小时

	// 剩余的秒数 不够一小时的部分
	long remain = total_sec % 3600;

	// 计算分钟
	*minute = remain / 60;

	// 计算秒数
	*sec = remain % 60;

}


//int main()
//{
//	long total_sec = 0;
//	int hour = 0;
//	int minute = 0;
//	int sec = 0; 
//
//	printf("输入一个秒数: ");
//	scanf("%ld", &total_sec);
//
//	split_time(total_sec, &hour, &minute, &sec); // 传址调用 
//
//	printf("%d:%d:%d\n", hour, minute, sec);
//
//	return 0;
//}


// 找出数组中第1大值和第2大值
void find_tow_largest(int arr[], int n, int* largest, int* second_largest)
{
	
	if (arr[0] > arr[1])
	{
		*largest = arr[0]; // 最大值
		*second_largest = arr[1]; // 第2大值
	}
	else
	{
		*largest = arr[1]; // 最大值
		*second_largest = arr[0]; // 第2大值
	}

	int i = 0;
	for (i = 2; i < n; i++)
	{
		if (arr[i] > *largest)
		{
			*second_largest = *largest; // 原来的最大值，降为第2大值
			*largest = arr[i]; // 更新最大值
		}
		else if (arr[i] > *second_largest)
		{
			*second_largest = arr[i]; // 更新第2大值
		}
	}

}

//int main()
//{
//	int arr[] = { 12, 45, 7, 99, 23, 56, 88 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int largest = 0; // 最大值
//	int second_largest = 0; // 第2大值
//
//	find_tow_largest(arr, sz, &largest, &second_largest);
//
//	printf("largest = %d\n", largest);
//	printf("second_largest = %d\n", second_largest);
//
//	return 0;
//}


int* find_middle(int arr[], int n)
{
	return &arr[n / 2];
}

int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	int* ptr = find_middle(arr, sz);

	printf("%d\n", *ptr);

	return 0;
}

// 感觉这些题都是在考 传址调用 这个概念，最后一题是考返回类型