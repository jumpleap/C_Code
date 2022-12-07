#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	输入一个人的出生日期（包括年月日），将该生日中的年、月、日分别输出。
	数据范围：年份满足1990≤y≤2015 ，月份满足1≤m≤12  ，日满足 1≤d≤30
*/
int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	scanf("%4d%2d%2d", &num1, &num2, &num3);
	printf("year=%d\nmonth=%02d\ndate=%02d\n", num1, num2, num3);
	return 0;
}