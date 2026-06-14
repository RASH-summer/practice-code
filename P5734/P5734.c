#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>

int main()
{
	char doc[200] = { 0 }; // 文档
	char insert_str[200] = {0};
	int tims = 0; // 执行次数
	scanf("%d %s", &tims, doc);

	int input = 0;
	int a = 0;
	int b = 0;

	for (int i = 0; i < tims; i++)
	{
		// 执行的操作
		scanf("%d", &input);
	
		switch (input)
		{
		case 1:
			scanf("%s", insert_str);
			strcat(doc, insert_str);
			printf("%s\n", doc);
			break;
		case 2:
			scanf("%d %d", &a, &b);
			doc[a + b]  = '\0';
			strcpy(insert_str, doc + a);
			strcpy(doc, insert_str);
			printf("%s\n", doc);
			break;
		case 3:
			scanf("%d %s", &a, insert_str);
			strcat(insert_str, doc + a);
			doc[a] = '\0';
			strcat(doc, insert_str);
			printf("%s\n", doc);
			break;
		case 4:
			scanf("%s", insert_str);
			char* p = strstr(doc, insert_str);
			printf("%d\n", p != NULL ? (int)(p - doc) : -1);
			break;

		}
	}


	return 0;
}


