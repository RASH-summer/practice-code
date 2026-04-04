#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int len = 0;
    scanf("%d", &len);;

    int day = 1; // 从起始天数开始
    while (len > 1)
    {
        len = len / 2;
        day++;
    }

    printf("%d\n", day);

    return 0;
}