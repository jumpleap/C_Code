#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	将一个四位数，反向输出。
输入描述：
	一行，输入一个整数n（1000 <= n <= 9999）。
输出描述：
	针对每组输入，反向输出对应四位数。
*/

int main()
{
    int num = 0;
    scanf("%d", &num);

    //判断数字有效范围
    if (num < 1000 || num > 9999)
        return 0;

    while (num)
    {
        printf("%d", num % 10);//从最后一个数字开始打印，依次向前打印
        num /= 10;
    }
	return 0;
}