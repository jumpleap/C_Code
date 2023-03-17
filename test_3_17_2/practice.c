#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ����������������
���Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�

��ʾ:
	1 <= nums.length <= 10^4
	-10^4 <= nums[i] <= 10^4
	nums Ϊ ���ظ�Ԫ�� �� ���� ��������
	-10^4 <= target <= 10^4
*/


//˼·1��������Ҳ���
//int searchInsert(int* nums, int numsSize, int target)
//{
//	for (int i = 0; i < numsSize; i++)
//	{
//		//target������ֵ��Ȼ�С������ֵ�����
//		if (nums[i] == target || nums[i] > target)
//			return i;
//	}
//	//target�������е�����ֵ����
//	return numsSize;
//}


//˼·2�����ֲ���
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
	//left == right������ѭ��
	if (nums[left] < target)
		return left + 1;//��left���ұ߲���
	else
		return left;
}