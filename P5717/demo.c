#define _CRT_SECURE_NO_WARNINGS 1
/*
    构成一个三角形的基本条件：
    1.任意两边之和大于第三边
    可以先排序找出最长的边

    按边分类：
    1.等腰三角形，两边相等
    2.等边三角形，三边相等

*/

#include <stdio.h>

void sort_int(int* a, int* b, int* c)
{
    if (*a > *b)
    {
        int tmp = *b;
        *b = *a;
        *a = tmp;
    }
    if (*a > *c)
    {
        int tmp = *c;
        *c = *a;
        *a = tmp;
    }
    if (*b > *c)
    {
        int tmp = *c;
        *c = *b;
        *b = tmp;
    }
}

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    sort_int(&a, &b, &c);// 排序找出最大边


    // 判断是否构成三角形
    if (a + b > c)
    {
        // 直角三角形
        if (((a * a) + (b * b) == (c * c)))
        {
            printf("Right triangle\n");
        }
        // 锐角三角形
        else if (((a * a) + (b * b) > (c * c)))
        {
            printf("Acute triangle\n");
        }
        // 钝角三角形
        else if (((a * a) + (b * b) < (c * c)))
        {
            printf("Obtuse triangle\n");
        }
        
        
        // 判断等腰（两边相等）
        if (a == b || a == c || b == c) {
            printf("Isosceles triangle\n");
        }

        // 判断等边（三边相等）
        if (a == b && b == c) {
            printf("Equilateral triangle\n");
        }

    }
    else
    {
        printf("Not triangle\n");
    }


    return 0;
}