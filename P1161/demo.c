#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdbool.h>

bool numing[2000005] = { 0 }; // 0->表示关灯 1->表示开灯

// 方法1 数组模拟
//int main()
//{
//	// 最开始的状态是关
//	int n = 0;
//	scanf("%d", &n);
//	
//	int i = 0;
//	for (i = 0; i < n; i++) // 进行n次操作
//	{
//		double a = 0.0;
//		int t = 0;
//		scanf("%lf %d", &a, &t);
//
//		int j = 0;
//		for (j = 1; j <= t; j++) // 操作t盏灯
//		{
//			int digit = (int) (j * a); // 向下取整得到灯的编号
//			numing[digit] = !numing[digit];
//		} 
//
//	}
//
//	for (i = 0; i < 2000000;i++)
//	{
//		if (numing[i] == 1)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//
//
//	return 0;
//}


/*
	digit下标会和之前已经操作过的下标相同呗。比如，第1组测试数据的时候，digit=1这个下标可能已经被开了或关了，但是第2组或第3组或第n组的时候，
	也是有可能继续对该下标操作。
	至于为什么最后只有1盏灯是开的，那是因为题目保证了只对其中的一盏灯进行奇数次操作，其他的都是偶数。

	虽然方法1可以AC，但是数组开得太大了可能会导致程序崩溃，因为每个函数都一个函数栈帧，数组开太大超过了这个函数的栈帧程就会崩溃。所以，我把数组放在全局变量的原因
	虽然能过，但是有点说不上来的感觉，哈哈
*/



// 方法2
int main()
{
	int n = 0;
	scanf("%d", &n);

	int ret = 0; // 灯的状态
	
	int i = 0;
	for (i = 0; i < n; i++)
	{
		double a = 0.0;
		int t = 0;
		scanf("%lf %d", &a, &t);

		int j = 0;
		for (j = 1;j <= t; j++)
		{
			int digit = (int) (j * a); // 向下取整得到灯的编号
			ret = ret ^ digit;
		}
	}

	printf("%d\n", ret);


	return 0;
}