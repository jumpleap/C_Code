#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//有一个数字矩阵，矩阵的每行从左到右是递增的，
//矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//int findNum(int(*arr)[5], int k, int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			if (arr[i][j] == k)
//			{
//				return 1;
//			}
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
//	int k = 0;
//	scanf("%d", &k);
//	int row = sizeof(arr) / sizeof(arr[0]);
//	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
//
//	int ret = findNum(arr, k, row, col);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("没有找到\n");
//	}
//	return 0;
//}



//#include <stdio.h>
//
////时间复杂度：O(logN)
//int findNum(int(*arr)[5], int k, int row, int col)
//{
//	int left = 0;
//	int right = col - 1;
//	//二分查找
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//
//		if (arr[row][mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[row][mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return 1;//找到了
//		}
//	}
//	return 0;//找不到
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
//	int k = 0;
//	scanf("%d", &k);
//	int row = sizeof(arr) / sizeof(arr[0]);//行长
//	int col = sizeof(arr[0]) / sizeof(arr[0][0]);//列长
//	int ret = 0;
//
//	//判断要查找的数在那个区间
//	if (k < arr[0][0] || k > arr[row - 1][col - 1])
//		ret = 0;
//	else if (k >= arr[0][0] && k < arr[1][0])
//		ret = findNum(arr, k, 0, col);
//	else if(k >=arr[1][0] && k < arr[2][0])
//		ret = findNum(arr, k, 1, col);
//	else 
//		ret = findNum(arr, k, 2, col);
//
//	if (ret == 0)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了\n");
//	}
//	return 0;
//}



//#include <string.h>
//#include <stdio.h>
//
////实现一个函数，可以左旋字符串中的k个字符。
//void leftMove(char* arr, int k)
//{
//	int len = strlen(arr);
//	for (int i = 0; i < k; i++)
//	{
//		char tmp = arr[0];//将首字母存储起来
//		for (int j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];//将后面 的字符前移
//		}
//		arr[len - 1] = tmp;//设置左旋的字符
//	}
//}
//
//int main()
//{
//	int k = 0;
//	char arr[100] = "";
//	scanf("%s %d", arr, &k);
//
//	leftMove(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}



#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void leftMove(char* arr, int k, int len)
{
	for (int i = 0; i < k; i++)
	{
		char tmp = arr[0];//将首字母存储起来
		for (int j = 0; j < len - 1; j++)
		{
			arr[j] = arr[j + 1];//将后面 的字符前移
		}
		arr[len - 1] = tmp;//设置左旋的字符
	}
}

int main()
{
	char arr[100] = { 0 };
	char str[100] = { 0 };
	gets(arr);
	gets(str);
	int len = strlen(arr);
	int i = 1;

	//先判断是不是直接相等
	if (strcmp(arr, str) == 0)
	{
		printf("str是arr左旋后的字符串\n");
		return 0;
	}

	//让arr每左旋一次就要和str比较
	while(i<len)
	{
		leftMove(arr, 1, len);
		if (strcmp(arr, str)==0)
		{
			printf("str是arr左旋后的字符串\n");
			break;
		}
		i++;
	}

	if (i == len)
	{
		printf("str不是arr左旋后的字符串\n");
	}
	return 0;
}
