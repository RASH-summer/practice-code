#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
