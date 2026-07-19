#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>


// 反转整数
void reversa(char* src, size_t start, size_t end)
{

	// “双指针法交换字符” - 这里用的是下标，但思想和双指针是一样的
	for (size_t j = start, k = end - 1; j < k; j++, k--)
	{
		// 交换
		char tmp = src[j];
		src[j] = src[k];
		src[k] = tmp;
	}
}

void print(char* src, size_t start, size_t end)
{
	size_t mark = start;
	while (mark <= end - 1 && src[mark] == '0')
	{
		mark++;
	}
	if (mark > end - 1)
	{
		printf("0"); // 这里千万不能换行！！
		return;
	}

	for (; mark <= end - 1; mark++)
	{
		printf("%c", src[mark]);
	}
}


int main()
{
	char str[24] = { 0 };
	scanf("%s", str);
	size_t size_str = strlen(str);
	// 符号的位置
	size_t esp_pos = 0;

	// 当前的符号
	char symbols = 0;

	// 遍历字符串
	for (size_t i = 0; i < size_str; i++)
	{
		if (str[i] == '.' || str[i] == '/' || str[i] == '%')
		{
			esp_pos = i; // 记录符号的位置
			symbols = str[i]; // 记住当前符号
			break;
		}
	}

	if (symbols == '.') // 小数
	{
		reversa(str, 0, esp_pos);
		print(str, 0, esp_pos);
		reversa(str, esp_pos + 1, size_str);

		// 处理小数后半部分有0的情况，如3.10 应输出3.1
		size_t new_len = size_str - 1; // 最后一个字符的位置（下标）
		while (esp_pos + 1 < new_len && str[new_len] == '0')
		{
			new_len--;
		}
		for (size_t z = esp_pos; z <= new_len; z++)
			printf("%c", str[z]);
	}
	else if (symbols == '/') // 分数
	{
		reversa(str, 0, esp_pos);
		print(str, 0, esp_pos);
		printf("%c", str[esp_pos]);
		reversa(str, esp_pos + 1, size_str);
		print(str, esp_pos + 1, size_str);
	}
	else if (symbols == '%') // 百分数
	{
		reversa(str, 0, esp_pos);
		print(str, 0, esp_pos);
		printf("%c", str[esp_pos]);
	}
	else // 整数
	{
		reversa(str, 0, size_str);
		print(str, 0, size_str);
	}

	return 0;
}