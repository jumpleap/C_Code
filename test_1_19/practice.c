#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//循环输入，给定一个r，求圆的周长和面积
#define PI 3.14
int main()
{
	int r = 0;
	double tangle, area;
	while (scanf("%d", &r) != EOF)
	{
		tangle = 2 * PI * r;//周长
		area = PI * r * r;//面积

		printf("%.2lf %.2lf\n", tangle, area);
	}
	return 0;
}