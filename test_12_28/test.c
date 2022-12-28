#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

/*
问题
	循环输入，输入为一组，为两个点的坐标值，请计算两点间的距离
输入
	多组输入
输出
	多组输出,保留两位小数


double get_distance(double x1, double y1, double x2, double y2)
{
	//返回两点间的距离
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main()
{
	double x1, y1, x2, y2;
	while (scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2) != EOF)
	{
		getchar();//接受换行符
		printf("%.2lf\n", get_distance(x1, y1, x2, y2));//打印输出
	}
	return 0;
}
*/


/*
问题
	求三个数中的最大值
输入
	多组输入，每组为三个整数
输出
	每组输出最大的数
*/

//解法一
int getMax(int x, int y)
{
	//返回最大值
	return x > y ? x : y;
}

int main()
{
	int a, b, c;
	while (scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		getchar();//接受换行符
		//直接打印输出
		printf("%d\n", getMax(a, getMax(b,c)));
	}
	return 0;
}