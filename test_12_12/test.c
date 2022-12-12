#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	BMI指数（即身体质量指数）是用体重公斤数除以身高米数平方得出的数字，
	是目前国际上常用的衡量人体胖瘦程度以及是否健康的一个标准。
	例如：一个人的身高为1.75米，体重为68千克，他的BMI=68/(1.75^2)=22.2（千克/米^2）。
	当BMI指数为18.5～23.9时属正常，否则表示身体存在健康风险。编程判断人体健康情况。
输入描述：
	一行，输入一个人的体重（千克）和身高（米），中间用一个空格分隔。
输出描述：
	一行，输出身体Normal(正常)或Abnormal(不正常)。


int main()
{
    double kg, meter;
    double res;
    scanf("%lf %lf", &kg, &meter);

    res = kg / (meter * meter);
    if (res >= 18.5 && res <= 23.9)
        printf("Normal\n");
    else
        printf("Abnormal\n");
    return 0;
}
*/


/*
描述
    气象意义上，通常以3～5月为春季(spring)，6～8月为夏季(summer)，9～11月为秋季(autumn)，
    12月～来年2月为冬季(winter)。请根据输入的年份以及月份，输出对应的季节。
输入描述：
    输入的数据格式是固定的YYYYMM的形式，即：年份占4个数位，月份占2个数位。
输出描述：
    输出月份对应的季节（用英文单词表示，全部用小写字母）。


int main()
{
    int reason = 0;
    scanf("%d", &reason);

    reason = reason % 100;

    switch (reason)
    {
        case 3:
        case 4:
        case 5:
            printf("spring\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("summer\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("autumn\n");
            break;
        case 12:
        case 1:
        case 2:
            printf("winter\n");
            break;
        default:
            break;
    }
    return 0;
}
*/


/*
描述
    从键盘任意输入一个字符，编程判断是否是字母（包括大小写）。
输入描述：
    输入包括一个字符。
输出描述：
    输出该字符是字母（YES）或不是（NO）。


int main()
{
    char ch = '0';
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
*/


/*
描述
    判断一个整数n是否是闰年
输入描述：
    输入一个整数n （1≤n≤2018）
输出描述：
    是闰年输出"yes" 否则输出"no"


int main()
{
    int year = 0;
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}
*/


/*
描述
    牛牛从键盘输入整数 x 和左右边界 l 和 r 共三个整数。
    请你判断 x 是否在 l 和 r 之间 （即是否存在l≤x≤r ）
输入描述：
    依次输入 x ，l ，r 三个整数。用空格隔开。
输出描述：
    如果存在l≤x≤r  则输出 true ，否则输出 false
*/

int main()
{
    int x, l, r;
    while (scanf("%d %d %d", &x, &l, &r) != EOF)
    {
        if (x >= l && x <= r)
        {
            printf("true\n");
        }
        else
        {
            printf("false\n");
        }
    }
    return 0;
}