#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	小乐乐比较懒惰，他现在想睡觉，然后再去学习。他知道现在的时刻，
	以及自己要睡的时长，想设定一个闹钟叫他起床学习，但是他太笨了，
	不知道应该把闹钟设定在哪个时刻，请你帮助他。(只考虑时和分，不考虑日期)
输入描述：
	输入现在的时刻以及要睡的时长k（单位：minute），中间用空格分开。
	输入格式：hour:minute k(如hour或minute的值为1，输入为1，而不是01)
	(0 ≤ hour ≤ 23，0 ≤ minute ≤ 59，1 ≤ k ≤ 109)
输出描述：
	对于每组输入，输出闹钟应该设定的时刻，输出格式为标准时刻表示法（即时和分都是由两位表示，位数不够用前导0补齐）。

int main()
{
    int hour, minute, m;
    printf("请输入小时，分钟，以及睡觉的时间：\n");
    scanf("%d:%d %d", &hour, &minute, &m);

    hour += m / 60;
    //超过了24小时
    if (hour > 23)
        hour %= 24;
    minute += m % 60;
    
    //超过了60分钟
    if (minute > 59)
    {
        minute -= 60;
        hour++;
    }
    
    //%0xd，不足x位的用0补足
    printf("%02d:%02d\n", hour, minute);
	return 0;
}
*/


/*
描述
    牛牛有一个半径为 r 的球，他想知道这个球的体积。
    其中 pi取3.14 ， r 是一个整数
输入描述：
    输入球的半径
输出描述：
    输出球的体积
*/

#define PI 3.14
int main()
{
    double r, get;
    printf("请输入半径：\n");
    scanf("%lf", &r);
    get = 4.0 / 3 * PI * r * r * r;
    printf("球的体积为：%.2lf\n", get);
    return 0;
}