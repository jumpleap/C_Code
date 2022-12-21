#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的线段图案。
输入描述：
    多组输入，一个整数（1~100），表示线段长度，即“*”的数量。
输出描述：
    针对每行输入，输出占一行，用“*”组成的对应长度的线段。
输入：
    10
    2
输出：
    **********
    **


int main()
{
    int num;
    while (scanf("%d", &num) != EOF)
    {
        int i = 0;
        for (i = 0; i < num; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/


/*
描述
    KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的正方形图案。
输入描述：
    多组输入，一个整数（1~20），表示正方形的长度，也表示输出行数。
输出描述：
    针对每行输入，输出用“*”组成的对应边长的正方形，每个“*”后面有一个空格。


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
                printf("%c ", '*');
            }
            puts("");//换行
        }
    }
    return 0;
}
*/


/*
描述
    KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的直角三角形图案。
输入描述：
    多组输入，一个整数（2~20），表示直角三角形直角边的长度，即“*”的数量，也表示输出行数。
输出描述：
    针对每行输入，输出用“*”组成的对应长度的直角三角形，每个“*”后面有一个空格。
*/

int main()
{
    int len = 0;
    while (scanf("%d", &len) != EOF)
    {
        int i, j;
        for (i = 0; i < len; i++)
        {
            for (j = 0; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}