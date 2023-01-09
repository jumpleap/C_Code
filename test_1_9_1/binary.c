#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//二分查找的实现

int binaryFind(int arr[], int k, int len)
{
	int left = 0;
	int right = len - 1;

	while (left <= right)
	{
		//int mid = (left + right) / 2;//会溢出
		int mid = left + (right - left) / 2;//取中间值
		//和中间值比较大小
		if (arr[mid] < k)
		{
			left = mid + 1;//调整范围
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;//调整范围
		}
		else
		{
			return mid;//找到了
		}
	}
	return -1;//没有找到的情况
}

int main()
{
	int arr[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int k = 17;//待查找值
	int len = sizeof(arr) / sizeof(arr[0]);//数组长度

	int res = binaryFind(arr, k, len);

	if (res != -1)
	{
		printf("找到了，下标是：%d\n", res);
	}
	else
	{
		printf("没有找到该值\n");
	}
	return 0;
}