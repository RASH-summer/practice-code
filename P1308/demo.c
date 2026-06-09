#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

#include <ctype.h>


char word[15] = { 0 };
char article[1000005] = { 0 };



// 转为小写
void to_tolower(char* src)
{
	int i = 0;
	for (i = 0; src[i] != '\0'; i++)
	{
		src[i] = tolower(src[i]);
	}

}


// 第一次出现的位置
int find_first_word(const char* str, const char* word, size_t len)
{
	int i = 0;
	while (str[i] != '\0')
	{
		// 跳过所有空格
		while (str[i] == ' ')
		{
			i++;
		}

		// 特殊情况
		if (str[i] == '\0')
		{
			break;
		}

		int start = i; // 单词起始位置

		// 找单词边界
		while (str[i] != ' ' && str[i] != '\0')
		{
			i++;
		}
		int len_word = i - start;


		if (len_word == len && strncmp(&str[start], word, len_word) == 0)
			return start; // 返回起始位置

	}
	return -1;
}


int find_count(char* src, char* word)
{
	int count = 0;
	char* tmp = NULL;
	for (tmp = strtok(src, " "); tmp != NULL; tmp = strtok(NULL, " "))
	{
		if (strcmp(tmp, word) == 0)
		{
			count++;
		}
	}
	return count;
}

int main()
{


	fgets(word, 14, stdin);
	fgets(article, 1000004, stdin);

	size_t article_len = strlen(article) - 1;
	size_t word_len = strlen(word) - 1;

	// 处理\n
	if (article[article_len] == '\n')
	{
		article[article_len] = '\0';

	}

	if (word[word_len] == '\n')
	{
		word[word_len] = '\0';
	}


	// 转为小写
	to_tolower(article);
	to_tolower(word);

	// 第一次出现的位置
	int index = find_first_word(article, word, word_len);

	// 出现的次数
	int count = find_count(article, word);


	if (count > 0)
		printf("%d %d\n", count, index);
	else
		printf("%d\n", index);


	return 0;
}

