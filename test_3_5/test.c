#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//void inputArr(int* arr, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//}
//
////����ð������
//void bubble_sort(int* arr, int len)
//{
//	int tmp = 0;
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - i - 1; j++)
//		{
//			//��������
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void outputArr(int* arr, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	//��������
//	inputArr(arr, len);
//	//ð������
//	bubble_sort(arr, len);
//	//�������
//	outputArr(arr, len);
//	return 0;
//}

int cmp(const void* x, const void* y)
{
	//��void*ת��Ϊint*
	return (*((int*)x) - *((int*)y));
}

int main()
{
	int arr[10] = { 4,1,24,6,7,92,56,24,78,14 };
	int len = sizeof(arr) / sizeof(arr[0]);

	qsort(arr, len, sizeof(arr[0]), cmp);

	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}