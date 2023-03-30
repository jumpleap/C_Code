#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����һ���������� nums �������һֵ�������г��� �������� ��
���� true �����������ÿ��Ԫ�ػ�����ͬ������ false ��
*/

int cmp(const void* e1, const void* e2)
{
    return *(int*)e1 - *(int*)e2;
}

bool containsDuplicate(int* nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(nums[0]), cmp);

    for (int i = 0; i < numsSize - 1; i++)
    {
        if (nums[i] == nums[i + 1])
            return true;
    }
    return false;
}