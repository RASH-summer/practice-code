#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>


int main()
{
    double s = 0.0;
    scanf("%lf", &s);

    double step_len = 2.0; // 步长为2
    double total = 0.0; // 总距离
    int steps = 0; // 步数

    while (total < s)
    {
        steps++;
        total += step_len; // 每游一步的距离累加
        step_len *= 0.98; // 下一次能游的距离

    }

    printf("%d\n", steps);

    return 0;
}

