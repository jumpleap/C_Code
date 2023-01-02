#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    假设你们社团要竞选社长，有两名候选人分别是A和B，社团每名同学必须并且只能投一票，
    最终得票多的人为社长.
输入描述：
    一行，字符序列，包含A或B，输入以字符0结束。
输出描述：
    一行，一个字符，A或B或E，输出A表示A得票数多，输出B表示B得票数多，输出E表示二人得票数相等。
*/

int main()
{
    char ch = '1';
    int count1 = 0, count2 = 0;//count1为A的计票，count2为B的计票
    int i;
    //输入的ch不能为'0'
    for (i = 0; ch != '0'; i++)
    {
        scanf("%c", &ch);
        //判断字符是不是'A'
        if (ch == 'A')
            count1++;
        //判断字符是不是'B'
        if (ch == 'B')
            count2++;
    }

    //两者的计票比较
    if (count1 > count2)
        printf("A\n");
    else if (count1 < count2)
        printf("B\n");
    else
        printf("E\n");
    return 0;
}