#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
给你一个整数数组 nums 。如果任一值在数组中出现 至少两次 ，
返回 true ；如果数组中每个元素互不相同，返回 false 。
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