#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���ֲ��ҵ�ʵ��

int binaryFind(int arr[], int k, int len)
{
	int left = 0;
	int right = len - 1;

	while (left <= right)
	{
		//int mid = (left + right) / 2;//�����
		int mid = left + (right - left) / 2;//ȡ�м�ֵ
		//���м�ֵ�Ƚϴ�С
		if (arr[mid] < k)
		{
			left = mid + 1;//������Χ
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;//������Χ
		}
		else
		{
			return mid;//�ҵ���
		}
	}
	return -1;//û���ҵ������
}

int main()
{
	int arr[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int k = 17;//������ֵ
	int len = sizeof(arr) / sizeof(arr[0]);//���鳤��

	int res = binaryFind(arr, k, len);

	if (res != -1)
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", res);
	}
	else
	{
		printf("û���ҵ���ֵ\n");
	}
	return 0;
}