#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*
����һ�� �������� ������ nums ������ ԭ�� ɾ���ظ����ֵ�Ԫ�أ�
ʹÿ��Ԫ�� ֻ����һ�� ������ɾ����������³��ȡ�
Ԫ�ص� ���˳�� Ӧ�ñ��� һ�� ��
*/

int removeDuplicates(int* nums, int numsSize)
{
	//����ָ��
	int slow = 0;
	int fast = 1;

	while (fast < numsSize)
	{
		//�жϲ���
		if (nums[slow] != nums[fast])
		{
			//��ֵ
			nums[++slow] = nums[fast];
		}
		fast++;
	}
	return ++slow;
}