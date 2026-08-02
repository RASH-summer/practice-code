#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>

// 转为整数倒序存放
void reverse(char* src, int* arr)
{
    for (int i = 0; i < strlen(src); i++)
    {
        arr[i] = src[strlen(src) - 1 - i] - '0';
    }

}

// 相乘和进位
void mul(int* arr, int x, size_t size_s)
{
    // 相乘
    for (int i = 0; i < size_s; i++)
    {
        arr[i] = arr[i] * x;
    }

    // 进位  
    for (int i = 0; i < size_s+4; i++)
    {
        
        arr[i + 1] = arr[i + 1] + arr[i] / 10;
        arr[i] = arr[i] % 10;
    }

}

// 倒序输出
void print(int* arr, size_t size_s)
{
    // 找到第一个非0元素
    int index = 0;
    for (int i = (int)size_s + 4; i >= 0; i--)
    {
        if (arr[i] != 0)
        {
            index = i;
            break;
        }
    }

    for (int i = index; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }

}


int main()
{
    char s[200] = { 0 };
    int a[220] = { 0 }; // 高精度数
    int n = 0; // 单精度数


    scanf("%s %d", s, &n);

    size_t len = strlen(s);

    // 倒序存放
    reverse(s, a);
    //每位和n相乘
    mul(a,n,len);

    // 倒序输出
    print(a,len);

    return 0;
}