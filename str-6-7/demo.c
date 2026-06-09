#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>

//int main()
//{
//	char str[25] = { 0 };
//	
//	char smallest_word[25] = { 0 };
//	char largest_word[25] = { 0 };
//	
//
//	scanf("%s", str);
//
//	
//	strcpy(smallest_word, str);
//	strcpy(largest_word, str);
//
//
//	if (strlen(str) == 4)
//	{
//		printf("smallest_word：%s\n", smallest_word);
//		printf("largest_word：%s\n", largest_word);
//		return;
//	}
//
//	while (1)
//	{
//		scanf("%s", str);
//
//
//		// 判断是不是4个字母的单词
//		if (strlen(str) == 4)
//			break;
//
//		// 判断单词的大小
//		if (strcmp(str, smallest_word) < 0)
//		{
//			strcpy(smallest_word, str);
//		}
//		if (strcmp(str, largest_word) > 0)
//		{
//			strcpy(largest_word, str);
//		}
//
//		
//	}
//	printf("smallest_word：%s\n", smallest_word);
//	printf("largest_word：%s\n", largest_word);
//
//	
//	return 0;
//}

/*
dog
zebra
rabbit
catfish
walrus
cat
fish
smallest_word：cat
largest_word：zebra
*/




// 判断ipv4是否有效
//int main()
//{
//	char ipv4[20] = { 0 };
//	char sep[] = ".";
//	int number[4] = { 0 };
//
//	scanf("%s", ipv4);
//
//	int j = 0;
//	// 分割字符串
//	char* p = NULL;
//	for (p = strtok(ipv4, sep); p != NULL; p = strtok(NULL, sep))
//	{
//		int n = 0;
//		for (int i = 0; p[i] != '\0'; i++)
//		{
//			// 转为数字
//			n = n * 10 + (p[i]-'0');
//		}
//		number[j] = n;
//		j++;
//	}
//
//
//	// 假设当前段合法
//	int flag = 1;
//	for (j = 0; j < 4;j++)
//	{
//		// 检查每段是否非法
//		if (number[j] < 0 || number[j] > 255)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	if (flag == 1)
//		printf("OK\n");
//	else
//		printf("ERROR\n");
//
//	return 0;
//}




int main()
{
	char str[] = "vid and null";
	char sep[] = "' '";
	
	char words[10][10] = { 0 };
	char count = 0;

	char* p = NULL;

	for (p = strtok(str, sep); p != NULL; p = strtok(NULL, sep))
	{
		strcpy(words[count], p);
		count++;
	}
	
	int i = 0;
	for (i = count - 1; i >= 0; i--)
	{
		printf("%s ", words[i]);
	}
	printf("\n");

	return 0;
}