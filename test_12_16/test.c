#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	牛牛商场促销活动：
	满100打9折；
	满500打8折；
	满2000打7折；
	满5000打6折
	牛阿姨算不清楚自己应该付多少钱，请你帮忙算一下
输入描述：
	牛阿姨购买商品打折前的总金额
输出描述：
	参加活动后，牛阿姨购买商品应付金额。（保留小数点后1位）
*/

int main()
{
    double price = 0;
    scanf("%lf", &price);

    if (price >= 100 && price < 500)
    {
        price = price * 0.9;
    }
    else if (price >= 500 && price < 2000)
    {
        price = price * 0.8;
    }
    else if (price >= 2000 && price < 5000)
    {
        price = price * 0.7;
    }
    else if (price >= 5000)
    {
        price = price * 0.6;
    }
    printf("%.1lf\n", price);
	return 0;
}