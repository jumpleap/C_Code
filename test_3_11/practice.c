#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//问题：和为s的两个数字
//链接：https://leetcode.cn/problems/he-wei-sde-liang-ge-shu-zi-lcof/description/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 //解法：双指针——左右指针
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    //申请空间
    int* arr = (int*)malloc(sizeof(int) * 2);
    memset(arr, 0, sizeof(arr));//初始化
    *returnSize = 2;

    int left = 0;//左指针
    int right = numsSize - 1;//右指针

    while (left < right)
    {
        //判断：看看左右指针的值是否等于target；
        //大于则右指针--，小于则左指针++
        if (nums[left] + nums[right] > target)
        {
            right--;
        }
        else if (nums[left] + nums[right] < target)
        {
            left++;
        }
        else
        {
            arr[0] = nums[left];
            arr[1] = nums[right];
            return arr;//返回数组
        }
    }
    //没有找到即返回空
    return NULL;
}

int main()
{
    int nums[] = { 2, 7, 11, 15 };
    int target = 9;
    int len = sizeof(nums) / sizeof(nums[0]);
    int num = 2;

    int* ret = twoSum(nums, len, target, &num);
	return 0;
}