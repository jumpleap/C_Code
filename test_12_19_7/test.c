#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	有一个数字魔法，给你一个正整数n，如果n为偶数，就将他变为n/2, 如果n为奇数，就将他变为乘3加1
	不断重复这样的运算，经过有限步之后，一定可以得到1
	牛牛为了验证这个魔法，决定用一个整数来计算几步能变成1
输入描述：
	输入一个正整数n,范围在100以内
输出描述：
	输出一个整数
*/

int main()
{
    int n = 0;
    int count = 0;
    scanf("%d", &n);

    //进行判断，为1则跳出循环
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = n * 3 + 1;
        }
        count++;
    }
    printf("%d\n", count);
	return 0;
}