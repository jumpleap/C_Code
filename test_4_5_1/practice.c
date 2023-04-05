#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
给你一个 从 0 开始的排列 nums（下标也从 0 开始）。
请你构建一个 同样长度 的数组 ans ，其中，
对于每个 i（0 <= i < nums.length），都满足 ans[i] = nums[nums[i]] 。
返回构建好的数组 ans 。
从 0 开始的排列 nums 是一个由 0 到 nums.length - 1（0 和 nums.length - 1 也包含在内）的不同整数组成的数组。
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize)
{
    int* ans = (int*)malloc(sizeof(int) * numsSize);

    for (int i = 0; i < numsSize; i++)
    {
        //按照题意通过就行
        ans[i] = nums[nums[i]];
    }
    *returnSize = numsSize;
    return ans;
}