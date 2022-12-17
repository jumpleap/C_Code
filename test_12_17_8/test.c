#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	KiKi想获得某年某月有多少天，请帮他编程实现。输入年份和月份，计算这一年这个月有多少天。
输入描述：
	多组输入，一行有两个整数，分别表示年份和月份，用空格分隔。
输出描述：
	针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天。
*/

int main()
{
    int year = 0, month = 0, day = 0;
    while (scanf("%d %d", &year, &month) != EOF)
    {
        switch (month)
        {
            //对2月进行特殊判断：看当前的年份是不是闰年
            case 2:
            {
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                {
                    day = 29;//闰年
                }
                else
                {
                    day = 28;//不是闰年
                }
            }
                break;
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                day = 31;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                day = 30;
                break;
            default:
                day = -1;
        }
        printf("%d\n", day);
    }
	return 0;
}