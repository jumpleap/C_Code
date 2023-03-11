#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//���⣺��Ϊs����������
//���ӣ�https://leetcode.cn/problems/he-wei-sde-liang-ge-shu-zi-lcof/description/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 //�ⷨ��˫ָ�롪������ָ��
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    //����ռ�
    int* arr = (int*)malloc(sizeof(int) * 2);
    memset(arr, 0, sizeof(arr));//��ʼ��
    *returnSize = 2;

    int left = 0;//��ָ��
    int right = numsSize - 1;//��ָ��

    while (left < right)
    {
        //�жϣ���������ָ���ֵ�Ƿ����target��
        //��������ָ��--��С������ָ��++
        if (nums[left] + nums[right] > target)
        {
            right--;
        }
        else if (nums[left] + nums[right] < target)
        {
            left++;
        }
        else
        {
            arr[0] = nums[left];
            arr[1] = nums[right];
            return arr;//��������
        }
    }
    //û���ҵ������ؿ�
    return NULL;
}

int main()
{
    int nums[] = { 2, 7, 11, 15 };
    int target = 9;
    int len = sizeof(nums) / sizeof(nums[0]);
    int num = 2;

    int* ret = twoSum(nums, len, target, &num);
	return 0;
}