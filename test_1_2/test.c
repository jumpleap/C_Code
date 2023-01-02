#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的X形图案。
输入描述：
    多组输入，一个整数（2~20），表示输出的行数，也表示组成“X”的反斜线和正斜线的长度。
输出描述：
    针对每行输入，输出用“*”组成的X形图案。
*/

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
                //i==j是正斜杠，j==len-1-i是反斜杠
                if (i == j || j == len - 1 - i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");//换行
        }
    }
    return 0;
}