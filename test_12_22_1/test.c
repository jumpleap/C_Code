#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的菱形图案。
输入描述：
    多组输入，一个整数（2~20）。
输出描述：
    针对每行输入，输出用“*”组成的菱形，每个“*”后面有一个空格。
示例
    输入：
        2
    输出：
          *
         * *
        * * *
         * *
          *


//法一：分为三部分打印：上中下
int main()
{
    int len = 0;
    while (scanf("%d", &len) != EOF)
    {
        getchar();//接受换行符
        int i, j, k;
        
        //打印上半部分
        for (i = 0; i < len; i++)
        {
            //打印空格，打印第一个*号前面的空格
            for (j = 0; j < len - i; j++)
            {
                printf(" ");
            }
            //在空格后面打印*
            for (k = 0; k <= i; k++)
            {
                printf("* ");
            }
            printf("\n");
        }

        //打印中间部分：中间部分要多一颗*
        for (i = 0; i <= len; i++)
        {
            printf("* ");
        }
        printf("\n");//换行

        //打印下半部分
        for (i = 0; i < len; i++)
        {
            //打印空格
            for (k = 0; k <= i; k++)
            {
                printf(" ");
            }

            //在空格后面打印*号
            for (j = 0; j < len - i; j++)
            {
                printf("* ");
            }
            printf("\n");//换行

        }
    }
    return 0;
}
*/


//法二：分为两部分打印：上下
int main()
{
    int len = 0;
    while (scanf("%d", &len) != EOF)
    {
        getchar();//接受换行符
        int i, j, k;
        //打印上半部分，len + 1把中间行算入在内
        for (i = 0; i < len + 1; i++)
        {
            for (j = 0; j < len - i; j++)
            {
                printf(" ");
            }
            for (k = 0; k <= i; k++)
            {
                printf("* ");
            }
            printf("\n");
        }

        //打印下半部分
        for (i = 0; i < len; i++)
        {
            for (k = 0; k <= i; k++)
            {
                printf(" ");
            }

            for (j = 0; j < len - i; j++)
            {
                printf("* ");
            }
            printf("\n");

        }
    }
    return 0;
}