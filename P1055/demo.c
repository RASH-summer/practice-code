#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>



/*
	字符数组存放输入进来的ISBN号码
	把数字字符转为整形
	计算出识别码
	是否为10，是则换成X
	识别码是否正确
*/

int main()
{
	char isbn[20] = { 0 };
	scanf("%s", isbn);
		
	size_t len = strlen(isbn)-1;
	int k = 0; // 记录数字字符个数
	int sum = 0;
	size_t i = 0;
	
	for (i = 0; i < len; i++)
	{
		if (isbn[i] >= '0' && isbn[i] <= '9') // 跳过分隔符
		{
			k++;

			// 0-670-82162-4
			if (k <= 9) // 只计算前9位数字
			{
				sum += (isbn[i] - '0') * k; // 数字字符转为 -> 数字
			}
		}
		
	}

	int mod = sum % 11; 
	char expected = 0;
	if (mod == 10)
	{
		expected = 'X'; // 替换X
	}
	else
	{
		expected = mod + '0'; // 转为数字字符
	}


	// 识别码是否正确
	if (expected == isbn[len])
	{
		printf("Right\n");
	}
	else
	{
		// 替换正确的识别码
		isbn[len] = expected;
		printf("%s\n", isbn);
	}
		
	return 0;
}