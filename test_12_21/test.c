#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int num = 0;
    int i;
    int res = 0;
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        int temp = i;
        res = 0;//每次都要重置
        while (temp > 0)//判断值是否大于0
        {
            //回文数正读和反读都一样，所以倒着乘得原数的话即为回文数
            res = res * 10 + temp % 10;
            temp /= 10;
        }

        //判断是否是回文数
        if (i == res)
            printf("%d\n", res);
    }
    return 0;
}