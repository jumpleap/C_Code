#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
给定一个大小为 n 的数组 nums ，返回其中的多数元素。
多数元素是指在数组中出现次数 大于 ⌊ n/2 ⌋ 的元素。
你可以假设数组是非空的，并且给定的数组总是存在多数元素。
*/

//法一：排序取中间值
int cmp(const void* e1, const void* e2)
{
    return *(int*)e1 - *(int*)e2;
}

int majorityElement(int* nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(nums[0]), cmp);
    return nums[numsSize / 2];
}


//法二：投票法
int majorityElement(int* nums, int numsSize)
{
    int count = 0;
    int compare = nums[0];
    for (int i = 0; i < numsSize; i++)
    {
        if (compare == nums[i])
        {
            //相同则计数
            count++;
        }
        else if (count == 0)
        {
            //为0则重置比较数
            compare = nums[i];
            count++;
        }
        else
            count--;//不同则抵消
    }
    return compare;
}