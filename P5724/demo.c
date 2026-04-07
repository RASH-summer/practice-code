#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[100];
    scanf("%d", &arr[0]);

    // 假设数组的0下标位置的元素是最大值和最小值
    int max = arr[0];// 最大值
    int min = arr[0]; // 最小值


    int i = 0;
    for (i = 1; i < n; i++)
    {
        scanf("%d", &arr[i]);

        // 实时更新最大值和最小值
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("%d\n", max - min);

    return 0;
}

// 整体思路，进来一个比较一个