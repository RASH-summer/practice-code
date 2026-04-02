#define _CRT_SECURE_NO_WARNINGS 1


/*
	每天游泳250公里，周末休息（双休）

	如果从周1开始游泳，过了7天
	0,1,2,3,4,5,6
	一个礼拜为7天，但是由于不算周末，那么小鱼的游泳天为：1,2,3,4,5
	5*250=1250
*/


#include <stdio.h>


int main()
{
	int x = 0;
	int n = 0;

	scanf("%d %d", &x, &n);
	int total_distance = 0;
	int i = 0;
	
	for (i = 1; i <= n; i++)
	{
		int day = (x + i - 1) % 7; // 范围在0~6之间为一个循环
		
		if (day != 6 && day != 0) // 6表示周6，0表示周日
			total_distance += 250;
	}

	printf("%d\n", total_distance);

	return 0;
}

/*
	(x + i - 1) % 7
	这个公式比较容易陷入的是 +i-1这里。想象一下，日历往后翻，x=3的时候，i=1的时候实际上对应
	的是周3,加上流逝的时间+i-i实际上就是从x的基础上往后推
	
	第1天就是起始的那天，不需要退所以是 x+0
	第2天就是往后推了1天，所以是 x+1
	以此类推...
	

*/