#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//
//	//printf("&arr[0]      =    %p\n", &arr[0]);
//	//printf("arr+1        =    %p\n", arr+1);
//
//
//	// 如果数组名表示首元素的地址，那么应该要输出4/8个字节
//	size_t sz = sizeof(arr);
//	printf("%d\n", sz);
//
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//
//	printf("&arr[0]         =     %p\n", &arr[0]);
//	printf("&arr[0]+1       =     %p\n", &arr[0]+1);
//	
//	printf("arr             =     %p\n", arr);
//	printf("arr+1           =     %p\n", arr+1);
//
//	printf("&arr            =     %p\n", &arr);
//	printf("&arr+1          =     %p\n", &arr+1);
//
//
//	return 0;
//}




// 指针访问数组
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//
//	int* p = arr; // arr首元素的地址
//	
//	int i = 0;
//	for (i = 0;i < 5;i++)
//	{
//		//printf("%d ", *(p + i));
//		//printf("%d ", *(arr + i));
//		
//		//printf("%d ", i[arr]);
//		
//		//printf("%d ", i[p]);
//		
//		printf("%d ", p[i]);
//
//
//	}
//
//	printf("\n");
//
//	return  0;
//}



//
//void test (int arr[])
//{
//	// 计算数组元素的个数
//	int sz = sizeof(arr) / sizeof(arr[0]);// 无法正确得到数组的元素个数
//	printf("%d\n", sz);
//}
//
//// 一维数组传参的本质
//int  main()
//{
//	int arr[] = {1,2,3,4,5};
//
//	test(arr);
//
//	return 0;
//}
//



// 指针数组 - 模拟二维数组
int main()
{
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 2, 3, 4, 5, 6 };
	int arr3[5] = { 3, 4, 5, 6, 7 };

	int* parr[3] = { arr1, arr2, arr3 }; // 数组名是首元素的地址

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *(*(parr + i) + j));
		}
		printf("\n");
	}

	return 0;
}
