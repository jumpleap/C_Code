#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input(int arr1[], int arr2[]);
void get(int* arr1, int* arr2);

int main()
{
	int arr1[3] = { 0 };
	int arr2[3] = { 0 };
	int i = 0, j = 0;

	input(arr1, arr2);
	get(arr1, arr2);
	return 0;
}

void input(int arr1[], int arr2[])
{
	int i = 0;
	printf("请输入第一位学生的成绩(语数英)：\n");
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &arr1[i]);
	}

	printf("请输入第二位学生的成绩(语数英)：\n");
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &arr2[i]);
	}
}

void get(int* arr1, int* arr2)
{
	int i = 0;
	int sum[3] = { 0 };

	for (i = 0; i < 3; i++)
	{
		sum[i] = (*(arr1 + i)) + (*(arr2 + i));
	}

	int max = sum[0];
	int min = sum[0];
	for (i = 1; i < 3; i++)
	{
		if (sum[i] > max)
		{
			max = sum[i];
		}
		if (sum[i] < min)
		{
			min = sum[i];
		}
	}

	printf("两位同学的语文、数学、英语总分为：%d %d %d\n", sum[0], sum[1], sum[2]);
	printf("这三科科目总分的最大值为：%d\n", max);
	printf("这三科科目总分的最小值为：%d\n", min);
}