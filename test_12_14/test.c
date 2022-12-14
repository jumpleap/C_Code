#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	KiKi非常喜欢网购，在一家店铺他看中了一件衣服，他了解到，
	如果今天是“双11”（11月11日）则这件衣服打7折，
	“双12” （12月12日）则这件衣服打8折，
	如果有优惠券可以额外减50元（优惠券只能在双11或双12使用），求KiKi最终所花的钱数。
	数据范围：衣服价格满足1≤val≤100000
输入描述：
	一行，四个数字，第一个数表示小明看中的衣服价格，
	第二和第三个整数分别表示当天的月份、当天的日期、第四个整数表示是否有优惠券
	（有优惠券用1表示，无优惠券用0表示）。 注：输入日期保证只有“双11”和“双12”。
输出描述：
	一行，小明实际花的钱数（保留两位小数）。（提示：不要指望商家倒找你钱）
*/

int main()
{
    double price = 0;
    int month, days;
    int discount = 0;
    scanf("%lf %d %d %d", &price, &month, &days, &discount);

    if (discount == 1)
    {
        if (month == 11 && days == 11)
        {
            price = price * 0.7 - 50;
        }
        else if (month == 12 && days == 12)
        {
            price = price * 0.8 - 50;
        }
    }
    else
    {
        if (month == 11 && days == 11)
        {
            price = price * 0.7;
        }
        else if (month == 12 && days == 12)
        {
            price = price * 0.8;
        }
    }

    if (price < 0)
    {
        price = 0;
        printf("%.2lf\n", price);
    }
    else
    {
        printf("%.2lf\n", price);
    }
	return 0;
}