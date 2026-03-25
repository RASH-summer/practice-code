#define _CRT_SECURE_NO_WARNINGS 1


/*
    1. 需要的变量：m(个数)、t(时间分钟)、s(过去的时间)’

    如果有3个苹果，吃完一个苹果需要2分钟，现在过去了5分钟
    还剩下几个完整的苹果？

    1. 首先，吃一个苹果需要2分钟，过去了5分钟，肯定可以吃完
       2个苹果。还剩下1分钟，吃不完剩下的1个苹果了，但是这
       个苹果也是不完整的（可能咬了一口）
        5%2=1分钟
    2.判断剩下的时间是否>0，如果大于0，说明还可以吃下一个
    苹果；否则，就是不可以。


    需要变量：count(苹果个数)、minute(花费时间)、
    past_time(过去的时时间)

*/

#include <stdio.h>

//int main()
//{
//    long long count = 0;
//    long long minute = 0;
//    long long past_time = 0;
//
//    scanf("%lld %lld %lld", &count, &minute, &past_time);
//
//    // 判断0不能作为除数
//    if (minute <= 0 || count <= 0 || past_time > count)
//    {
//        // 花费时间为0，说明直接“秒吃”
//        count = 0;
//    }
//    else
//    {
//        // 计算出吃完n个苹果，还剩下的时间
//        long long eaten = past_time % minute;
//
//        count -= past_time / minute;
//
//        // 判断剩下的时间是否>0
//        if (eaten > 0)
//        {
//            count--;
//        }
//
//    }
//
//    printf("%lld\n", count);
//
//    return 0;
//}

  


/*
    优化代码 （其实也是看了ai给的代码，哈哈哈）
    ai指出我前面的代码past_time>count该表达式是错误的！原因是：past_time为过去时间，count为苹果的数量
    两者单位不一样所以不能直接比较！

    ai给出的样例：
    m=3 个苹果，t=2 分钟/个，s=10 分钟 → s=10 > m=3，但这是完全合法的输入！
    实际能吃 10 / 2 = 5 个，但只有 3 个苹果 → 最多吃完 3 个，剩下 0 个完整苹果
    所以，边界应该是：吃掉的苹果数量不能超过count，也就是苹果的总数量！

    1.最多能吃多少个: eaten = s/m
    2.如果 s % t ! = 0 说明还在吃 eaten+1个苹果，只要咬了就不算完整
    3.
*/
int main()
{
    long long m = 0;
    long long t = 0;
    long long s = 0;
    
    scanf("%lld %lld %lld", &m, &t, &s);

    // 特殊情况，吃一个苹果不需要时间 = 瞬间吃完
    if (t == 0)
    {
        printf("0\n");
        return 0; // 提前结束程序
    }

    // 向上取整:表示，已经开始吃的苹果个数
    long long eaten = (s + t - 1) / t;
    if (eaten >= m)
    {
        printf("0\n");
    }
    else
    {
        printf("%lld\n", m - eaten);
    }

    return 0;

}


/*
    这个简洁的代码关键就在于：向上取整

    为什么可以向上取整？
    
    问：有 s 分钟，吃一个苹果要 t 分钟，问最多“开始吃”了多少个苹果？
    即使只咬了一口，也算“开始吃了”。

    这就是一个典型的向上取整
*/