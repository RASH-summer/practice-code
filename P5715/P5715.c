#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>


int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	

	// 8 5 3


	if (a > b) 
	{
		int tmp = a;
		a = b;
		b = tmp;

		// 确定a是最小的 -> 5 8 3  
	}

	if (a > c)
	{
		int tmp = a;
		a = c;
		c = tmp;

		// 3 8 5
	}

	if (b > c)
	{
		int tmp = b;
		b = c; 
		c = tmp;
	}

	printf("%d %d %d\n", a, b, c);

	return 0;
}

// 思路：找到最小的数字给a，然后再比较后面2个数字，把大的放后面，中间值就自己出来了。