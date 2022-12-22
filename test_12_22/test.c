#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的翻转金字塔图案。
输入描述：
    多组输入，一个整数（2~20），表示翻转金字塔边的长度，即“*”的数量，也表示输出行数。
输出描述：
    针对每行输入，输出用“*”组成的金字塔，每个“*”后面有一个空格。
示例1
    输入：
        5
    输出：
        * * * * *
         * * * *
          * * *
           * *
            *
*/

int main()
{
    int len;
    while (scanf("%d", &len) != EOF)
    {
        int i, j, k;
        for (i = 0; i < len; i++)
        {
            //先打印空格，倒着打从0开始
            for (k = 0; k < i; k++)
            {
                printf(" ");
            }

            //打印*，第一层打满*，剩下的依次递减
            for (j = len - i; j > 0; j--)
            {
                printf("* ");
            }
            printf("\n");//换行
        }
    }
    return 0;
}