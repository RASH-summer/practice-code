#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void print(int* ptr, size_t sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(ptr + i));
	}
	
}


int cmp_int(const void* p1, const void* p2)
{
	return (*(int*)p1) - (*(int*)p2);
}

void test1()
{
	// 使用qsort排序整形数据
	int arr[] = { 2,4,6,8,10,1,3,5,7,9 };
	size_t sz = sizeof(arr) / sizeof(arr[0]);
	// 排序前
	print(arr, sz);

	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	printf("\n--------------------\n");
	// 排序后
	print(arr, sz);
}


struct Stu
{
	char name[20];
	short age;
};

int cmp_name(const void* s1, const void* s2)
{
	return strcmp(((struct Stu*)s1)->name, ((struct Stu*)s2)->name);
}

void print_stu(struct Stu* arr, size_t sz)
{
	int i = 0;
	for (i = 0; i < sz;i++)
	{
		printf("%s:%d\n", (arr+i)->name, (arr+i)->age);
	}
}

void test2()
{
	struct Stu s[] = { {"zhangsan", 22},{"lisi", 40}, {"wangwu", 19} };
	size_t sz = sizeof(s) / sizeof(s[0]);
	// 排序前
	print_stu(s, sz);

	qsort(s, sz, sizeof(s[0]), cmp_name);
	printf("------------------------\n");

	// 排序后
	print_stu(s, sz);
}



//int main()
//{
//	// 排序整数数据
//	//test1();
//
//	// 排序结构体数据
//	//test2();
//
//	return 0;
//}






// 交换
void Swap(char* buf1, char* buf2, size_t width)
{
	int i = 0;
	char tmp = 0;
	for (i = 0; i < width; i++)
	{
		tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;

		buf1++;
		buf2++;
	}
}



// 模拟实现qsort函数
// 还是冒泡排序的思想
void bubble_sort(void* base, size_t num, size_t width, int (*pf)(const void* p1, const void* p2))
{
	int i = 0;
	for (i = 0;i < num - 1; i++)
	{
		int j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			
			if (pf((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				// 交换
				Swap ((char*)base + j * width, (char*)base + (j + 1) * width, width);

			}
		}
	}
}


void test3()
{
	// 排序整形数据
	int arr[] = { 2,4,6,8,10,1,3,5,7,9 };
	size_t sz = sizeof(arr) / sizeof(arr[0]);
	// 排序前
	print(arr, sz);

	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	printf("\n--------------------\n");
	// 排序后
	print(arr, sz);
}


void test4()
{
	struct Stu s[] = { {"zhangsan", 22},{"lisi", 40}, {"wangwu", 19} };
	size_t sz = sizeof(s) / sizeof(s[0]);
	// 排序前
	print_stu(s, sz);

	bubble_sort(s, sz, sizeof(s[0]), cmp_name);
	printf("------------------------\n");

	// 排序后
	print_stu(s, sz);
}
int main()
{
	// 排序整形
	//test3();

	// 排序结构体
	test4();


	return 0;
}