#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
给定一个非负整数 n ，
请计算 0 到 n 之间的每个数字的二进制表示中 1 的个数，并输出一个数组。
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

//计算二进制中1的个数
int getOneBit(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int* countBits(int n, int* returnSize)
{
    //开辟空间
    int* arr = (int*)malloc(sizeof(int) * (n + 1));
    *returnSize = n + 1;//返回长度

    for (int i = 0; i < n + 1; i++)
    {
        int count = getOneBit(i);
        arr[i] = count;
    }
    return arr;
}