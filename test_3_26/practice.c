#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

/*
给你一个下标从 0 开始的整数数组 nums ，
判断是否存在 两个 长度为 2 的子数组且它们的 和 相等。
注意，这两个子数组起始位置的下标必须 不相同 。
如果这样的子数组存在，请返回 true，否则返回 false 。
子数组 是一个数组中一段连续非空的元素组成的序列。
*/

bool findSubarrays(int* nums, int numsSize)
{
    //两个子数组的和
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < numsSize - 1; i++)
    {
        sum1 = nums[i] + nums[i + 1];//子数组1的和
        for (int j = i + 1; j < numsSize - 1; j++)
        {
            sum2 = nums[j] + nums[j + 1];//子数组2的和
            //判断是否相等
            if (sum1 == sum2)
                return true;
        }
    }
    return false;
}

int main()
{
    int arr[1000] = { 0 };
    int len = 0;
    scanf("%d", &len);

    for (int i = 0; i < len; i++)
        scanf("%d", &arr[i]);
    
    int ret = findSubarrays(arr, len);
    return 0;
}