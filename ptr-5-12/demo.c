#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a[] = { 5,15,34,54,14,2,53,72 };
//
//	int* p = &a[1], * q = &a[5]; 
//
//	printf("%d\n", *(p + 3));
//	printf("%d\n", *(q - 3));
//	printf("%d\n", p - q);
//	printf("%d\n", p<q);
//	printf("%d\n", *p<*q);
//
//	return 0;
//}



#include <string.h>
 //方法1
//int main()
//{
//	char str[100] = { 0 };
//
//	printf("输入一个字符串: ");
//	
//	int i = 0;
//	while ((str[i] = getchar()) != '\n' && str[i] != EOF)
//	{
//		i++;
//	}
//
//
//	size_t len = strlen(str) - 1;
//
//	// 处理字符串
//	char* start = str;
//	char* end = &str[len - 1];
//
//	while (start < end)
//	{
//		// 交换
//		int tmp = *start;
//		 *start = *end;
//		 *end = tmp;
//
//		 start++;
//		 end--;
//	}
//
//	printf("%s\n", str);
//
//
//	return 0;
//}


// 方法2
//int main()
//{
//	char str[100] = { 0 };
//
//	printf("输入一个字符串: ");
//
//	// gets()库函数被C11标准弃用了
//	fgets(str, 99, stdin);
//
//	size_t len = strlen(str) - 1;
//
//	// 处理'\n'
//	if (str[len] == '\n')
//	{
//		str[len] = '\0';
//	}
//
//
//	// 处理字符串
//	char* start = str;
//	char* end = &str[len - 1];
//
//	while (start < end)
//	{
//		// 交换
//		int tmp = *start;
//		*start = *end;
//		*end = tmp;
//
//		start++;
//		end--;
//	}
//
//	printf("%s\n", str);
//
//	return 0;
//}


// 用指针变量来代替整数跟踪数组中的当前位置
//int main()
//{
//	char str[100] = { 0 };
//
//	printf("输入一个字符串: ");
//
//	char* p = str;
//	int ch = 0;
//	while ((ch = getchar()) != '\n' && ch != EOF)
//	{
//		*p = ch;
//		p++;
//	}
//
//	// p来到这里指向了strlen(str)+1的位置
//
//	while (p > str)
//	{
//		p--;
//		putchar(*p);
//	}
//
//
//	return 0;
//}


void to_lower(char* str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
		}
		str++;
	}
}

 //回文字符串
//int main()
//{
//	char str[100] = { 0 };
//
//	printf("输入一个字符串: ");
//	
//	fgets(str, 99, stdin);
//
//	size_t len = strlen(str) - 1;
//	
//	// 处理'\n'
//	if ('\n' == str[len])
//	{
//		str[len] = '\0';
//		len--;
//	}
//	
//
//	char* start = str;
//	char* end = &str[len];
//
//	// 全部转为小写
//	to_lower(str);
//	
//
//	// 是否回文
//	int is_Palindrome = 1; // 假设是回文
//	while (end > start)
//	{
//		// 过滤掉非字母的字符
//		while (end > start && !(*start >= 'a' && *start <= 'z'))
//			start++;
//		while (end > start && !(*end >= 'a' && *end <= 'z'))
//			end--;
//
//		if (*start != *end)
//		{
//			// 不是回文
//			is_Palindrome = 0;
//			break;
//			
//		}
//
//		start++;
//		end--;
//			
//	}
//
//	if (1 == is_Palindrome)
//		printf("Palindrome\n");
//	else
//		printf("Not a Palindrome\n");
//
//
//	return 0;
//} 


//int sum_array(int a[], int n)
//{
//	int i = 0;
//	int sum = 0;
//
//	sum = 0;
//	for (i = 0;i < n;i++)
//	{
//		sum += a[i];
//	}
//	return sum;
//}

//int sum_array(int*parr, int n)
//{
//	int i = 0;
//	int sum = 0;
//
//	sum = 0;
//	for (i = 0; i < n;i++)
//	{
//		sum += *(parr+i);
//	}
//	return sum;
//}

#include <stdbool.h>

//bool search(int* parr, int n, int key)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (*parr == key)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//}

bool search(int (*parr)[24], int row, int col, int key)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (*(*(parr + i) + j) == key)
			{
				return 1;
			}
		}
	}

	return 0;
}


//int main()
//{
//	int temperatures[7][24] = { 0 };
//	int target = 0;
//
//	printf("输入一周每天的24小时温度读数:\n");
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 24; j++)
//		{
//			scanf("%d", &temperatures[i][j]);
//		}
//	}
//
//	printf("输入需要查找的温度值: ");
//	scanf("%d", &target);
//
//	bool ret = search(temperatures, 7, 24, target);
//
//	if (ret)
//		printf("找到了\n	");
//	else
//		printf("找不到该温度值\n");
//
//
//	return 0;
//}


//void print_temperatures(int (*parr)[24], int day)
//{
//	int i = 0;
//	for (i = 0; i < 24; i++)
//	{
//		printf("%d ", *(*(parr + day) + i));
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	int temperatures[7][24] = { 0 };
//	int target = 0;
//
//	printf("输入一周每天的24小时温度读数:\n");
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 24; j++)
//		{
//			scanf("%d", &temperatures[i][j]);
//		}
//	}
//
//	print_temperatures(temperatures, 1); // 第1天
//
//
//	return 0;
//}




// 返回这一行最大值
int find_largest(int* arr, int col)
{
	// 假设数组首元素最大
	int max = *(arr + 0);

	int i = 0;
	for (i = 1; i < col; i++)
	{
		if (*(arr + i) > max)
			max = *(arr + i);
	}
	return max;
}

int main()
{
	int temperatures[7][24] = { 0 };
	int target = 0;

	printf("输入一周每天的24小时温度读数:\n");
	int i = 0;
	for (i = 0; i < 7; i++)
	{
		int j = 0;
		for (j = 0; j < 24; j++)
		{
			scanf("%d", &temperatures[i][j]);
		}
	}
	printf("-----------------\n");


	for (i = 0; i < 7; i++)
	{
		int find_max = find_largest(*(temperatures + i), 24); // 传递二维数组的第i行

		printf("第%d天最大温度%d\n", i + 1, find_max);
	}
	return 0;
}
