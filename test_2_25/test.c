#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int num = 10;
//	int* p = &num;//*p����ָ�����
//
//	return 0;
//}


//ָ������Ĵ�С
//int main()
//{
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(short*));//4
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(long*));//4
//	printf("%d\n", sizeof(long long*));//4
//	printf("%d\n", sizeof(float*));//4
//	printf("%d\n", sizeof(double*));//4
//	//�ɴ˿�֪��ָ�����
//	//��32λƽ̨�ϣ���4���ֽڵĿռ�
//	//��64λƽ̨�ϣ���8���ֽڵĿռ�
//	return 0;
//}



//ָ��+-����
//int main()
//{
//	int num = 10;
//	char* pa = (char*)&num;
//	int* pb = &num;
//
//	printf("%p\n", &num);
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pb);
//	printf("%p\n", pb+1);
//	
//	//���ۣ�ָ������;�����ָ����һ���Ĳ����Ǽ����ֽ�
//	return 0;
//}


//ָ�������
//int main()
//{
//	int data = 0x11223344;
//	int* p = &data;
//	char* pa = (char*)&data;
//
//	printf("%x\n", *p);//11223344
//	printf("%x\n", *pa);//44
//
//	*p = 0;
//	//*pa = 0;
//	//���ۣ�ָ������;�����ָ��������ܲ��������ֽڵĿռ�
//	return 0;
//}



//Ұָ�������
//1��ָ��δ��ʼ��
//2��ָ��Խ�����
//3��ָ��ָ��Ŀռ��ͷ�

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	//int* p;
//	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa = &arr;
//	int i = 0;
//
//	for (i = 0; i <= 11; i++)
//	{
//		*pa = 0;
//		pa++;
//	}*/
//
//	int* p = test();
//	return 0;
//}



//���Ԥ��Ұָ��
//1.ָ���ʼ��
//2.С��ָ��Խ��
//3.ָ��ָ��Ŀռ��ͷź�ʱ����ΪNULL
//4.���ⷵ�ؾֲ������ĵ�ַ
//5.ָ��ʹ��֮ǰ�����Ч��

//int main()
//{
//	int* p = NULL;
//	int num = 10;
//	int* pa = &num;
//
//	if (pa == NULL)
//	{
//		exit(0);
//	}
//	return 0;
//}



//ָ�����㣺ָ��+-����
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* p;
//	int i = 0;
//	for (p = &arr[0]; p < &arr[5]; p++)
//	{
//		printf("%d ", *p);
//	}
//	return 0;
//}



//ָ��-ָ��
//int main()
//{
//	int data = 10;
//	int num = 11;
//	int* p1 = &data;
//	int* p2 = &num;
//	printf("%d\n", p2 - p1);
//	return 0;
//}


//���ַ������� ���� ʹ��ָ��-ָ�����
//int getArrLen(char* arr)
//{
//	char* start = arr;
//	while (*arr != '\0')
//	{
//		arr++;
//	}
//	return arr - start;
//}
//
//int main()
//{
//	char arr[10] = "abcdef";
//	char* p = arr;
//
//	int len = getArrLen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//����ָ��-ָ���������е�����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p1 = arr;
//	int* p2 = arr;
//	for (; p1 < &arr[10]; p1++)
//	{
//	}
//
//	printf("%d\n", p1 - p2);//10
//	//���ۣ�ָ���ָ���������е����㣬�൱�����±����±������
//	return 0;
//}


//ָ��Ĺ�ϵ����
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* p;
//	for (p = &arr[5]; p > &arr[0];)
//	{
//		*--p = 0;
//	}
//	return 0;
//}


//ָ�������
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));//������ʽ
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//
//	for (i = 0; i < 10; i++,p++)
//	{
//		printf("%p == %p\n", &arr[i], p);
//	}
//	return 0;
//}



//ָ��ָ���ָ�� ���� ����ָ��
//int main()
//{
//	int num = 10;
//	int* p1 = &num; //һ��ָ��
//	//int��ʾָ�����һ�����ͣ�*p��ʾ�����ָ������ĵ�ַ
//	int** p2 = &p1;//����ָ��
//	//���ͣ�int* ��ʾָ���Ǹ�ָ�����ͣ�*p��ʾ�����ָ������ĵ�ַ
//
//	//�鿴��ָ��ָ��ĵ�ַ
//	printf("%p\n", &num);//num�ĵ�ַ
//	printf("%p\n", &p1);//��ʾp1�ĵ�ַ
//	printf("%p\n", &p2);//��ʾp2�ĵ�ַ
//
//	//������
//	printf("%d\n", num);
//	printf("%d\n", *p1);
//	printf("%d\n", **p2);
//	return 0;
//}


//ָ������ ���� �����飺���ָ�������
int main()
{
	int a = 10;
	int b = 30;
	int* arr[10] = { &a, &b };//ָ������
	return 0;
}