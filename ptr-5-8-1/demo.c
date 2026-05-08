#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


// 字符指针变量
//int main()
//{
//	// "hello,world" 是一个常量字符串，无法被修改,一般会在*左边加上const
//	const char* str = "hello,world";
//
//	*str = "abc";
//
//	printf("%s\n", str);
//
//	return 0;
//}




// 数组指针
//int main()
//{
//	int arr[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//
//	int (*parr)[8] = &arr; // 数组指针
//
//	// 去掉指针变量的变量名,剩下的是数组指针类型  int *()[8];
//
//	return 0;
//}




//
//void test(int (*parr)[3], int r, int c)
//{
//	int i = 0;
//	for (i = 0;  i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(parr + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//
//// 二维数组传参的本质
//int main()
//{
//	int arr[3][3] = { 1, 2, 3,  2, 3, 4,  3, 4, 5 };
//
//
//	//printf("&arr[0]  =  %p\n", &arr[0]);
//	//printf("arr      =  %p\n", arr);
//
//	test(arr,3,3);
//
//	return 0;
//}



//void test(int x, int y)
//{
//	
//}


//int add(int x, int y)
//{
//	return x + y;
//}
//
//// 函数指针
//int main()
//{
//	
//	//printf("&test   =   %p\n", &test);
//	//printf("test    =   %p\n", test);
//
//	//void (*pf)() = test;
//
//
//	int (*pf1)(int, int) = &add;
//
//	printf("%d\n", pf1(3, 2));
//	printf("%d\n", (*pf1)(3, 2));
//
//
//	return 0;
//}



void menu()
{
	printf("********* 1.add  2.sub ********\n");
	printf("********* 3.mul  4.div ********\n");
	printf("*********     0.exit   ********\n");
}

int add(int x, int y)
{
	return x + y;
}


int sub(int x, int y)
{
	return x - y;
}


int mul(int x, int y)
{
	return x * y;
}


int div(int x, int y)
{
	return x / y;
}


//int main()
//{
//	int input = 0;
//	
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//
//

//	
//
//	// 选择菜单
//	do
//	{
		//menu();
// 
//		printf("请选择需要的计算功能: ");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//			case 1:
//				printf("输入两个操作数: ");
//				scanf("%d %d", &a, &b);
//				ret = add(a,b);
//				printf("%d\n", ret);
//				break;
//
//			case 2:
//				printf("输入两个操作数: ");
//				scanf("%d %d", &a, &b);
//				ret = sub(a, b);
//				printf("%d\n", ret);
//				break;
//			case 3:
//				printf("输入两个操作数: ");
//				scanf("%d %d", &a, &b);
//				ret = mul(a, b);
//				printf("%d\n", ret);
//				break;
//			case 4:
//				printf("输入两个操作数: ");
//				scanf("%d %d", &a, &b);
//				ret = div(a, b);
//				printf("%d\n", ret);
//				break;
//
//			case 0:
//				printf("退出计算器\n");
//				break;
//			default :
//				printf("暂时没有这个选项,重新输入\n");
//				break;
//		}
//	} while (input);
//
//
//
//	return 0;
//}







int main()
{
	int input = 0;

	int a = 0;
	int b = 0;
	int ret = 0;


	// 把计算器的功能全部用函数指针数组来存放
	int (*parr[5])(int, int) = { NULL, add, sub, mul, div };
	// parr[0]放了个空指针NULL，是为了后面方便写代码


	// 选择菜单
	do
	{
		menu();

		printf("请选择需要的计算功能: ");
		scanf("%d", &input);

		if (input >= 1 && input <= 4)
		{
			printf("输入操作数: ");
			scanf("%d  %d", &a, &b);

			ret = (parr[input])(a, b);
			printf("%d\n", ret);
		}
		else if(input == 0)
		{
			printf("退出计算器\n");
		}
		else
		{
			printf("暂时没有这个选项,重新输入\n");
		}
	} while (input);



	return 0;
}