#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	包含数字的数是指有某一位是“9”的数，例如“2019”、“199”等。
	输入描述：
无
	输出描述：一行，一个整数，表示1~2019中共有多少个数包含数字9。


//法一
int main()
{
    int i;
    int count = 0;//计数器
    for (i = 1; i < 2020; i++)
    {
        if (i % 10 == 9)//判断个位
            count++;
        else if (i / 10 % 10 == 9)//判断十位
            count++;
        else if (i / 100 % 10 == 9)//判断百位
            count++;
    }
    printf("%d\n", count);
	return 0;
}
*/


//法二
int main()
{
    int count = 0;
    int i;

    for (i = 1; i < 2020; i++)
    {
        int m = i;
        while (m)
        {
            int x = m % 10;//对每一位数字进行判断
            if (x % 10 == 9)
            {
                count++;
                break;//只要有一位含有9则跳出循环
            }
            m /= 10;
        }
    }
    printf("%d\n", count);
    return 0;
}