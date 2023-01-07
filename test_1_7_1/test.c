#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

/*
描述
    牛牛刚刚学了素数的定义：素数值指在大于1的自然数中，除了1和它本身以外不再有其他因数的自然数
    牛牛想知道输入的 n 个数分别是不是素数
输入描述：
    第一行输入一个正整数 n ，表示后续要输入的数的数量。
    后续 n 行每行输入一个正整数，表示需要判断的数。
输出描述：
    输入的第 2 到第 n+1 行每行输出一次，如果输入的是素数则输出 true ，否则输出 false
*/

int isPrime(int data)
{
    //判断是不是素数
    for (int i = 2; i <= sqrt(data); i++)
    {
        if (data % i == 0)
            return 0;//不是素数直接返回0
    }
    return 1;//是素数返回1
}

int main()
{
    int n = 0;
    int data = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data);
        //判断素数输出true还是false
        if (isPrime(data) == 1)
            printf("true\n");
        else
            printf("false\n");
    }
    return 0;
}