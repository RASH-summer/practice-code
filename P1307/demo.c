#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int main()
{
	int n = 0;
	int flag = 0; // 0表示无效数字，1表示有效
	int digit = 0;

	scanf("%d", &n);

	// 判断是不是负数
	if (n < 0)
	{
		printf("-");
		n = -n; // 转为正数
	}

	if (n == 0)
		printf("0\n");

	while (n)
	{
		digit = n % 10;
		n /= 10;
		
		if (flag == 0 && digit == 0)
		{
			continue; // 跳过第1个为非0的数
		}
		else
		{
			flag = 1; // 后续所有的数字都是有效的
			printf("%d", digit);
		}
	}
	

	return 0;
	
}



/*
	123%10=3  123/10=12
	12%10=2   12/10=1
	1%10=1    1/10=0

	注：flag乍一看好像没起到什么作用，实际上它是决定了前面遇到的0不输出，但是后面遇到的0要输出

*/