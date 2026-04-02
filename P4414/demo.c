#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void sort_int(int* x, int* y, int* z)
{
	if (*x > *y)
	{
		int tmp = *x;
		*x = *y;
		*y = tmp;
	}
	if (*x > *z)
	{
		int tmp = *x;
		*x = *z;
		*z = tmp;
	}
	if (*y > *z)
	{
		int tmp = *y;
		*y = *z;
		*z = tmp;
	}
}

//int main()
//{
//	char str[5] = { 0 };
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	scanf("%s", str);
//
//	sort_int(&a, &b, &c);  // 排序数字（升序）
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		if (str[i] == 'A')
//			printf("%d ", a);
//		else if (str[i] == 'B')
//			printf("%d ", b);
//		else
//			printf("%d ", c);
//	}
//
//	return 0;
//}

/*
	A<B<C
	
	A是最小的对应 
	B是中间值对应
	C是最大的对应

	按照升序排序三个整数，再根据字母顺序输出
	
	

*/


// 方法2
//int main()
//{
//	char str[5] = { 0 };
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	scanf("%s", str);
//
//	sort_int(&a, &b, &c);  // 排序数字（升序）
//	
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		switch (str[i])
//		{
//		case 'A':
//			printf("%d ", a);
//			break;
//		case 'B':
//			printf("%d ", b);
//			break;
//		case 'C':
//			printf("%d ", c);
//			break;
//		}
//	}
//
//	return 0;
//}



// 方法3
int main()
{
	char str[4] = { 0 };

	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	scanf("%s", str);

	sort_int(&a, &b, &c);  // 排序数字（升序）

	int map[3] = { a,b,c }; // 存放排序好的整数

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'C') // 避免数组越界
		{
			int index = str[i] - 'A';
			printf("%d ", map[index]);
		}
	}
	return 0;
}


/*
	总结：
	前面两个的写法思路其实都是一样的，只是写法不同，可以用switch语句也可以利用if else..if语句

	第3种写法是用了ASCII码值连续的特性（相邻的字母差值为1），然后减去字符'A'得到的值用来做map的下标
	而map里存放的是排序好的数字
*/