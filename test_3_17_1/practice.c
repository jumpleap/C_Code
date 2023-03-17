#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
给你一个非空整数数组 nums ，除了某个元素只出现一次以外，
其余每个元素均出现两次。找出那个只出现了一次的元素。
你必须设计并实现线性时间复杂度的算法来解决此问题，且该算法只使用常量额外空间。
*/

//法一：哈希表
//int singleNumber(int* nums, int numsSize)
//{
//	//数值范围
//	int hash[60000] = { 0 };
//	//hash数值的长度
//	int len = sizeof(hash) / sizeof(hash][0]);
//	int half = len / 2;
//
//	//映射
//	for (int i = 0; i < numsSize; i++)
//		hash[nums[i] + half]++;
//
//	//查找只有一个数的值
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (hash[nums[i] + half] == 1)
//			return nums[i];
//	}
//	return -1;
//}


//法二：异或 --> 相同数异或的结果是0，0和任何数异或为任何数 
int singleNumber(int* nums, int numsSize)
{
	int ret = 0;
	for (int i = 0; i < numsSize; i++)
	{
		ret ^= nums[i];
	}
	return ret;
}