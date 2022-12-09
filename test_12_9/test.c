#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

/*
描述
	根据给出的三角形3条边a, b, c，计算三角形的周长和面积。
	数据范围： 0 < a,b,c \le 100000 \0<a,b,c≤100000
输入描述：
	一行，三角形3条边（能构成三角形），中间用一个空格隔开。
输出描述：
	一行，三角形周长和面积（保留两位小数），中间用一个空格隔开


//海伦公式
//p = (a+b+c)/2; area = sqrt(p*(p-a)*(p-b)*(p-c));
int main()
{
    int a, b, c;
    double circumference, area;
    double p = 0;

    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        circumference = a + b + c;
        //使用海伦公式解决
        p = (a + b + c) / 2.0;
        area = sqrt(p * (p - a) * (p - b) * (p - c));

        printf("circumference=%.2lf area=%.2lf\n", circumference, area);
    }
	return 0;
}
*/


/*
描述
    输入n科成绩（浮点数表示），统计其中的最高分，最低分以及平均分。
    数据范围：1 \le n \le 100 \1≤n≤100  ， 成绩使用百分制且不可能出现负数
输入描述：
    两行，第1行，正整数n（1≤n≤100）
    第2行，n科成绩（范围0.0~100.0），用空格分隔。
输出描述：
    输出一行，三个浮点数，分别表示，最高分，最低分以及平均分（小数点后保留2位），用空格分隔。


int main()
{
    double score = 0;
    int n = 0; //人数
    double max = -1, min = 101, avg = 0;//最大、最小、平均成绩
    int i;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &score);
        if (score > max)
            max = score;
        if (score < min)
            min = score;
        avg += score;
    }

    printf("%.2lf %.2lf %.2lf\n", max, min, avg / n);
    return 0;
}
*/


/*
描述
    问题：一年约有 3.156×107 s，要求输入您的年龄，显示该年龄合多少秒。
    数据范围： 0 < age \le 200 \0<age≤200
输入描述：
    一行，包括一个整数age。
输出描述：
    一行，包含一个整数，输出年龄对应的秒数。

int main()
{
    int age = 0;
    long sum = 0;
    while (scanf("%d", &age) != EOF)
    {
        if (age < 0 || age > 200)
            return 0;
        sum = sum + 3.156 * pow(10, 7) * age;
        printf("%ld\n", sum);
    }
    return 0;
}
*/


/*
描述
    不使用累计乘法的基础上，通过移位运算（<<）实现2的n次方的计算。
    数据范围：0 \le n \le 31 \0≤n≤31
输入描述：
    一行输入整数n（0 <= n < 31）。
输出描述：
    输出对应的2的n次方的结果。


int main()
{
    int num = 0;
    while (scanf("%d", &num) != EOF)
    {
        //printf("%d\n",2 << (num - 1)); //2本身在第二位
        printf("%d\n", 1 << num);
    }
    return 0;
}
*/


/*
描述
    给定秒数 seconds ，把秒转化成小时、分钟和秒。
    数据范围： 0 < seconds < 100000000\0<seconds<100000000
输入描述：
    一行，包括一个整数，即给定的秒数。
输出描述：
    一行，包含三个整数，依次为输入整数对应的小时数、分钟数和秒数（可能为零），中间用一个空格隔开。
*/

int main()
{
    int second = 0;
    int hour, minute;

    while (scanf("%d", &second) != EOF)
    {
        hour = second / 3600; //得到小时
        minute = second % 3600 / 60; //得到分
        second = second % 60; //秒
        printf("hour=%d minute=%d second=%d\n", hour, minute, second);
    }
    return 0;
}