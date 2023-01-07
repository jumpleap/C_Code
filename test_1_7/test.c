#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

/*
描述
    兔子发现了一个数字序列，于是开始研究这个序列。兔子觉得一个序列应该需要有一个命名，
    命名应该要与这个序列有关。由于兔子十分讨厌完全平方数，所以兔子开创了一个新的命名方式：
    这个序列中最大的不是完全平方数的数字就是他的名字。
    现在兔子有一个序列，想要知道这个序列的名字是什么。
输入描述：
    第一行一个整数 n，表示序列的长度。
    第二行有 n 个整数 ai，表示序列中的 n 个数分别是多少。
输出描述：
    输出仅一行，表示这个序列的名字，也就是这个序列中最大的非完全平方数。
*/

//判断是否是完全平方数
int judge(int num)
{
    int n = sqrt(num);
    //判断完全平方数
    if (n * n == num)
        return 0;
    else
        return 1;
}

int main()
{
    int n = 0;
    int arr[1000] = { 0 };
    //输入
    scanf("%d", &n);
    int i = 0, j = 0;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    //进行判断是否是完全平方数
    for (i = 0; i < n; i++)
    {
        if (judge(arr[i]) == 1)
        {
            arr[j] = arr[i];//把不是完全平方数的重新储存在数组中
            j++;
        }
    }
    //判断最大值
    int max = arr[0];
    for (i = 0; i < j; i++)
    {
        if (max < arr[i])
            max = arr[i];//得到最大值
    }
    printf("%d\n", max);
    return 0;
}