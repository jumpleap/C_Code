#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
给定一个由 整数 组成的 非空 数组所表示的非负整数，在该数的基础上加一。
最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。
你可以假设除了整数 0 之外，这个整数不会以零开头。
*/

int* plusOne(int* digits, int digitsSize, int* returnSize)
{
	for (int i = digitsSize - 1; i >= 0; i--)
	{
		//判断末位是不是9
		if (digits[i] == 9)
			digits[i] = 0;
		else
		{
			//不是9直接++
			digits[i]++;
			*returnSize = digitsSize;
			return digits;
		}	
	}
	//全是9的情况则需要进位
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