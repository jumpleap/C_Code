#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。
如果目标值不存在于数组中，返回它将会被按顺序插入的位置。

提示:
	1 <= nums.length <= 10^4
	-10^4 <= nums[i] <= 10^4
	nums 为 无重复元素 的 升序 排列数组
	-10^4 <= target <= 10^4
*/


//思路1：排序查找插入
//int searchInsert(int* nums, int numsSize, int target)
//{
//	for (int i = 0; i < numsSize; i++)
//	{
//		//target和数组值相等或小于数组值的情况
//		if (nums[i] == target || nums[i] > target)
//			return i;
//	}
//	//target比数组中的所有值都大
//	return numsSize;
//}


//思路2：二分查找
int searchInsert(int* nums, int numsSize, int target)
{
	int left = 0;
	int right = numsSize - 1;
	
	while (left < right)
	{
		int mid = left + (right - left) / 2;
		
		if (nums[mid] < target)
			left = mid + 1;
		else if (nums[mid] > target)
			right = mid - 1;
		else
			return mid;
	}
	//left == right后跳出循环
	if (nums[left] < target)
		return left + 1;//在left的右边插入
	else
		return left;
}