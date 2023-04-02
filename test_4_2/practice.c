#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����һ���Ǹ����� n ��
����� 0 �� n ֮���ÿ�����ֵĶ����Ʊ�ʾ�� 1 �ĸ����������һ�����顣
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

//�����������1�ĸ���
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
    //���ٿռ�
    int* arr = (int*)malloc(sizeof(int) * (n + 1));
    *returnSize = n + 1;//���س���

    for (int i = 0; i < n + 1; i++)
    {
        int count = getOneBit(i);
        arr[i] = count;
    }
    return arr;
}