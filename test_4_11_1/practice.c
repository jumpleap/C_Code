#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
��Ŀ���ӣ�https://leetcode.cn/problems/left-and-right-sum-differences/description/?orderBy=hot&languageTags=c


���⣺
����һ���±�� 0 ��ʼ���������� nums �������ҳ�һ���±�� 0 ��ʼ���������� answer ��
���У�
answer.length == nums.length
answer[i] = |leftSum[i] - rightSum[i]|
���У�
leftSum[i] ������ nums ���±� i ���Ԫ��֮�͡���������ڶ�Ӧ��Ԫ�أ�leftSum[i] = 0 ��
rightSum[i] ������ nums ���±� i �Ҳ�Ԫ��֮�͡���������ڶ�Ӧ��Ԫ�أ�rightSum[i] = 0 ��
�������� answer ��
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 //��һ����������������
 //���Ԫ��֮��Ϊ��ǰԪ�ص���ߵ�Ԫ��֮�ͣ���������ǰԪ�أ�
 //�Ҳ�Ԫ��֮��Ϊ��ǰԪ�ص��ұߵ�Ԫ��֮�ͣ���������ǰԪ�أ�
int* leftRigthDifference(int* nums, int numsSize, int* returnSize)
{
    int* answer = (int*)malloc(sizeof(int) * numsSize);
    memset(answer, 0, sizeof(int) * numsSize);
    int leftSum = 0;
    int rightSum = 0;

    for (int i = 0; i < numsSize; i++)
    {
        leftSum = 0;//���Ԫ�صĺ�
        rightSum = 0;//�Ҳ�Ԫ�صĺ�

        for (int j = 0; j < i; j++)
            leftSum += nums[j];//���Ԫ��֮��
        for (int j = i + 1; j < numsSize; j++)
            rightSum += nums[j];//�Ҳ�Ԫ��֮��

        //ȡ����ֵ
        answer[i] = abs(leftSum - rightSum);
    }
    *returnSize = numsSize;
    return answer;
}


//����
int* leftRigthDifference(int* nums, int numsSize, int* returnSize)
{
    int leftSum[numsSize];//�ۼ����Ԫ��֮��
    int rightSum[numsSize];//�ۼ��Ҳ�Ԫ��֮��

    int* answer = (int*)malloc(sizeof(int) * numsSize);
    //memset(answer,0,sizeof(int)*numsSize);

    leftSum[0] = rightSum[numsSize - 1] = 0;
    for (int i = 1; i < numsSize; i++)
    {
        leftSum[i] = leftSum[i - 1] + nums[i - 1];//���Ԫ��֮��
        rightSum[numsSize - i - 1] = rightSum[numsSize - i] + nums[numsSize - i];//�Ҳ�Ԫ��֮��
    }

    for (int i = 0; i < numsSize; i++)
    {
        //Ԫ�ز�ֵ
        answer[i] = abs(leftSum[i] - rightSum[i]);
    }

    *returnSize = numsSize;
    return answer;
}