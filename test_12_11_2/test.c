#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

/*
描述
	问题：KiKi今年5岁了，已经能够认识100以内的非负整数，并且并且能够进行 100 以内
	的非负整数的加法计算。不过，BoBo老师发现KiKi在进行大于等于100的正整数的计算时，
	规则如下：
		1.只保留该数的最后两位，例如：对KiKi来说1234等价于34；

		2.如果计算结果大于等于 100， 那么KIKI也仅保留计算结果的最后两位，
		如果此两位中十位为0，则只保留个位。	例如：45+80 = 25
要求给定非负整数 a和 b，模拟KiKi的运算规则计算出 a+b 的值。
输入描述：
	一行，输入两个非负整数a和b，用一个空格分隔。（0 <= a,b<= 231-1）。

int main()
{
	int a, b, sum;
	scanf("%d %d", &a, &b);

	sum = a + b;
	if (sum > 99)
		sum %= 100;
	printf("%d\n", sum);
	return 0;
}
*/


/*
描述
	牛牛有一个线段放在二维坐标系中，已知线段两个点的坐标 (x1,y1)，(x2,y2) 。
	牛牛想知道这个线段的长度的平方
	因为本题求距离的平方，因此只需计算 (x1-x2)^2+(y1-y2)^2
输入描述：
	第一行输入 x1 和 y1，用空格隔开。
	第二行输入 x2 和 y2，用空格隔开。
	其中 x1 ， y1 ，x2 ，y2 都是整数
输出描述：
	输出线段的长度的平方
*/

int main() 
{
	int x1, y1, x2, y2;
	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);

	int res = pow(x1 - x2, 2) + pow(y1 - y2, 2);
	printf("%d\n", res);
	return 0;
}