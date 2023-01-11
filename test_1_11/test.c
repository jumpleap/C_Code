#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    小乐乐上课需要走n阶台阶，因为他腿比较长，所以每次可以选择走一阶或者走两阶，
    那么他一共有多少种走法？
输入描述：
    输入包含一个整数n (1 ≤ n ≤ 30)
输出描述：
    输出一个整数，即小乐乐可以走的方法数。
*/

//int getCount(int n)
//{
//    //判断n的台阶是否小于2
//    if (n < 2)
//        return 1;
//    //计算走一阶和走两阶的方法
//    return getCount(n - 1) + getCount(n - 2);
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    
//    int count = getCount(n);
//    printf("%d\n", count);
//    return 0;
//}



/*
描述
    编写一个函数 long long factorial(int n)，用于计算 n 的阶乘。（要求使用递归实现）
输入描述：
    键盘输入任意一个整数 n ，范围为 1 - 20
输出描述：
    输出 n 的阶乘
*/

long long factorial(int n) 
{
    //判断
    if (n == 1)
        return 1;
    //递归乘
    return n * factorial(n - 1);
}
int main() {

    int n = 0;
    scanf("%d", &n);
    printf("%lld\n", factorial(n));
    return 0;
}