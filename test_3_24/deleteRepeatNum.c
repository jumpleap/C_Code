#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*
给你一个 升序排列 的数组 nums ，请你 原地 删除重复出现的元素，
使每个元素 只出现一次 ，返回删除后数组的新长度。
元素的 相对顺序 应该保持 一致 。
*/

int removeDuplicates(int* nums, int numsSize)
{
	//快慢指针
	int slow = 0;
	int fast = 1;

	while (fast < numsSize)
	{
		//判断不等
		if (nums[slow] != nums[fast])
		{
			//赋值
			nums[++slow] = nums[fast];
		}
		fast++;
	}
	return ++slow;
}