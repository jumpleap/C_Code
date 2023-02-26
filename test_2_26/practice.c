#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��������ֵ����
//��һ���������
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//	for (i = len - 1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//��������β����
void reverse(int* arr, int len)
{
	int left = 0;//������λ��
	int right = len - 1;//��������λ��

	while (left < right)
	{
		//������β��λ��
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;

		left++;
		right--;
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(arr[0]);

	reverse(arr, len);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}