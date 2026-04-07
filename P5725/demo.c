#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int main()
{
    int n = 0;
    scanf("%d", &n);

    int count = 1;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < n; j++)
        {
            printf("%02d", count++);
        }
        printf("\n");
    }

    printf("\n");

    count = 1;
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < n - i - 1; j++) // 控制空格
        {
            printf("  ");
        }

        for (j = 0; j <= i; j++)
        {
            printf("%02d", count++);

        }
        printf("\n");
    }

    return 0;
}



// 在输出数字的时候，可以拆开写成count++ 然后再输出count的值。我是直接用了后置++，先输出再+1