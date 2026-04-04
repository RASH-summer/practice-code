#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <limits.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[100] = { 0 };
    //int arr[n]; VS不支持变长数组的
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    int min = INT_MAX;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < min) // 进来一个数字，比较一个数字
        {
            min = arr[i];
        }
    }

    printf("%d\n", min);

    return 0;
}