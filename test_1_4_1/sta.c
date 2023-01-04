#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    请统计某个给定范围[L, R]的所有整数中，数字2出现的次数。
    比如给定范围[2, 22]，数字2在数2中出现了1次，在数12中出现1次，在数20中出现1次，
    在数21中出现1次，在数22中出现2次，所以数字2在该范围内一共出现了6次。
输入描述：
    输入共1行，为两个正整数L和R，之间用一个空格隔开。
输出描述：
    输出共1行，表示数字2出现的次数。
*/

int getValue(int left)
{
    int count = 0;//计算出现2的次数
    while (left)
    {
        int x = left % 10;//得到位数
        left /= 10;//下一个位
        if (x == 2)
        {
            count++;
        }
    }
    if (count)
        return count;//返回当前数出现2的总次数
    else
        return 0;
}

int main()
{
    int left = 0;
    int right = 0;
    int count = 0;
    scanf("%d %d", &left, &right);

    for (; left <= right; left++)
    {
        int res = getValue(left);
        if (res)
            count += res;//计算总次数
    }
    printf("%d\n", count);
    return 0;
}