#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��һ�����־��󣬾����ÿ�д������ǵ����ģ�
//������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
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
//		printf("�ҵ���\n");
//	}
//	else
//	{
//		printf("û���ҵ�\n");
//	}
//	return 0;
//}



//#include <stdio.h>
//
////ʱ�临�Ӷȣ�O(logN)
//int findNum(int(*arr)[5], int k, int row, int col)
//{
//	int left = 0;
//	int right = col - 1;
//	//���ֲ���
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
//			return 1;//�ҵ���
//		}
//	}
//	return 0;//�Ҳ���
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
//	int k = 0;
//	scanf("%d", &k);
//	int row = sizeof(arr) / sizeof(arr[0]);//�г�
//	int col = sizeof(arr[0]) / sizeof(arr[0][0]);//�г�
//	int ret = 0;
//
//	//�ж�Ҫ���ҵ������Ǹ�����
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
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ���\n");
//	}
//	return 0;
//}



//#include <string.h>
//#include <stdio.h>
//
////ʵ��һ�����������������ַ����е�k���ַ���
//void leftMove(char* arr, int k)
//{
//	int len = strlen(arr);
//	for (int i = 0; i < k; i++)
//	{
//		char tmp = arr[0];//������ĸ�洢����
//		for (int j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];//������ ���ַ�ǰ��
//		}
//		arr[len - 1] = tmp;//�����������ַ�
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
		char tmp = arr[0];//������ĸ�洢����
		for (int j = 0; j < len - 1; j++)
		{
			arr[j] = arr[j + 1];//������ ���ַ�ǰ��
		}
		arr[len - 1] = tmp;//�����������ַ�
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

	//���ж��ǲ���ֱ�����
	if (strcmp(arr, str) == 0)
	{
		printf("str��arr��������ַ���\n");
		return 0;
	}

	//��arrÿ����һ�ξ�Ҫ��str�Ƚ�
	while(i<len)
	{
		leftMove(arr, 1, len);
		if (strcmp(arr, str)==0)
		{
			printf("str��arr��������ַ���\n");
			break;
		}
		i++;
	}

	if (i == len)
	{
		printf("str����arr��������ַ���\n");
	}
	return 0;
}
