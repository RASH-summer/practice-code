#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//
//int main()
//{
//	//printf("-------");
//	//printf("%c", '\n');
//	//printf("-------");
//
//	//printf("%c", "\n"); // err
//
//	//printf("%d\n", '\n');
//
//	//putchar("\n"); //err
//
//	puts("");
//
//
//	return 0;
//}


//int main()
//{
//	int* p = "abc";
//	putchar(*p);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	char s[10];
//	int j = 0;
//
//	scanf("%d%s%d", &i, s, &j);
//
//	printf("%d\n", i);
//	printf("%s\n", s);
//	printf("%d\n", j);
//	
//	return 0;
//}


//int main()
//{
//	char s[] = "Hsjodi";
//	char* p = NULL;
//	
//	for (p = &s[5]; p >= s; p--)
//	{
//		--(*p);
//	}
//
//	puts(s);
//
//	return 0;
//}


//int f(char* s, char* t)
//{
//	char* p1;
//	char* p2;
//
//	for (p1 = s; *p1; p1++)
//	{
//		for (p2 = t; *p2; p2++)
//		{
//			if (*p1 == *p2)
//				break;
//		}
//		if (*p2 == '\0')
//			break;
//	}
//
//	return p1 - s;
//}
//
//int main()
//{
//	
//	printf("%d\n", f("abcd", "babc"));
//	printf("%d\n", f("abcd", "bcd"));
//
//
//	return 0;
//}



#include <string.h>

//int main()
//{
//	char str1[20] = "abcdef";
//	char str2[20] = "xxxxxxxxxx";
//	strcpy(str2, str1);
//	printf("%s\n", str2);
//
//	return 0;
//}


//int main()
//{
//	char str[30] = "xxxxxxxxxxxxxxxx";
//
//	strcpy(str, "tire-bouchon");
//	strcpy(&str[4], "d-or-wi");
//	strcat(str, "red?");
//
//	printf("%s\n", str);
//
//	return 0;
//}



//int main()
//{
//	char s1[40] = "computer";
//	char s2[40] = "science";
//
//	if (strcmp(s1, s2) < 0)
//	{
//		strcat(s1, s2);
//	}
//	else
//	{
//		strcat(s2,s1);
//	}
//
//	s2[strlen(s2) - 6] = '\0';
//
//	printf("s1 = %s\n", s1);
//	printf("s2 = %s\n", s2);
//
//
//	return 0;
//}



//char* test(const char* p)
//{
//	char* q;
//	strcpy(q, p);
//	return p;
//}
//
//int main()
//{
//	char str[20] = "abcdef";
//	
//	test(str);
//
//	return 0;
//}


