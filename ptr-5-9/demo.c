#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>



// 数组名是首元素地址,有两个例外
// 1.sizeof(数组名), 数组名单独放在sizeof计算的是整个数组的大小，单位是字节
// 2.&数组名，表示的也是整个数组，取出的是整个数组的地址

//int main()
//{
//	int a[] = { 1,2,3,4 };
//
//	printf("%zu\n", sizeof(a)); // 计算的是整个数组的大小 16
//	printf("%zu\n", sizeof(a + 0));// a表示数组首元素的地址, a+0是数组中a[0]的地址, 是地址大小是4/8个字节
//	printf("%zu\n", sizeof(*a)); // a表示数组首元素的地址, 相当于&a[0], 然后对这个地址解引用a[0]这个元素, 输出4
//	printf("%zu\n", sizeof(a + 1)); // a表示数组首元素的地址, 首元素的地址+1, &arr[1]的地址, 是地址大小是4/8个字节
//	printf("%zu\n", sizeof(a[1])); // 4
//	printf("%zu\n", sizeof(&a));// a取出整个数组的地址, 是地址大小是4/8个字节
//	printf("%zu\n", sizeof(*&a)); // &a取出整个数组的地址, 类型是: int (*)[4], 对这个数组解引用, 访问的是这个数组, 大小是16
//	printf("%zu\n", sizeof(&a + 1)); //  a取出整个数组的地址, &a+1跳过整个数组, 指向了a[3]的后面, 它是地址大小是4/8个字节
//	printf("%zu\n", sizeof(&a[0])); // &a[0]取出a[0]的地址，是地址大小是4/8个字节
//	printf("%zu\n", sizeof(&a[0] + 1)); //  &a[0]取出a[0]的地址 &a[0]+1是第2个元素的地址a[1]的地址，是地址大小是4/8个字节
//}






//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%zu\n", sizeof(arr)); // 计算的是整个数组的大小, 6个字节
//	printf("%zu\n", sizeof(arr + 0)); // arr表示首元素地址, arr+0还是一个地址，4/8
//	printf("%zu\n", sizeof(*arr)); // arr表示首元素地址, 对这个地址解引用, arr[0]这元素, 大小是1个字节
//	printf("%zu\n", sizeof(arr[1])); // 数组第2个元素, 1个字节
//	printf("%zu\n", sizeof(&arr)); // 取出数组的地址, 数组的地址也是地址, 大小是4/8
//	printf("%zu\n", sizeof(&arr + 1)); // 取出数组的地址, +1跳过整个数组, 还是一个地址, 大小是4/8
//	printf("%zu\n", sizeof(&arr[0] + 1)); // &arr[0]取出下标0元素的地址, +1是'b'的地址，还是一个地址, 大小是4/8
//
//	return 0;
//}





// strlen统计的是'\0'前面的字符个数
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%zu\n", strlen(arr)); // 没有'\0'得到的是随机值
//	printf("%zu\n", strlen(arr + 0)); // arr表示首元素地址, arr+0还是首元素的地址, 从这个地址往后数, 没有'\0'得到的是随机值
//	//printf("%zu\n", strlen(*arr)); // arr表示首元素地址, 对这个地址解引用拿到字符'a', 字符'a'类型是char, 但是strlen需要的是char* 所以编译无法通过
//	//printf("%zu\n", strlen(arr[1])); // arr[1]是字符'b'拿到字符'b', 字符'b'类型是char, 但是strlen需要的是char* 所以编译无法通过
//	printf("%zu\n", strlen(&arr)); // 取出整个数组的地址, 虽然它的类型是char (*)[6] , 但是也是从&arr[0] 这个地址开始往后数, 没有'\0'得到的是随机值
//	printf("%zu\n", strlen(&arr + 1)); // 取出整个数组的地址, 它的类型是char (*)[6] +1跳过整个数组, 这个空间不属于该数组, 越界访问了, 程序崩溃
//	printf("%zu\n", strlen(&arr[0] + 1)); // 取出'a'的地址+1, 是'b'的地址,  从这个地址往后数, 没有'\0'得到的是随机值
//
//	return 0;
//}





//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%zu\n", sizeof(arr)); // 计算的是整个数组的大小, 包括'\0'共7个字节
//	printf("%zu\n", sizeof(arr + 0)); // arr表示首元素的地址, 'a'的地址, +0还是它本身, 是地址就是4/8个字节
//	printf("%zu\n", sizeof(*arr)); // arr表示首元素的地址, 'a'的地址, 对这地址解引用, 拿到字符'a', 大小是1
//	printf("%zu\n", sizeof(arr[1]));// 计算的是字符'b'的大小, 1个字节
//	printf("%zu\n", sizeof(&arr)); // 取出整个数组的地址, 数组的地址也是地址, 大小是4/8个字节
//	printf("%zu\n", sizeof(&arr + 1)); // 取出整个数组的地址, 数组的地址+1跳过整个数组, 但还是地址, 大小是4/8个字节
//	printf("%zu\n", sizeof(&arr[0] + 1)); // 取出字符'b'的地址, +1是字符'b'的地址, 还是地址, 大小是4/8个字节
//
//	return 0;
//}




//int main()
//{
//	char arr[] = "abcdef";
//	
//	printf("%zu\n", strlen(arr)); // arr表示整个数组的地址, 整个数组的地址也是从&a[0]开始的, 从这个地址开始往后数, 共6个字符
//	printf("%zu\n", strlen(arr + 0)); // arr表示数组首元素地址, +0还是这个地址, 从这个地址开始往后数, 共6个字符
//	//printf("%zu\n", strlen(*arr)); // arr表示首元素地址, 对这个地址解引用拿到字符'a', 类型是char, strlen需要的是char* 导致编译无法通过
//	//printf("%zu\n", strlen(arr[1])); // arr[1]拿到的是字符'b', 类型是char, strlen需要的是char* 导致编译无法通过
//	printf("%zu\n", strlen(&arr)); // 取出整个数组的地址, 整个数组的地址也是从&a[0]开始的, 从这个地址开始往后数, 共6个字符
//	printf("%zu\n", strlen(&arr + 1)); // 取出整个数组的地址, +1跳过整个数组, 越界访问了, 导致程序 可能会崩溃
//	printf("%zu\n", strlen(&arr[0] + 1)); // 取出字符'a'的地址, +1是字符'b'的地址, 从这个地址往后数, 共5个字符
//
//	return 0;
//}



//int main()
//{
//	char* p = "abcdef";
//	
//	printf("%zu\n", sizeof(p)); // p指向的是'a'的地址, 是地址大小是4/8个字节
//	printf("%zu\n", sizeof(p + 1)); // p指向的是'a'的地址, 字符'a'的地址+1是字符'b'地址, 是地址大小是4/8个字节
//	printf("%zu\n", sizeof(*p)); // p指向的是'a'的地址, 对这个地址解引用, 拿到字符'a' 字符a大小是1个字节
//	printf("%zu\n", sizeof(p[0])); // p[0] 等价 *(p+0) 拿到了字符'a', 字符a大小是1个字节
//	printf("%zu\n", sizeof(&p)); // &p 是p指针变量的地址, 类型是char* 类型, 要是存起来需要一个二级指针, 是地址大小是4/8个字节
//	printf("%zu\n", sizeof(&p + 1)); // &p是p指针变量的地址, 类型是char*, +1跳过1个字节, 还是个地址大小是4/8个字节
//	printf("%zu\n", sizeof(&p[0] + 1)); // p[0] 等价 *(p+0) 拿到了字符'a' &p[0]拿到的是字符'a'的地址, +1是字符'b'的地址, 是地址大小是4/8个字节
//
//	return 0;
//}




//int main()
//{
//	char* p = "abcdef";
//
//	printf("%zu\n", strlen(p)); // 指针p指向的是字符'a'的地址, 从这地址往后数, 6个字符
//	printf("%zu\n", strlen(p + 1)); // 指针p指向的是字符'a'的地址, +1是字符'b'的地址, 从这地址往后数, 5个字符
//	//printf("%zu\n", strlen(*p)); // *p等价于p[0], 拿到字符'a', 类型是char 无法通过编译
//	//printf("%zu\n", strlen(p[0])); // p[0], 拿到字符'a', 类型是char 无法通过编译
//	printf("%zu\n", strlen(&p)); // &p是指针变量的地址,不是'a'的地址, 需要一个二级指针变量存起来, 类型是char** 无法通过编译
//	printf("%zu\n", strlen(&p + 1)); // &p的地址+1, 这个地址也不是'a'的地址, 无法通过编译
//	printf("%zu\n", strlen(&p[0] + 1)); // &p[0], 拿到字符'a'的地址, +1是'b'的地址, 从这地址往后数, 5个字符
//	
//	return 0;
//}

//
//int main()
//{
//	int a[3][4] = { 0 };
//	
//	printf("%zu\n", sizeof(a)); // a表示整个数组, 一行是16个字节, 有3行, 16*3=48
//	printf("%zu\n", sizeof(a[0][0])); // a[0][0]是第1行第1个元素的值, int类型 大小是4个字节
//	printf("%zu\n", sizeof(a[0])); // a[0] 是第1行一维数组, 计算的是整个数组的大小, 4*4=16
//	printf("%zu\n", sizeof(a[0] + 1)); // a表示二维数组第0行的地址, +1是a[1]二维数组第1行一维数组的地址, 是地址大小是4/8个字节
//	printf("%zu\n", sizeof(*(a[0] + 1))); // a[0]+1是第1行一维数组, 对这个数组解引用拿到这个一维数组的首元素, 大小是4
//	printf("%zu\n", sizeof(a + 1)); // a表示二维数组第0行的地址, +1是第1行一维数组的地址, 是地址大小是4/8个字节
//	printf("%zu\n", sizeof(*(a + 1))); // a表示二维数组第0行的地址, +1是第1行一维数组的地址, 解引用得到这个一维数组, 计算的是这个一维数组的大小 4*4=16 
//	printf("%zu\n", sizeof(&a[0] + 1)); // &a[0]得到的是第0行一维数组的地址, +1是第1行一维数组的地址, 是地址大小是4/8个字节
//	printf("%zu\n", sizeof(*(&a[0] + 1))); //  &a[0]得到的是第0行一维数组的地址, +1是第1行一维数组的地址, 解引用得到第1行一维数组 计算的是这个一维数组的大小 4*4=16 
//	printf("%zu\n", sizeof(*a)); // a表示二维数组第0行的地址, 解引用得到的是第0行一维数组, 计算的是这个一维数组的大小 16
//	printf("%zu\n", sizeof(a[3])); // 虽然没有a[3], 但是计算的还是4个元素的数组的大小 16 虽然越界，但是没有访问该内存空间, a[2]+1变成a[3]
//	// a[3] 越界，但 sizeof 不访问内存；其类型为 int[4]，大小是 16
//
//	return 0;
//}




int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };

	int* ptr = (int*)(&a + 1); // &a+1跳过整个数组,然后强制类型转为int*类型
	printf("%d,%d", *(a + 1), *(ptr - 1)); // 2, 5

	return 0;
}