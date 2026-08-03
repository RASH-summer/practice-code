#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>


// 倒序存放
void reverse(char* src, int* arr)
{
    for (int i = 0; i < strlen(src); i++)
    {
        arr[i] = src[strlen(src) - 1 - i] - '0';
    }
}

void mul(int* arr1, int* arr2, int* ret, char* src1, char* src2)
{
    // 控制数组b
    for (int i = 0; i < strlen(src2);i++)
    {
        for (int j = 0; j < strlen(src1); j++) // 控制数组a
        {
            // arr1的每一位和arr2第i位相乘
            ret[j + i] = ret[j + i] + arr1[j] * arr2[i];

            // 进位
            if (ret[j + i] >= 10)
            {
                ret[j + i + 1] += ret[j + i] / 10;
                ret[j + i] = ret[j + i] % 10;
            }
        }
    }
}



void print(int* ret, size_t len)
{
    int index = 0;
    for (int i = (int)len - 1; i >= 0; i--)
    {
        if (ret[i] != 0)
        {
            index = i; // 记录第一个非0的下标位置
            break;
        }
    }

    // 输出结果
    for (int i = index; i >= 0; i--)
    {
        printf("%d", ret[i]);
    }

}

int main()
{
    char s1[200] = { 0 };
    char s2[200] = { 0 };

    int a[210] = { 0 };
    int b[210] = { 0 };
    int c[500] = { 0 };
    scanf("%s %s", s1, s2);

    // 倒序存放
    reverse(s1, a);
    reverse(s2, b);

    mul(a, b, c, s1, s2);


    size_t len = strlen(s1) + strlen(s2);

    // 倒序输出
    print(c, len);

    return 0;
}
