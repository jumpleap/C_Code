#define _CRT_SECURE_NO_WARNINGS

/*
��Ŀ��
����һ���������飬ʵ��һ��������
�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
����ż��λ������ĺ�벿�֡�
*/

//#include <stdio.h>
//
//void change_sequence(int* arr, int len)
//{
//	int tmp[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	//������ǰ
//	for (i = 0; i < len; i++)
//	{
//		if (arr[i] % 2 == 1)
//			tmp[j++] = arr[i];
//	}
//	//ż���ں�
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] % 2 == 0)
//			tmp[j++] = arr[i];
//	}
//
//	//���帳ֵ
//	for (i = 0; i < len; i++)
//		arr[i] = tmp[i];
//}
//
//int main()
//{
//	int arr[10] = { 2,4,6,8,10,1,3,5,7,9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	change_sequence(arr, len);
//
//	for (int i = 0; i < len; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}



//ģ��ʵ�ֿ⺯��strcpy
#include <stdio.h>
#include <assert.h>

char* my_strcpy(char* arr1, const char* arr2)
{
	assert(arr1 && arr2);
	char* ret = arr1;
	while (*arr1++ = *arr2++);
	return ret;
}

int main()
{
	char arr1[30] = { 0 };
	char arr2[] = "this is a beautiful girl";
	char* str = my_strcpy(arr1, arr2);
	printf("%s\n", str);
	return 0;
}