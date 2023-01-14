#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//交换两个数组中的内容，数组一样大

void swapArr(int* arr1, int* arr2,int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		//交换数据
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}

int main()
{
	int arr1[3] = { 0 };
	int arr2[3] = { 0 };
	int len = sizeof(arr1) / sizeof(arr1[0]);//数组长度

	//输入数据
	int i = 0;
	for (i = 0; i < len; i++)
		scanf("%d", &arr1[i]);
	for (i = 0; i < len; i++)
		scanf("%d", &arr2[i]);

	//交换两个数组中的内容
	swapArr(arr1, arr2, len);

	//输出
	for (i = 0; i < len; i++)
		printf("%d ", arr1[i]);
	printf("\n");
	for (i = 0; i < len; i++)
		printf("%d ", arr2[i]);
	return 0;
}