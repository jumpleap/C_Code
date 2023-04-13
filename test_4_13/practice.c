#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

/*
��Ŀ����: https://leetcode.cn/problems/difference-between-element-sum-and-digit-sum-of-an-array/description/

��Ŀ��Ϣ��
����һ������������ nums ��
Ԫ�غ� �� nums �е�����Ԫ�������͡�
���ֺ� �� nums ��ÿһ��Ԫ�ص�ÿһ��λ���ظ���λ������ͣ������͡�
���� Ԫ�غ� �� ���ֺ� �ľ��Բ
ע�⣺�������� x �� y �ľ��Բ��Ϊ |x - y| ��
*/

int differenceOfSum(int* nums, int numsSize)
{
    int elementSum = 0;
    int digitSum = 0;

    for (int i = 0; i < numsSize; i++)
    {
        elementSum += nums[i];//Ԫ�غ�
        while (nums[i] != 0)
        {
            //���ÿ�����ֵ����ֺ�
            digitSum += nums[i] % 10;
            nums[i] /= 10;
        }
    }
    return abs(elementSum - digitSum);//���ؾ���ֵ
}

