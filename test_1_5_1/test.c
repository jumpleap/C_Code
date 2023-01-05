#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

/*
描述
    现在给出一个素数，这个素数满足两点：
    1.只由1-9组成，并且每个数只出现一次，如13,23,1289。
    2.位数从高到低为递减或递增，如2459，87631。
    请你判断一下，这个素数的回文数是否为素数（13的回文数是131,127的回文数是12721）。
输入描述：
    输入只有1行。
    第1行输入一个整数t，保证t为素数。
    数据保证：9<t<109
输出描述：
    输出一行字符串，如果t的回文数仍是素数，则输出“prime”，否则输出"noprime"。
*/

long long int res(long long int num)
{
    int temp = num;
    //如果剩下的值比9小则跳出循环
    while (temp > 9)
    {
        temp /= 10;
        num = num * 10 + temp % 10;//得到回文值
    }
    return num;//返回回文值
}

int isPrime(long long int ret)
{
    int i = 0;
    //进行素数判断
    for (i = 2; i <= sqrt(ret); i++)
    {
        if (ret % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    long long int num = 0;//使用long long int 是防止溢出
    scanf("%lld", &num);

    long long int ret = res(num);
    //判断是不是素数
    if (isPrime(ret))
    {
        printf("prime\n");
    }
    else
    {
        printf("noprime\n");
    }
    return 0;
}