#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
输入一个递增排序的数组和一个数字s，在数组中查找两个数，使得它们的和正好是s。
如果有多对数字的和等于s，则输出任意一对即可。
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 //解法：双指针——左右指针
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    //申请空间
    int* arr = (int*)malloc(sizeof(int) * 2);
    memset(arr, 0, sizeof(arr));//初始化

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
            *returnSize = 2;
            return arr;//返回数组
        }
    }
    //没有找到即返回空
    return NULL;
}


int main()
{
    int target = 0;
    int returnSize = 0;
    int arr[100] = { 0 };

    int len = 0;
    scanf("%d", &len);
    for (int i = 0; i < len; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &target);

    int* ret = twoSum(arr, len, target, &returnSize);
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", ret[i]);
    }
	return 0;
}