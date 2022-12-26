#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，
    该任务是打印用“*”组成的“空心”三角形图案。
输入描述：
    多组输入，一个整数（3~20），表示输出的行数，也表示组成三角形边的“*”的数量。
输出描述：
    针对每行输入，输出用“*”组成的“空心”三角形，每个“*”后面有一个空格。
*/

int main()
{
    int len = 0;
    while (scanf("%d", &len) != EOF)
    {
        int i, j;
        for (i = 1; i <= len; i++)
        {
            for (j = 1; j <= i; j++)
            {
                //i==len为最后一行的打印，j==1是第一行的打印，j==i是最后一行的打印
                if (i == len || j == 1 || j == i)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");//两个空格
                }
            }
            printf("\n");//换行
        }
    }
    return 0;
}