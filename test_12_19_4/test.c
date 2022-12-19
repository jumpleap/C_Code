#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	牛牛准备继续进阶，计算更难的数列
	输入一个整数n,计算 1+1/（1-3）+1/（1-3+5）+...+1/(1-3+5-...((-1)^(n-1))*(2n-1))的值
输入描述：
	输入一个整数
输出描述：
	输出一个浮点数，保留3位小数


//解法一：1 - 1/2 + 1/3 - 1/4 + …… 
int main()
{
    int num = 0;
    double sum = 0;//算总和
    int i;
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        //进行判断看看i是不是偶数，偶数则需要给相反数
        if (i % 2 == 0)
            sum -= 1.0 / (i);
        else
            sum += 1.0 / i;
    }
    printf("%.3lf\n", sum);
	return 0;
}
*/


//解法二
int main()
{
    int num = 0;
    int s = 0;
    double sum = 0;//求和
    int i,j = 1;//j标记分母正负
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        //s是分母求和
        s += j * (2 * i - 1);
        sum += 1.0 / s;
        j = -j;
    }
    printf("%.3lf\n", sum);
    return 0;
}