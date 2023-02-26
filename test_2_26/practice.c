#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//将数组中值逆序
//法一：倒序输出
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


//法二：首尾交换
void reverse(int* arr, int len)
{
	int left = 0;//数组首位置
	int right = len - 1;//数组的最后位置

	while (left < right)
	{
		//交换首尾的位置
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