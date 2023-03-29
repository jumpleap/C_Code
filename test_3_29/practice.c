#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
给你一个整数数组 nums，将 nums 中的的所有偶数元素移动到数组的前面，后跟所有奇数元素。
返回满足此条件的 任一数组 作为答案。
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


//法一：双重循环
int* sortArrayByParity(int* nums, int numsSize, int* returnSize)
{
    int* arr = (int*)malloc(sizeof(int) * numsSize);
    memset(arr, 0, sizeof(int) * numsSize);
    int flag = 0;
    *returnSize = numsSize;

    for (int i = 0; i < numsSize; i++)
    {
        //偶数在前
        if (nums[i] % 2 == 0)
            arr[flag++] = nums[i];
    }

    for (int i = 0; i < numsSize; i++)
    {
        //奇数在后
        if (nums[i] % 2)
            arr[flag++] = nums[i];
    }
    return arr;
}


//法二：左右指针
int* sortArrayByParity(int* nums, int numsSize, int* returnSize)
{
    //申请空间和初始化
    int* arr = (int*)malloc(sizeof(int) * numsSize);
    memset(arr, 0, sizeof(int) * numsSize);
    *returnSize = numsSize;

    int left = 0;//左指针
    int right = numsSize - 1;//右指针

    for (int i = 0; i < numsSize; i++)
    {
        //奇偶判断
        if (nums[i] % 2 == 0)
            arr[left++] = nums[i];
        else
            arr[right--] = nums[i];
    }
    return arr;
}