#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
给你一个整数数组 nums，其中恰好有两个元素只出现一次，
其余所有元素均出现两次。 找出只出现一次的那两个元素。你可以按 任意顺序 返回答案。
你必须设计并实现线性时间复杂度的算法且仅使用常量额外空间来解决此问题。
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 //法一：暴力枚举比较
int* singleNumber(int* nums, int numsSize, int* returnSize)
{
	int* arr = (int*)calloc(sizeof(int),2);
	*returnSize = 2;
	int k = 0;

	for (int i = 0; i < numsSize; i++)
	{
		int count = 0;
		for (int j = 0; j < numsSize; j++)
		{
			if (nums[i] == nums[j])
				count++;
		}
		if (count == 1)
		{
			arr[k++] = nums[i];
		}
	}
	return arr;
}


//法二：位运算及分组讨论
int* singleNumber(int* nums, int numsSize, int* returnSize)
{
	int* arr = (int*)calloc(sizeof(int), 2);
	*returnSize = 2;
	int ret = 0;

	//异或得到单独的两个数
	for (int i = 0; i < numsSize; i++)
		ret ^= nums[i];

	//得到两个数二进制中最低位的1
	//得到最低位的1
	for (int i = 0; i < 32; i++)
	{
		if ((ret >> i) & 1)
		{
			ret = i;
			break;
		}
	}

	//分组讨论
	for (int i = 0; i < numsSize; i++)
	{
		if ((nums[i] >> ret) & 1)
			arr[0] ^= nums[i];
		else
			arr[1] ^= nums[i];
	}
	return arr;
}