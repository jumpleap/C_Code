#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    小乐乐学会了自定义函数，BoBo老师给他出了个问题，根据以下公式计算m的值。
    计算公式：max3(a+b,b,c) / (max3(a,b+c,c) + max3(a,b,b+c));
    其中 max3函数为计算三个数的最大值，如： max3(1, 2, 3) 返回结果为3。
输入描述：
    一行，输入三个整数，用空格隔开，分别表示a, b, c。
输出描述：
    一行，一个浮点数，小数点保留2位，为计算后m的值。


//求三个数中的最大值
int getMax(int a, int b, int c)
{
    return (a > b) ? (a > c ? a : c) : (b > c ? b : c);
}

int main()
{
    int a, b, c;
    double m = 0.0;
    int res1, res2, res3;
    scanf("%d %d %d", &a, &b, &c);//输入

    //求3个最大值
    res1 = getMax(a + b, b, c);
    res2 = getMax(a, b + c, c);
    res3 = getMax(a, b, b + c);

    //求结果，乘上1.0是转化为浮点数
    m = (res1 * 1.0) / (res2 + res3);
    printf("%.2lf\n", m);
    return 0;
}
*/


/*
描述
    求出[a,b]区间内有多少个数数位之和为5的倍数
输入描述：
    输入一行包含两个整数a,b (1<= a<= b<=1000000)
输出描述：
    输出一个整数
*/

//得出每个位的数的和并返回
int judge(int x)
{
    int res = 0;
    while (x != 0)
    {
        int num = x % 10;//求每个位
        res += num;//求位数总和
        x /= 10;//降位
    }
    return res;//返回位数之和
}

int main()
{
    int a, b;
    int count = 0;
    scanf("%d %d", &a, &b);

    for (; a <= b; a++)
    {
        int ret = judge(a);
        //判断值是不是5的倍数
        if (ret % 5 == 0)
            count++;//进行计数
    }
    printf("%d\n", count);
    return 0;
}