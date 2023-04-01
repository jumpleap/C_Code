#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����һ���������� nums������ǡ��������Ԫ��ֻ����һ�Σ�
��������Ԫ�ؾ��������Ρ� �ҳ�ֻ����һ�ε�������Ԫ�ء�����԰� ����˳�� ���ش𰸡�
�������Ʋ�ʵ������ʱ�临�Ӷȵ��㷨�ҽ�ʹ�ó�������ռ�����������⡣
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 //��һ������ö�ٱȽ�
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


//������λ���㼰��������
int* singleNumber(int* nums, int numsSize, int* returnSize)
{
	int* arr = (int*)calloc(sizeof(int), 2);
	*returnSize = 2;
	int ret = 0;

	//���õ�������������
	for (int i = 0; i < numsSize; i++)
		ret ^= nums[i];

	//�õ������������������λ��1
	//�õ����λ��1
	for (int i = 0; i < 32; i++)
	{
		if ((ret >> i) & 1)
		{
			ret = i;
			break;
		}
	}

	//��������
	for (int i = 0; i < numsSize; i++)
	{
		if ((nums[i] >> ret) & 1)
			arr[0] ^= nums[i];
		else
			arr[1] ^= nums[i];
	}
	return arr;
}