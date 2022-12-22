#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的反斜线形图案。
输入描述：
    多组输入，一个整数（2~20），表示输出的行数，也表示组成反斜线的“*”的数量。
输出描述：
    针对每行输入，输出用“*”组成的反斜线。
示例
    输入：
        4
    输出：
        *
         *
          *
           *


int main()
{
    int len = 0;
    while (scanf("%d", &len) != EOF)
    {
        getchar();//接受回车符
        int i, j;
        for (i = 0; i < len; i++)
        {
            //打印空格，第一行不打印空格
            for (j = 0; j < i; j++)
            {
                printf(" ");//从第二行开始依次递增打印空格
            }
            //打印*号，每行只打印一个*
            for (j = i; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
*/


/*
描述
    KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的正斜线形图案。
输入描述：
    多组输入，一个整数（2~20），表示输出的行数，也表示组成正斜线的“*”的数量。
输出描述：
    针对每行输入，输出用“*”组成的正斜线。
示例
    输入：
        4
    输出：
           *
          *
         *
        *
*/

int main()
{
    int len = 0;
    while (scanf("%d", &len) != EOF)
    {
        getchar();//接受回车符
        int i, j;
        for (i = 0; i < len; i++)
        {
            //打印空格，递减打印
            for (j = 1; j < len - i; j++)
            {
                printf(" ");
            }
            //打印*号，每行只打印一个
            for (j = i; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");//换行
        }
    }
    return 0;
}