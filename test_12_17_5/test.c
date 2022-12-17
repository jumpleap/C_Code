#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    KiKi最近学习了信号与系统课程，这门课里有一个非常有趣的函数，单位阶跃函数,
    现在试求单位冲激函数在时域t上的值。
输入描述：
    题目有多组输入数据，每一行输入一个t(-1000
输出描述：
    输出函数的值并换行。
*/

int main()
{
    int t = 0;
    while (scanf("%d", &t) != EOF)
    {
        if (t > 0)
            printf("1\n");
        else if (t == 0)
            printf("0.5\n");
        else
            printf("0\n");
    }
	return 0;
}