#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����һ������ n ������ 0 <= i <= n �е�ÿ�� i ������������Ʊ�ʾ�� 1 �ĸ��� ��
����һ������Ϊ n + 1 ������ ans ��Ϊ�𰸡�
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