#define _CRT_SECURE_NO_WARNINGS

/*
题目：
输入一个整数数组，实现一个函数，
来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
所有偶数位于数组的后半部分。
*/

//#include <stdio.h>
//
//void change_sequence(int* arr, int len)
//{
//	int tmp[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	//奇数在前
//	for (i = 0; i < len; i++)
//	{
//		if (arr[i] % 2 == 1)
//			tmp[j++] = arr[i];
//	}
//	//偶数在后
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] % 2 == 0)
//			tmp[j++] = arr[i];
//	}
//
//	//整体赋值
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



//模拟实现库函数strcpy
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