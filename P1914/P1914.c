#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>

int main()
{
    char str[55] = { 0 };

    int n = 1;
    scanf("%d", &n);
    scanf("%s", str);

    int i = 0;
    while (str[i] != '\0')
    {
        str[i] = ((str[i] - 'a' + n) % 26 + 'a') ;
        i++;
    }
    printf("%s\n", str);

    return 0;
}