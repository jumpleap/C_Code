#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�����ʹ�� - ������������е�ֵ
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	for (i = len-1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	//������±��Ǵ�0��ʼ��
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[0]);//arr[0]������ĵ�һ��Ԫ��
//	return 0;
//}


//�������ڴ����������洢��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	for (i = 0; i < len; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);//&arr[i]ȡ��arr[i]�ĵ�ַ
//	}
//	return 0;
//}


//��ά����Ĵ���
//int main()
//{
//	//int arr[3][3];//������ά����
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };//������ά���鲢��ʼ��
//	return 0;
//}


//��ά����ĳ�ʼ��
//int main()
//{
//	//��ȫ��ʼ����������ʽ
//	int arr1[3][3] = { 1,2,3,4,5,6,7,8,9 };//��ʽ1������{}
//	int arr2[3][3] = { {1,2,3},{4,5,6},{7,8,9} };//��ʽ2����{}
//	//���ͣ�{}�����һά�ĳ��ȣ�arr2�е�һά��3������ʼ������3��{}
//
//	//����ȫ��ʼ����������ʽ
//	//˵����ǰ���1��2��3ռ���˵�һά�ռ䣬4ռ���˵ڶ�ά�ĵ�һ���ڴ�ռ䣬ʣ�µ���Ĭ��ֵ
//	int arr3[3][3] = { 1,2,3,4 };//��ʽ1
//	int arr4[3][3] = { {1,2,3}, {4} };//��ʽ2
//
//	//����ʼ������ά������ȫ����Ĭ��ֵ
//	int arr5[3][3];//ȫ����Ĭ��ֵ��0
//	return 0;
//}



//��ά�����ʹ��
//int main()
//{
//	int arr[3][3];//��������
//	int i, j;
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 3; j++)
//			scanf("%d", &arr[i][j]);
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	//������ά����ĳ���
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9 };
//	int len1 = sizeof(arr) / sizeof(arr[0][0]);//��ά����ĳ���
//	printf("%d\n", len1);//12
//
//	//������ά�����еڶ�ά�ĳ���
//	int len2 = sizeof(arr[0]) / sizeof(arr[0][0]);
//	printf("%d\n", len2);//4
//
//	//������ά�����е�һά�ĳ���
//	//int len3 = len1 / len2;//��һ
//	int len3 = sizeof(arr) / sizeof(arr[0]);//����
//	printf("%d\n", len3);//3
//	return 0;
//}



//��ά�������ڴ��еĴ洢
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int i, j;
//	int len1 = sizeof(arr) / sizeof(arr[0]);//��һά�Ĵ�С
//	int len2 = sizeof(arr[0]) / sizeof(arr[0][0]);//�ڶ�ά�Ĵ�С
//
//	for (i = 0; i < len1; i++)
//	{
//		for (j = 0; j < len2; j++)
//		{
//			//&:ȡ����Ӧֵ�ĵ�ַ
//			printf("arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}



//����Խ��
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//
//	//����������±귶Χ��0-4,������0-5
//	for (i = 0; i <= 5; i++)
//	{}
//	return 0;
//}



//��������������Ϊ��������ô��Ϊ��ַ����
//����������Ԫ����Ϊ������������Ԫ��ǰ���Ƿ��� & ���ϣ�
//�����У���Ϊ��ַ���ã�����û�У���Ϊ��ֵ����

//void PrintNum(int x)
//{
//	x = 11;
//	printf("%d\n", x);
//}
//
//void Print(int* arr, int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//}
//
//void ChangeNum(int* x)
//{
//	*x = 11;
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	PrintNum(arr[0]);//��ֵ������Ԫ����Ϊʵ��
//	Print(arr, len);//��ַ����������Ϊʵ��
//	ChangeNum(&arr[0]);//��ַ������Ԫ�صĵ�ַ��Ϊʵ��
//	Print(arr, len);//��ַ����������Ϊʵ��
//	return 0;
//}


//ð������
//void bubble_sort(int arr[], int len)
//{
//	int i, j;
//	//����
//	for (i = 0; i < len - 1; i++)
//	{
//		//һ�˱ȽϵĴ���
//		for (j = 0; j < len - i - 1; j++)
//		{
//			//�Ƚ�
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 10,5,1,7,3,9,6,4,2,8 };
//	int len = sizeof(arr) / sizeof(arr[0]);//���鳤��
//
//	bubble_sort(arr, len);
//
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//1����������������Ԫ�صĵ�ַ���������⣩
//2��sizeof(������)���������������Ĵ�С��sizeof�ڲ�������������������ʾ��������
//3�� & ��������ȡ��������������ĵ�ַ
int main()
{
	int arr[10] = { 1,2,3,4,5 };

	//sizeof(������)���������������Ĵ�С
	printf("%d\n", sizeof(arr));//40���ֽڵĴ�С
	//��������������Ԫ�صĵ�ַ���������⣩
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);//������Ԫ�صĵ�ַ
	//& ��������ȡ��������������ĵ�ַ
	printf("%p\n", &arr);
	printf("%p\n", &arr + 1);//������40���ֽ�
	return 0;
}