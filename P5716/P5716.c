#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int is_leap_year(int year)
{
    // 能被4整数但不能被100整除，或能被400整除
    return ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
}

int main()
{
    int day[13] = { 0, 31,28,31, 30,31,30,31,31,30,31,30,31 };

    int year = 0;
    int month = 0;
    scanf("%d %d", &year, &month);

    
    int days = day[month];;
    if (is_leap_year(year) && month == 2)
    {
        days = day[month] + 1;
    }
    printf("%d\n", days);

    return 0;
}