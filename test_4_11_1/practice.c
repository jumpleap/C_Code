#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
题目链接：https://leetcode.cn/problems/left-and-right-sum-differences/description/?orderBy=hot&languageTags=c


问题：
给你一个下标从 0 开始的整数数组 nums ，请你找出一个下标从 0 开始的整数数组 answer ，
其中：
answer.length == nums.length
answer[i] = |leftSum[i] - rightSum[i]|
其中：
leftSum[i] 是数组 nums 中下标 i 左侧元素之和。如果不存在对应的元素，leftSum[i] = 0 。
rightSum[i] 是数组 nums 中下标 i 右侧元素之和。如果不存在对应的元素，rightSum[i] = 0 。
返回数组 answer 。
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 //法一：根据题意解决问题
 //左侧元素之和为当前元素的左边的元素之和（不包含当前元素）
 //右侧元素之和为当前元素的右边的元素之和（不包含当前元素）
int* leftRigthDifference(int* nums, int numsSize, int* returnSize)
{
    int* answer = (int*)malloc(sizeof(int) * numsSize);
    memset(answer, 0, sizeof(int) * numsSize);
    int leftSum = 0;
    int rightSum = 0;

    for (int i = 0; i < numsSize; i++)
    {
        leftSum = 0;//左侧元素的和
        rightSum = 0;//右侧元素的和

        for (int j = 0; j < i; j++)
            leftSum += nums[j];//左侧元素之和
        for (int j = i + 1; j < numsSize; j++)
            rightSum += nums[j];//右侧元素之和

        //取绝对值
        answer[i] = abs(leftSum - rightSum);
    }
    *returnSize = numsSize;
    return answer;
}


//法二
int* leftRigthDifference(int* nums, int numsSize, int* returnSize)
{
    int leftSum[numsSize];//累计左侧元素之和
    int rightSum[numsSize];//累计右侧元素之和

    int* answer = (int*)malloc(sizeof(int) * numsSize);
    //memset(answer,0,sizeof(int)*numsSize);

    leftSum[0] = rightSum[numsSize - 1] = 0;
    for (int i = 1; i < numsSize; i++)
    {
        leftSum[i] = leftSum[i - 1] + nums[i - 1];//左侧元素之和
        rightSum[numsSize - i - 1] = rightSum[numsSize - i] + nums[numsSize - i];//右侧元素之和
    }

    for (int i = 0; i < numsSize; i++)
    {
        //元素差值
        answer[i] = abs(leftSum[i] - rightSum[i]);
    }

    *returnSize = numsSize;
    return answer;
}