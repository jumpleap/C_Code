#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����һ���������� nums���� nums �еĵ�����ż��Ԫ���ƶ��������ǰ�棬�����������Ԫ�ء�
��������������� ��һ���� ��Ϊ�𰸡�
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


//��һ��˫��ѭ��
int* sortArrayByParity(int* nums, int numsSize, int* returnSize)
{
    int* arr = (int*)malloc(sizeof(int) * numsSize);
    memset(arr, 0, sizeof(int) * numsSize);
    int flag = 0;
    *returnSize = numsSize;

    for (int i = 0; i < numsSize; i++)
    {
        //ż����ǰ
        if (nums[i] % 2 == 0)
            arr[flag++] = nums[i];
    }

    for (int i = 0; i < numsSize; i++)
    {
        //�����ں�
        if (nums[i] % 2)
            arr[flag++] = nums[i];
    }
    return arr;
}


//����������ָ��
int* sortArrayByParity(int* nums, int numsSize, int* returnSize)
{
    //����ռ�ͳ�ʼ��
    int* arr = (int*)malloc(sizeof(int) * numsSize);
    memset(arr, 0, sizeof(int) * numsSize);
    *returnSize = numsSize;

    int left = 0;//��ָ��
    int right = numsSize - 1;//��ָ��

    for (int i = 0; i < numsSize; i++)
    {
        //��ż�ж�
        if (nums[i] % 2 == 0)
            arr[left++] = nums[i];
        else
            arr[right--] = nums[i];
    }
    return arr;
}