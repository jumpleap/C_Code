#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	给定秒数 seconds ，把秒转化成小时、分钟和秒。
	数据范围： 0 < seconds < 100000000\0 < seconds < 100000000

int main()
{
    int second = 0;
    int hour = 0, minute = 0;

    while (scanf("%d", &second) != EOF)
    {
        hour = second / 3600; //得到小时
        minute = second % 3600 / 60; //得到分
        second = second % 60; //秒
        printf("hour=%d minute=%d second=%d\n", hour, minute, second);
    }
	return 0;
}
*/


/*
描述
    小S：终于可以开学啦！好开心啊！
    小Y：你没看新闻吗，开学日期又延后了。
    小S：NOOOOOOOOOOOOOOOO！
    小S知道原计划星期X开学，通知开学时间延期N天，请问开学日期是星期几（星期日用7表示）？
输入描述：
    输入包含两个数字X，N（1≤X≤7, 1≤N≤1000）。
输出描述：
    输出一个数字，表示开学日期是星期几。
*/

int main()
{
    int start = 0, end = 0;
    int sum = 0;
    int fixedDay = 7;
    while (scanf("%d %d", &start, &end) != EOF)
    {
        sum = start + end;
        if (sum % 7)
        {
            printf("%d\n", sum % 7);
        }
        else
        {
            printf("%d\n", fixedDay);
        }
    }
    return 0;
}