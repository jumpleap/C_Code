#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

/*
描述
    输入数字 n，按顺序打印出从 1 到最大的 n 位十进制数。
    比如输入 3，则打印出 1、2、3 一直到最大的 3 位数 999。
    1. 用返回一个整数列表来代替打印
    2. n 为正整数，0 < n <= 5
*/

int* printNumbers(int n, int* returnSize)
{
    int i = 1;
    int len = pow(10, n);//数组长度
    //给数组arr申请空间
    int* arr = (int*)malloc((len - 1) * sizeof(int));
    for (i = 0; i < len; i++)
    {
        *(arr + i) = i + 1;//赋值
    }
    *returnSize = len - 1;//返回数组总元素个数
    return arr;//返回数组
}

int main()
{
	int n = 0;
    int count = 0;//计算元素个数
	scanf("%d", &n);
    //使用指针接收返回值
    int* str = printNumbers(n, &count);

    //输出
    int i = 0;
    for (i = 0; i < count; i++)
        printf("%d ", str[i]);
	return 0;
}