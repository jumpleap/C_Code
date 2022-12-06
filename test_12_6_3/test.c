#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//四舍五入
int main() 
{
    double d = 0.0;
    int a = 0;
    scanf("%lf", &d);
    if (d >= 0) 
    {
        a = d + 0.5;
    }
    else
    {
        a = d - 0.5;
    }
    printf("%d\n", a);
    return 0;
}

//int自带向下取整
//1.正整数+0.5 
//  —> 进1的话(输入数的小数部分大于等于0.5)，不进1的话(小数部分小于0.5)
//2.负整数-0.5
//  --> 进1的话(小数部分小于等于-0.5)，不进1的话(小数部分大于-0.5)