#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	牛牛刚接触等差数列， 他知道等差数列是每项与前一项的差值都相等的数列，
	已知第一项 a 和第二项 b 的值，他想知道第三项是多少。
输入描述：
	输入等差数列的第一、二项 a ， b
输出描述：
	输出等差数列第三项的值


int main()
{
	int a = 0, b = 0;
	printf("请输入两个整数:\n");
	scanf("%d %d", &a, &b);
	printf("%d\n", b - a + b);
	return 0;
}
*/


/*
描述
	牛牛口渴了，要喝10升水才能解渴，但现在
	只有一个深 h 厘米，底面半径是 r 厘米的水杯，牛牛最少要喝多少杯水才能解渴。
	水杯的体积公式是 pi * h * r^2，其中π取 3.14 ，h和 r是整数。
输入描述：
	输入杯子的高度 h ，底面半径 r 。
输出描述：
	输出牛牛最少要喝多少杯水
*/

#define PI 3.14
int main()
{
	double h, r, volume;
	printf("请输入水杯的高和底面半径:\n");
	scanf("%lf %lf", &h, &r);

	volume = PI * h * r * r / 1000.0;
	printf("要喝%d杯水才能解渴\n", (int)(10 / volume + 1));
	return 0;
}