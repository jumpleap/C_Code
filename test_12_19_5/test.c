#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	这次牛牛又换了个数列，他想计算：1+1/2+1/3+…+1/N的值。(保留6位小数)
输入描述：
	输入一个整数，范围在0到1000
输出描述：
	输出一个浮点数


int main()
{
    int num = 0;
    double sum = 0;//总和
    int i;
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        sum += 1.0 / i;
    }
    printf("%.6lf\n", sum);
	return 0;
}
*/


/*
描述
    帮助牛牛计算 1+（1+2）+（1+2+3）+...+(1+2+3+...+n)
输入描述：
    输入一个整数
输出描述：
    输出一个整数
*/

int main()
{
    int num = 0;
    int sum = 0;
    int i, j;
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            sum += j;
        }
    }
    printf("%d\n", sum);

    return 0;
}