#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	牛牛正在寄快递，他了解到快递在 1kg 以内的按起步价 20 元计算，
	超出部分按每 kg 1元计算，不足 1kg 部分按 1kg计算。如果加急的话要额外付五元，
	请问牛牛总共要支付多少快递费
输入描述：
	第一行输入一个单精度浮点数 a 和一个字符 b ，a 表示牛牛要寄的快递的重量，
	b表示牛牛是否选择加急，'y' 表示加急 ，'n' 表示不加急。
输出描述：
	输出牛牛总共要支付的快递费用
*/

int main()
{
    double weight = 0;
    int price = 20;
    char ch = '0';
    scanf("%lf %c", &weight, &ch);

    int get = (int)weight;

    if (ch == 'y')
    {
        if (weight <= 1)
            price = price + 5;
        else if (weight > (int)weight)
            price = price + weight + 5;
        else
            price = price + weight - 1 + 5;
    }
    else if (ch == 'n')
    {
        if (weight > (int)weight)
            price = price + weight;
        else
            price = price + weight - 1;
    }
    printf("%d\n", price);
	return 0;
}