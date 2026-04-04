#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int count = 0; // 输出的数字
    int i = 0;
    for (i = 0; i < n; i++) // 控制行
    {
        int j = 0;
        for (j = 0; j < n - i; j++) // 控制每一行需要输出多少个数字
        {
            count++;
            printf("%02d", count);
        }
        printf("\n");
    }
    return 0;
}

/*
0102030405
06070809
101112
1314
15

    题目说不够两位数用前导0填充。
    我把输出的示例每个数字都看成2位数为一组
    如：01 02 03 04 05 实际上是5个数字，两个为一组


*/