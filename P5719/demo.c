#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>


int main()
{
    int n = 0;
    int k = 0;
    scanf("%d %d", &n, &k);
    int i = 0;
    double sum_a = 0;
    double sum_b = 0;
    int a = 0;
    int b = 0;


    for (i = 1; i <= n; i++) // 注意是1~n的数字，也就是包含n
    {
        if (i % k == 0)
        {
            sum_a += i;
            a++;
        }
        else
        {
            sum_b += i;
            b++;
        }
    }

    printf("%.1f %.1f\n", sum_a / a, sum_b / b);

    return 0;
}