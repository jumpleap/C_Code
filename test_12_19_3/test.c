#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	输出九九乘法表，输出格式见样例。
输入描述：
	此题没有输入
输出描述：
	输出乘法表，对齐方式见样例输出


int main()
{
    int i, j;//双层循环
    for (i = 1; i < 10; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d*%d=%2d ", j, i, i * j);
        }
        printf("\n");
    }
	return 0;
}
*/


/*
描述
    牛牛开始学习数列啦 ,现在他想知道1-2+3-4...+n的值
输入描述：
    输入一个整数n (1 \le n \le 1001≤n≤100)
输出描述：
    输出一个整数
*/

int main()
{
    int n = 0;
    int sum = 0;
    scanf("%d", &n);
    int i, j;
    for (i = 1; i <= n; i++)
    {
        j = i;
        //如果是偶数，就使i变成-i
        if (j % 2 == 0)
            j = -i;
        sum += j;
    }
    printf("%d\n", sum);
    return 0;
}