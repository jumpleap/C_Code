#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����һ���ǿ��������� nums ������ĳ��Ԫ��ֻ����һ�����⣬
����ÿ��Ԫ�ؾ��������Ρ��ҳ��Ǹ�ֻ������һ�ε�Ԫ�ء�
�������Ʋ�ʵ������ʱ�临�Ӷȵ��㷨����������⣬�Ҹ��㷨ֻʹ�ó�������ռ䡣
*/

//��һ����ϣ��
//int singleNumber(int* nums, int numsSize)
//{
//	//��ֵ��Χ
//	int hash[60000] = { 0 };
//	//hash��ֵ�ĳ���
//	int len = sizeof(hash) / sizeof(hash][0]);
//	int half = len / 2;
//
//	//ӳ��
//	for (int i = 0; i < numsSize; i++)
//		hash[nums[i] + half]++;
//
//	//����ֻ��һ������ֵ
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (hash[nums[i] + half] == 1)
//			return nums[i];
//	}
//	return -1;
//}


//��������� --> ��ͬ�����Ľ����0��0���κ������Ϊ�κ��� 
int singleNumber(int* nums, int numsSize)
{
	int ret = 0;
	for (int i = 0; i < numsSize; i++)
	{
		ret ^= nums[i];
	}
	return ret;
}