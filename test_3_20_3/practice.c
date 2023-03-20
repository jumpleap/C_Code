#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
����һ����������������һ������s���������в�����������ʹ�����ǵĺ�������s��
����ж�����ֵĺ͵���s�����������һ�Լ��ɡ�
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 //�ⷨ��˫ָ�롪������ָ��
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    //����ռ�
    int* arr = (int*)malloc(sizeof(int) * 2);
    memset(arr, 0, sizeof(arr));//��ʼ��

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
            *returnSize = 2;
            return arr;//��������
        }
    }
    //û���ҵ������ؿ�
    return NULL;
}


int main()
{
    int target = 0;
    int returnSize = 0;
    int arr[100] = { 0 };

    int len = 0;
    scanf("%d", &len);
    for (int i = 0; i < len; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &target);

    int* ret = twoSum(arr, len, target, &returnSize);
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", ret[i]);
    }
	return 0;
}