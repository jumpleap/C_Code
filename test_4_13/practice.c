#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

/*
题目链接: https://leetcode.cn/problems/difference-between-element-sum-and-digit-sum-of-an-array/description/

题目信息：
给你一个正整数数组 nums 。
元素和 是 nums 中的所有元素相加求和。
数字和 是 nums 中每一个元素的每一数位（重复数位需多次求和）相加求和。
返回 元素和 与 数字和 的绝对差。
注意：两个整数 x 和 y 的绝对差定义为 |x - y| 。
*/

int differenceOfSum(int* nums, int numsSize)
{
    int elementSum = 0;
    int digitSum = 0;

    for (int i = 0; i < numsSize; i++)
    {
        elementSum += nums[i];//元素和
        while (nums[i] != 0)
        {
            //求出每个数字的数字和
            digitSum += nums[i] % 10;
            nums[i] /= 10;
        }
    }
    return abs(elementSum - digitSum);//返回绝对值
}

