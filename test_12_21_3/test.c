#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*
描述
    KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的金字塔图案。
输入描述：
    多组输入，一个整数（2~20），表示金字塔边的长度，即“*”的数量，，也表示输出行数。
输出描述：
    `针对每行输入，输出用“*”组成的金字塔，每个“*”后面有一个空格。
示例1
    输入：
        4
    输出：
           *
          * *
         * * *
        * * * *
*/

int main() 
{
    int len = 0;
    while (scanf("%d", &len) != EOF)
    {
        int i, j, k;
        for (i = 1; i <= len; i++)
        {
            //打印空格：数每行前面的空格数，找规律：len - i
            for (j = 1; j <= len - i; j++)
            {
                printf(" ");
            }
            //打印*和空格
            for (k = 1; k <= i; k++)
            {
                printf("* ");
            }
            printf("\n");//输出一行后换行
        }
    }
    return 0;
}