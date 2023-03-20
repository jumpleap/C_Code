#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

/*
编写一个算法来判断一个数 n 是不是快乐数。

「快乐数」 定义为：
对于一个正整数，每一次将该数替换为它每个位置上的数字的平方和。
然后重复这个过程直到这个数变为 1，也可能是 无限循环 但始终变不到 1。
如果这个过程 结果为 1，那么这个数就是快乐数。
如果 n 是 快乐数 就返回 true ；不是，则返回 false 。
*/

bool isHappy(unsigned int n)
{
    int ret = 0;
    //7是快乐数
    while (n > 6)
    {
        ret = 0;
        int tmp = n;//使用临时变量
        while (tmp)
        {
            int x = tmp % 10;
            ret += x * x;//得到每位数的总和
            tmp /= 10;
        }
        n = ret;//重置
    }
    //为1则返回true
    if (n == 1)
        return true;
    return false;
}

int main()
{
    unsigned int num = 0;
    while (scanf("%u", &num) != EOF)
    {
        bool ret = isHappy(num);
        printf("%d\n", ret);
    }
	return 0;
}