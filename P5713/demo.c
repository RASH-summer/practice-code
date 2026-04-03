#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    
    int Local = n * 5; // ±¾µØ
    int Luogu = n * 3 + 11; // Âå¹È
    
    if (Local < Luogu)
        printf("Local\n");
    else
        printf("Luogu\n");


    return 0;
}