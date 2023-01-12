#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    根据输入的日期，计算是这一年的第几天。
    保证年份为4位数且日期合法。
输入描述：
    输入一行，每行空格分割，分别是年，月，日
输出描述：
    输出是这一年的第几天
*/

int is_leap_year(int year)
{
    //判断闰年
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

int main()
{
    int year = 0;
    int month = 0;
    int day = 0;
    int monthDay[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    int sum = 0;
    scanf("%d %d %d", &year, &month, &day);

    int res = is_leap_year(year);
    //判断是不是闰年
    if (res == 1)
        monthDay[1] = 29;
    //计算月份的总天数
    for (int i = 0; i < month - 1; i++)
    {
        sum += monthDay[i];
    }
    sum += day;//最后的总天数
    printf("%d\n", sum);
    return 0;
}