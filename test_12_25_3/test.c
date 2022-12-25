#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的“空心”正方形图案。
输入描述：
    多组输入，一个整数（3~20），表示输出的行数，也表示组成正方形边的“*”的数量。
输出描述：
    针对每行输入，输出用“*”组成的“空心”正方形，每个“*”后面有一个空格。


int main()
{
    int len = 0;
    while (scanf("%d", &len) != EOF)
    {
        int i, j;
        for (i = 0; i < len; i++)
        {
            for (j = 0; j < len; j++)
            {
                //i为0或len-1是第一行和最后一行的打印，j=0或j=len-1是第一个字符和最后一个字符的打印
                if (i == 0 || i == len - 1 || j == 0 || j == len - 1)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");//打印两个字符
                }
            }
            printf("\n");//换行
        }
    }
    return 0;
}
*/



/*
描述
    输入NxM矩阵，矩阵元素均为整数，计算其中大于零的元素之和。
输入描述：
    第一行为N M(N: 矩阵行数；M: 矩阵列数, 且M, N <= 10)，接下来的N行为矩阵各行。
输出描述：
    一行，其中大于零的元素之和。
*/

int main()
{
    int arr[10][10] = { 0 };
    int sum = 0;//计算总和
    int n, m;
    //输入行和列
    scanf("%d %d", &n, &m);
    int i, j;
    //输入数据
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &arr[i][j]);

    for (i = 0; i < n; i++)
    {
        //判断
        for (j = 0; j < m; j++)
        {
            if (arr[i][j] > 0)
            {
                sum += arr[i][j];//计算总和
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}