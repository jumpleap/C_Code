#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    给定n个整数和一个整数x，小乐乐想从n个整数中判断x出现几次，请编程帮他实现。
输入描述：
    共3行
    第一行，一个整数，表示n（1 <= n <= 100）。
    第二行，共输入n个整数，两个整数之间用空格分隔。
    第三行，输入一个整数，表示要查找的整数x。
输出描述：
    一行，表示整数x出现的次数
*/

int main()
{
    int arr[100] = { 0 };
    int n = 0;
    int num = 0;
    int count = 0;//计数器
    int i = 0;
    //输入
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &num);

    for (i = 0; i < n; i++)
    {
        //查找数组中与num相同的数
        if (num == arr[i])
            count++;
    }
    printf("%d\n", count);
    return 0;
}