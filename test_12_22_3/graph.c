#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的箭形图案。
输入描述：
    本题多组输入，每行一个整数（2~20）。
输出描述：
    针对每行输入，输出用“*”组成的箭形。
示例
    输入：
        2
    输出：
            *
          **
        ***
          **
            *

*/

int main()
{
    int len = 0;
    while (scanf("%d", &len) != EOF)
    {
        getchar();//接受换行符
        int i, j;
        //上半部分
        for (i = 0; i < len + 1; i++)
        {
            //打印空格：2的倍数，上半部分先从最多的空格数开始打印
            for (j = 0; j < 2 * (len - i); j++)
            {
                printf(" ");
            }

            //打印*号，第几行则打印几颗*
            for (j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");//换行
        }

        //换行
        for (i = 1; i <= len; i++)
        {
            //打印空格，先从2个空格开始打印
            for (j = 1; j <= 2 * i; j++)
            {
                printf(" ");
            }
            //打印*号
            for (j = i; j <= len; j++)
            {
                printf("*");
            }
            printf("\n");//换行
        }
    }
    return 0;
}