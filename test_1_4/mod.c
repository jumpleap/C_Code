#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    给你一个数，让他进行巴啦啦能量，沙鲁沙鲁，小魔仙大变身，如果进行变身的数不满足条件的话，
    就继续让他变身。。。直到满足条件为止。
    巴啦啦能量，沙鲁沙鲁，小魔仙大变身：对于一个数，把他所有位上的数字进行加和，得到新的数。
    如果这个数字是个位数的话，那么他就满足条件。
输入描述：
    给一个整数数字n(1<=n<=1e9)。
输出描述：
    输出由n经过操作满足条件的数
*/

int getRes(int n)
{
    int sum = 0;
    while (n)
    {
        int x = n % 10;//得到每个位
        sum += x;//相加
        n = n / 10;//得到下一个位
        //判断n是不是0和sum的结果是不是大于10
        if (n == 0 && sum >= 10)
        {
            //进行重置
            n = sum;
            sum = 0;
        }
    }
    return sum;//返回结果
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    int res = getRes(n);
    printf("%d\n", res);
    return 0;
}