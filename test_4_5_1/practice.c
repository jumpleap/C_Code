#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����һ�� �� 0 ��ʼ������ nums���±�Ҳ�� 0 ��ʼ����
���㹹��һ�� ͬ������ ������ ans �����У�
����ÿ�� i��0 <= i < nums.length���������� ans[i] = nums[nums[i]] ��
���ع����õ����� ans ��
�� 0 ��ʼ������ nums ��һ���� 0 �� nums.length - 1��0 �� nums.length - 1 Ҳ�������ڣ��Ĳ�ͬ������ɵ����顣
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize)
{
    int* ans = (int*)malloc(sizeof(int) * numsSize);

    for (int i = 0; i < numsSize; i++)
    {
        //��������ͨ������
        ans[i] = nums[nums[i]];
    }
    *returnSize = numsSize;
    return ans;
}