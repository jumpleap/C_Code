#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	牛牛有一个学习计划，他计划在 y 年 m 月 d 日开始学习，但在之前他是绝不会开始学习的，
	但是他一旦开始学习就不会停下来，请你判断 y1 年 m1 月 d1 日牛牛应该学习吗。
输入描述：
	第一行输入 y ，m ，d ，即牛牛计划开始学习的时间。
	第二行输入 y1，m1，d1，即询问的时间。
输出描述：
	请你判断牛牛是否开始学习。如果是则输出 yes ，否则输出 no
*/

int main()
{
    int y = 0, m = 0, d = 0, y1 = 0, m1 = 0, d1 = 0;
    scanf("%d %d %d", &y, &m, &d);
    scanf("%d %d %d", &y1, &m1, &d1);

    if ((y1 < y) || (y1 == y && d1 < d) || (y1 == y && m1 == m && d1 < d))
    {
        printf("no\n");
    }
    else
    {
        printf("yes\n");
    }
	return 0;
}