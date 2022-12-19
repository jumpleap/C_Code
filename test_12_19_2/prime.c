#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	KiKi知道了什么是质数（只能被1和他自身整除的数），他现在想知道所有三位整数中，有多少个质数。
输入描述：
	无
输出描述：
	一行，一个整数，表示所有三位整数中，有多少个质数。

//解法一：利用函数
int isPrime(int i)
{
    int j;
    for (j = 2; j < i; j++)
    {
        //不是质数直接返回0
        if (i % j == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int count = 0;
    int i;
    for (i = 100; i < 1000; i++)
    {
        //进行判断，是质数则返回1，不是返回0
        if (isPrime(i))
        {
            count++;//是质数则++
        }
    }
    printf("%d\n", count);
    return 0;
}
*/


//解法二：使用一个哨兵变量
int main()
{
    int count = 0;
    int i,j;
    int temp = 1;//哨兵
    
    for (i = 100; i < 1000; i++)
    {
        temp = 1;//先使哨兵成立
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                temp = 0;//如果不是质数，哨兵不成立
        }

        if (temp)
            count++;
    }
    printf("%d\n", count);
    return 0;
}