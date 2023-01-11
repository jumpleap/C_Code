#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    牛牛最近学会了一些简单的数学运算，请你帮他模拟一下这个运算。 （即 1+2+3....+n-1+n)
输入描述：
    输入仅一个正整数 n
输出描述：
    请你计算 
*/

//int getSum(int n)
//{
//    //最后的值为1才结束
//    if (n == 1)
//        return 1;
//    //递归相加
//    return n + getSum(n - 1);
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d\n", getSum(n));
//    return 0;
//}


/*
描述
    牛牛最近了解到了著名的阿克曼(Ackmann)函数，阿克曼函数是一个增长极其迅速的函数，
    另外一个著名的数据结构--并查集的最优复杂度便可以达到阿克曼函数的反函数级别。
    请你计算阿克曼函数的几个整数定义域的结果。
输入描述：
    第一行输入两个正整数，分别是 n ，m 。（保证这个定义域是可计算的）
输出描述：
    输出 Ackmann（n,m)
*/

long long Ackmann(long long m, long long n)
{
    //递归解决
    if (m == 0)
        return n + 1;
    else if (m > 0 && n == 0)
        return Ackmann(m - 1, 1);
    else if (m > 0 && n > 0)
        return Ackmann(m - 1, Ackmann(m, n - 1));
    return 0;
}

int main()
{
    long long n = 0;
    long long m = 0;
    scanf("%lld %lld", &n, &m);
    printf("%lld\n", Ackmann(m, n));
    return 0;
}