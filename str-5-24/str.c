#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <ctype.h>




void read_line(char* str, int num)
{
	char ch = 0;
	int i = 0;

	// 跳过开头的空白字符
	while ((ch = getchar() != EOF) && (isspace(ch) > 0))
	{
		;
	}

	// while条件不成立，来到这里，非空白字符
	while (ch  != EOF && i < num - 1)
	{
		
	}

}



int main()
{

	// isspace 的返回值：
	// 如果是空白字符为真，返回非0的值
	// 如果不是空白字符为假，返回0

	//int ret = isspace('\n');
	//printf("%d\n", ret);

	char str[20] = { 0 };
	read_line(str, 19);


	return 0;
}


