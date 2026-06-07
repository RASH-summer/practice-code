#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>	


size_t my_strlen(const char* src)
{
	assert(src);
	if (*src != '\0')
		return 1 + my_strlen(src + 1); // 找下一个字符
	else
		return 0;

}

//int main()
//{
//	char str[] = "abcdef";
//	size_t len = my_strlen(str);
//	
//	printf("%zu\n", len);
//
//	return 0;
//}




//char* my_strcpy(char* dest, const char* src)
//{
//	assert(src && dest);
//
//	char* start = dest;
//
//	// 拷贝\0前的字符
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//
//	// 拷贝\0
//	*dest = *src; 
//	return start;
//}



char* my_strcpy(char* dest, const char* src)
{
	assert(src && dest);

	char* start = dest;

	// 拷贝\0前的字符
	while (*dest++ = *src++)
	{
		;
	}

	return start;
}


//int main()
//{
//	char arr[] = "abcdefg";
//	char arr2[20];
//
//	char* ret = my_strcpy(arr2, arr);
//	printf("%s\n", ret);
//
//	return 0;
//}


char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* start = dest;
	while (*dest != '\0')
	{
		dest++;
		;
	}

	
	while (*dest++ = *src++)
	{
		;
	}

	return start;
}

//int main()
//{
//	char arr[20] = "abcdefg";
//	char arr2[20] = "hi";
//
//	char* ret = my_strcat(arr, arr2);
//	printf("%s\n", ret);
//
//	return 0;
//}




char* my_strstr(const char* str1, const char* str2)
{
	const char* p = str1; // 记录第一次出现的位置
	const char* find1 = NULL;
	const char* find2 = NULL;

	// 特殊处理
	if (*str2 == '\0')
		return (char*)str1;
	while (*p)
	{
		find1 = p;
		find2 = str2;
		
		while (*find1 != '\0' && *find2 != '\0' && * find1 == *find2)
		{
			find1++;
			find2++;
		}
		if (*find2 == '\0')
			return (char*)p;
		p++;
	}
	return NULL;

}


int main()
{
	char arr[20] = "abbbcdef";
	char arr2[20] = "bbc";

	char* ret = my_strstr(arr, arr2);
	if (ret != NULL)
	{
		printf("找到了,%s\n", ret);
	}
	else
	{
		printf("找不到");
	}

	return 0;
}