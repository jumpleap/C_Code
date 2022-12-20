#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，比如1461 可以拆分成（1和461）,
	（14和61）,（146和1),如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
	例如：655 = 6 * 55 + 65 * 5;1461 = 1*461 + 14*61 + 146*1
	求出 5位数中的所有 Lily Number。
输入描述：
	无
输出描述：
	一行，5位数中的所有 Lily Number，每两个数之间间隔一个空格。
*/

int main()
{
    int a, a1, b, b1, c, c1, d, d1;
    int i;
    for (i = 10000; i < 100000; i++)
    {
        a = i / 10000;//万
        a1 = i % 10000;//取模后的值
        b = i / 1000;
        b1 = i % 1000;
        c = i / 100;
        c1 = i % 100;
        d = i / 10;
        d1 = i % 10;

        if ((a * a1) + (b * b1) + (c * c1) + (d * d1) == i)
            printf("%d ", i);
    }
	return 0;
}