#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
����һ���� ���� ��ɵ� �ǿ� ��������ʾ�ķǸ��������ڸ����Ļ����ϼ�һ��
���λ���ִ�����������λ�� ������ÿ��Ԫ��ֻ�洢�������֡�
����Լ���������� 0 ֮�⣬��������������㿪ͷ��
*/

int* plusOne(int* digits, int digitsSize, int* returnSize)
{
	for (int i = digitsSize - 1; i >= 0; i--)
	{
		//�ж�ĩλ�ǲ���9
		if (digits[i] == 9)
			digits[i] = 0;
		else
		{
			//����9ֱ��++
			digits[i]++;
			*returnSize = digitsSize;
			return digits;
		}	
	}
	//ȫ��9���������Ҫ��λ
	int* arr = (int*)malloc(sizeof(int) * (digitsSize + 1));
	//assert(arr);
	memset(arr, 0, sizeof(int) * (digitsSize + 1));
	*returnSize = digitsSize + 1;
	arr[0] = 1;
	return arr;
}

int main()
{
	int arr[10] = { 0 };
	int len = 0;
	int returnLen = 0;
	scanf("%d", &len);
	for (int i = 0; i < len; i++)
		scanf("%d", &arr[i]);
	int* ret = plusOne(arr, len, &returnLen);

	for (int i = 0; i < returnLen; i++)
		printf("%d", ret[i]);
	return 0;
}