#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//
//    int price_1 = 0; // 第1种铅笔的价格
//    int num_1 = 0; // 第1种铅笔的数量
//
//    int price_2 = 0; //第2种铅笔的价格
//    int num_2 = 0; // 第2种铅笔的数量
//
//    int price_3 = 0; // 第3种铅笔的价格
//    int num_3 = 0; //第3种铅笔的数量
//
//    scanf("%d %d", &num_1, &price_1);
//    scanf("%d %d", &num_2, &price_2);
//    scanf("%d %d", &num_3, &price_3);
//
//    // 向上取整
//    int ret_1 = (n + num_1 - 1) / num_1 * price_1;
//    int ret_2 = (n + num_2 - 1) / num_2 * price_2;
//    int ret_3 = (n + num_3 - 1) / num_3 * price_3;
//
//
//    // 三个数比较大小
//    // 确定最小值 
//    // 10 5 2
//    if (ret_1 > ret_2)
//    {
//        int tmp = ret_1;
//        ret_1 = ret_2;
//        ret_2 = tmp;
//        // 5 10 2
//    }
//    if (ret_1 > ret_3)
//    {
//        int tmp = ret_1;
//        ret_1 = ret_3;
//        ret_3 = tmp;
//    }
//
//    // 比较后面两个数大小中间值就出来了
//    // 2 10 5
//    //if (ret_2 > ret_3)
//    //{
//    //    int tmp = ret_2;
//    //    ret_2 = ret_3;
//    //    ret_3 = tmp;
//    //}
//
//
//    // 输出最小值
//    printf("%d\n", ret_1);
//
//    return 0;
//}


// 版本2
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//
//    int price_1 = 0; // 第1种铅笔的价格
//    int num_1 = 0; // 第1种铅笔的数量
//
//    int price_2 = 0; //第2种铅笔的价格
//    int num_2 = 0; // 第2种铅笔的数量
//
//    int price_3 = 0; // 第3种铅笔的价格
//    int num_3 = 0; //第3种铅笔的数量
//
//    scanf("%d %d", &num_1, &price_1);
//    scanf("%d %d", &num_2, &price_2);
//    scanf("%d %d", &num_3, &price_3);
//
//    // 向上取整
//    int ret_1 = (n + num_1 - 1) / num_1 * price_1;
//    int ret_2 = (n + num_2 - 1) / num_2 * price_2;
//    int ret_3 = (n + num_3 - 1) / num_3 * price_3;
//
//    // 简化if语句
//    int min = ret_1 > ret_2 ? ret_2 : ret_1;
//    min = min > ret_3 ? ret_3 : min;
//
//    printf("%d\n", min); // 输出最小值
//
//    return 0;
//}




 //版本3
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    
//    int number_price[3][2] = { 0 };
//    
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        int j = 0;
//        for (j = 0; j < 2; j++)
//        {
//            scanf("%d", &number_price[i][j]);
//        }
//    }
//   
//
//    int ret_1 = (n + number_price[0][0] - 1) / number_price[0][0] * number_price[0][1];
//    int ret_2 = (n + number_price[1][0] - 1) / number_price[1][0] * number_price[1][1];
//    int ret_3 = (n + number_price[2][0] - 1) / number_price[2][0] * number_price[2][1];
//
//
//
//    // 向上取整
//    //int ret_1 = (n + num_1 - 1) / num_1 * price_1;
//    //int ret_2 = (n + num_2 - 1) / num_2 * price_2;
//    //int ret_3 = (n + num_3 - 1) / num_3 * price_3;
//
//
//    // 简化if语句
//    int min = ret_1 > ret_2 ? ret_2 : ret_1;
//    min = min > ret_3 ? ret_3 : min;
//
//    printf("%d\n", min); // 输出最小值
//
//    return 0;
//}



#include <limits.h> // 因为INT_MAX头文件

// 版本4
int main()
{
    int n = 0;
    
    int min = INT_MAX; // 假设最小值是一个很大的数字
    scanf("%d", &n);


    int i = 0;
    for (i = 0; i < 3; i++)
    {
        int num = 0;
        int price = 0;

        scanf("%d %d", &num, &price);

        int current_cost = (n + num - 1) / num * price; // 向上取整

        
        // 更新最小值
        if (current_cost < min)
            min = current_cost;
    }


    printf("%d\n", min); // 输出最小值

    return 0;
}

