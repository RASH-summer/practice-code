#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main()
{
    int n = 0;
    int x = 0;
    int count = 0;
    scanf("%d %d", &n, &x);

    for (int i = 1; i <= n; i++)
    {
        int temp = i;
        while (temp)
        {
            if (temp % 10 == x)
            {
                count++;
            }
            temp /= 10;
        }
       
        

    }
    printf("%d\n", count);

    return 0;
}