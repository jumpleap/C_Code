#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
给你一个整数 n ，对于 0 <= i <= n 中的每个 i ，计算其二进制表示中 1 的个数 ，
返回一个长度为 n + 1 的数组 ans 作为答案。
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int getOneCount(int n)
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
    int* arr = (int*)malloc(sizeof(int) * (n + 1));

    for (int i = 0; i <= n; i++)
    {
        arr[i] = getOneCount(i);
    }
    *returnSize = n + 1;
    return arr;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int len = 0;

    int* arr = countBits(n, &len);
}