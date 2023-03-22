#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
给你一个正整数 num 。如果 num 是一个完全平方数，则返回 true ，否则返回 false 。
完全平方数 是一个可以写成某个整数的平方的整数。
换句话说，它可以写成某个整数和自身的乘积。
不能使用任何内置的库函数，如  sqrt 。
*/

//法一：循环枚举比较
bool isPerfectSquare(int num)
{
    int len = 46341;//防止超过了int范围
    for (int i = 1; i < len; i++)
    {
        if (i * i == num)
        {
            return true;
        }
    }
    return false;
}


//法二：完全平方数规律
bool isPerfectSquare(int num)
{
    if (num < 1)
        return false;
    int i = 1;
    while (num > 0)
    {
        num -= i;
        i += 2;
    }
    return num == 0;
}