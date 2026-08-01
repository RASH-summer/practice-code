#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>



// 交换
void swap(char* src1, char* src2)
{
	while (*src2)
	{
		char ch = *src1;
		*src1 = *src2;
		*src2 = ch;

		src1++;
		src2++;
	}
}


// 倒序存放
void reverse(char* src, int* arr)
{
	for (int i = 0; i < strlen(src); i++)
	{
		arr[i] = src[strlen(src) - 1 - i] - '0'; // 转为整数存放
	}
}

void sub(char* src, int* arr1, int* arr2, int* ret)
{
	for (int i = 0; i < strlen(src); i++)
	{
		// 判断是否借位
		if (arr1[i] < arr2[i])
		{
			// 向前借1
			arr1[i] = arr1[i] + 10;
			arr1[i + 1]--;
		}
		ret[i] = arr1[i] - arr2[i];
	}
}

void print(char* dep, char* src, int* ret)
{
	// 判断是否负数
	if (*dep == '-')
	{
		printf("%c", *dep);
	}

	// 找到倒序输出的起始位置
	int index = 0;
	for (int i = (int)strlen(src)-1; i >=0 ; i--)
	{
		if (ret[i] != 0)
		{
			// 记录下该位置
			index = i;
			break;
		}
	}


	for (int i = index; i >= 0; i--)
	{
		printf("%d", ret[i]);
	}

}


int main()
{
	char s1[200] = { 0 };
	char s2[200] = { 0 };

	int a[210] = { 0 }; // 被减数
	int b[210] = { 0 }; // 减数
	int c[210] = { 0 }; // 差
	
	scanf("%s %s", s1, s2);

	char flag = '+'; 

	// 判断是否需要交换
	if (strlen(s1) < strlen(s2) || (strlen(s1) == strlen(s2) && (strcmp(s1, s2) < 0)))
	{
		// 交换
		swap(s1, s2);
		flag = '-';
	}

	
	// 倒序存放
	reverse(s1, a);
	reverse(s2, b);

	// 减法运算
	sub(s1, a, b, c);

	// 输出结果
	print(&flag,s1, c);

	return 0;
}