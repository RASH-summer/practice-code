#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int number[n];

    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }

    int count = 0;
    int k = 0;
    for (i = 0; i < n; i++)
    {
        count = 0; // 重置为0
        int j = 0;
        for (j = 0; j < i; j++)
        {
            if (number[i] > number[j])
            {
                count++;
            }
        }

        printf("%d ", count);
    }

    printf("\n");

    return 0;
}



// 跟插入排序有点相似，就是拿起第i只小鱼然后跟前一只小鱼的可爱值去比较，统计不比当前小鱼可爱的有多少只