#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

/*

	性质1：是偶数
	性质2：大于4且不大于12（也就是5~12，包含12）

	分析：
	小A喜欢两个性质都同事存在的整数；
	Uim喜欢至少存在其中一个性质的整数；
	小B喜欢刚好有符合其中一个性质的整数；
	正妹喜欢没有这两个性质的整数

	小A：对于小A来说，需要这个整数必须偶数，且必须大于4也不能大于12
	Uim：对于Uim来说，需要判断这个整数是不是偶数，如果不是；再看是不是大4且不大于12；
		 如果两个都不是(满足条件)，那就是不喜欢；满足其中一个则喜欢

	小B：对于小B来说，恰好满足其中1个性质，不是两个都满足，也不是两个都不满足！

	正妹：对于正妹来说，她不喜欢有这2个性质的整数
*/

//int main()
//{
//	// 0表示不喜欢
//	// 1表示喜欢
//
//	short A = 0;
//	short Uim = 0;
//	short B = 0;
//	short ZM = 0;
//
//	int n = 0;
//	scanf("%d", &n);
//
//	if ((n % 2 == 0) && (n > 4 && n <= 12)) // 判断小A
//	{
//		A = 1;
//	}
//
//	if ((n % 2 == 0) || (n > 4 && n <= 12)) // 判断Uim
//	{
//		Uim = 1;
//	}
//
	//if ((n % 2 == 0) && (n <= 4 || n > 12) || (n % 2 != 0) && (n > 4 && n<=12)) // 判断小B
	//{
	//	B = 1;
	//}
//	
//
//	if ((n % 2 != 0) && (n <= 4 || n > 12))
//	{
//		ZM = 1;
//	}
//
//	printf("%d %d %d %d\n", A, Uim, B, ZM);
//
//	return 0;
//}



//// 版本2
//int main()
//{
//	// 0表示不喜欢
//	// 1表示喜欢
//
//	short A = 0;
//	short Uim = 0;
//	short B = 0;
//	short ZM = 0;
//
//	int n = 0;
//	scanf("%d", &n);
//
//	if ((n % 2 == 0) && (n > 4 && n <= 12)) // 判断小A
//	{
//		A = 1;
//	}
//
//	if ((n % 2 == 0) || (n > 4 && n <= 12)) // 判断Uim
//	{
//		Uim = 1;
//	}
//	
//	if ((n % 2 == 0) && !(n > 4 && n <= 12) || !(n % 2 == 0) && (n > 4 && n <= 12))
//	{
//		B = 1;
//	}
//
//	if ((n % 2 != 0) && (n <= 4 || n > 12))
//	{
//		ZM = 1;
//	}
//
//	printf("%d %d %d %d\n", A, Uim, B, ZM);
//
//	return 0;
//}
//




// 版本3
int main()
{
	// 0表示不喜欢
	// 1表示喜欢

	
	int n = 0;
	scanf("%d", &n);

	int properties_1 = n % 2 == 0;
	int interval = n > 4 && n <= 12;

	short A = (properties_1) && (interval);
	short Uim = (properties_1) || (interval);
	short B = (properties_1) != (interval);
	short ZM = !(properties_1) && !(interval);

	printf("%d %d %d %d\n", A, Uim, B, ZM);

	return 0;
}


// 我刚开始做的时候，小B的逻辑确实把我给整蒙了，我当时没理解题目的描述。后面是问了AI
