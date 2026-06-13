#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>	
#include <string.h>	
#include <ctype.h>


int Add(int a, int b)
{
	return a + b;
}


int Sub(int a, int b)
{
	return a - b;
}


int Mul(int a, int b)
{
	return a * b;
}


int to_int(char* src)
{
	int n = 0;
	for (int i = 0; *(src + i) != '\0'; i++)
	{
		n = n * 10 + (*(src + i) - '0');
	}
	return n;
}

void test(char* src)
{
	char* token = NULL;
	char* tokens[3] = { NULL };
	size_t token_cnt = 0; // 统计token个数
	for (token = strtok(src, " "); token != NULL; token = strtok(NULL, " "))
	{
		// 存放token
		tokens[token_cnt++] = token;
	}

	int ret = 0; 
	int a = 0;
	int b = 0;
	
	char op = 0; // 运算符
	static char last_op = 0; // 记住上一次的运算
	if (3 == token_cnt)
	{
		op = *(tokens[0]);

		// 转为数字
		a = to_int(tokens[1]);
		b = to_int(tokens[2]);
		
		// 记录本次执行的运算
		last_op = op;
	}
	else
	{
		a = to_int(tokens[0]);
		b = to_int(tokens[1]);

		// 执行上一次的运算
		op = last_op;
	}
	
	char sym = 0;
	switch (op)
	{
	case 'a':
		ret = a + b;
		sym = '+';
		break;
	case 'b':
		ret = a - b;
		sym = '-';
		break;
	case 'c':
		ret = a * b;
		sym = '*';
		break;
	default:
		printf("输入错误\n");
		break;
	}
	
	// 拼接等式
	char expr[55] = { 0 };
	sprintf(expr, "%d%c%d=%d", a, sym, b, ret);
	size_t len = strlen(expr);
	printf("%s\n%zu\n", expr, len);


}



int main()
{
	char str[55] = { 0 };
	char new_str[55] = { 0 };
	int i = 0;
	scanf("%d", &i);

	getchar();// 吃掉\n

	size_t  len = 0;
	// 读取数据
	for (int j = 0; j < i; j++)
	{
		fgets(str, 54, stdin);

		len = strlen(str) - 1;
		if (str[len] == '\n')
			str[len] = '\0';

		// 拷贝字符串
		strcpy(new_str, str);

		// 切割字符串
		test(new_str);
	}

	return 0;
}



