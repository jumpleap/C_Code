#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//问题：求1+2+3+……+n的结果
//问题链接：https://leetcode.cn/problems/qiu-12n-lcof/


// int getSum(int n)
// {
//     if(n <= 1)
//         return 1;
//     return n + getSum(n-1);
// }

int sumNums(int n) {
    //法一：数学公式
    // int sum = 0;
    // if(n % 2 == 0)
    // {
    //     //偶数的情况
    //     sum = n / 2 * (n+1);
    // }
    // else
    // {
    //     //奇数的情况
    //     sum = (n+1) / 2 * n;
    // }
    // return sum;

    //法二：循环遍历
    // int sum = 0;
    // for(int i=1; i<=n; i++)
    //     sum += i;
    // return sum;

    //法三：长长整型
    // long long sum = 0;
    // sum = n * (n+1) / 2;
    // return sum;

    //法四：递归
    // int sum = getSum(n);
    // return sum;

    //法五：库函数联合位运算符解决
    //return ((int)pow(n,2) + n) >> 1;

    //法六：递归和短路运算符求解 --> 经典求解
    n && (n += sumNums(n - 1));
    return n;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int sum = sumNums(n);
    printf("%d\n", sum);
    return 0;
}