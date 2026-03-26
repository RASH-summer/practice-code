#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


// BMI值=体重/米^2
// 保留x有效位数字用%.xg

int main()
{
    double m = 0;
    double h = 0;
    scanf("%lf %lf", &m, &h);

    double bmi = m / (h * h);


    if (bmi < 18.5)
    {
        printf("Underweight\n");
    }
    else if (bmi >= 18.5 && bmi < 24)
    {
        printf("Normal\n");
    }
    else if (bmi >= 24)
    {
        printf("%.6g\n", bmi);
        printf("Overweight\n");
    }

    return 0;
}