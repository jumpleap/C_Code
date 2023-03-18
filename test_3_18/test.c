#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
给你一个数组 nums 和一个值 val，
你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。
元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。
*/

//方法：快慢指针
int removeElement(int* nums, int numsSize, int val)
{
    int len = 0;//慢指针
    //i是快指针
    for (int i = 0; i < numsSize; i++)
    {
        //判断值是不是为val
        if (nums[i] != val)
        {
            nums[len] = nums[i];
            len++;
        }
    }
    return len;
}


int main()
{
    int target = 0;
    int arr[100] = { 0 };
    int len = sizeof(arr) / sizeof(arr[0]);
    scanf("%d", &target);
    for (int i = 0; i < len; i++)
        scanf("%d", &arr[i]);

    int ret = removeElement(arr, len, target);
    printf("%d\n", ret);
    return 0;
}