#define _CRT_SECURE_NO_WARNINGS

//ָ����������ַ
//#include <stdio.h>
//
//int main()
//{
//	int num = 10;
//	int* p = &num;//ȡ����num�ĵ�ַ������p
//
//	//��ӡ�鿴��ַ
//	printf("&num = %p\n", &num);
//	printf("p = %p\n", p);
//	return 0;
//}



//ָ��Ĵ�С
//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	char c = 'a';
//	int num = 10;
//	float f = 1.342;
//	double data = 13.14;
//
//	//һ��������������͵�ָ������洢�������ͱ����ĵ�ַ
//	char* ch = &c;
//	int* p = &num;
//	float* p1 = &f;
//	double* p2 = &data;
//	return 0;
//}



//ָ������;�����ָ����ǰ��һ���������һ�����ֽھ����ж��
//#include <stdio.h>
//
//int main()
//{
//	char c = 'c';
//	int num = 10;
//
//	char* p1 = &c;
//	int* p2 = &num;
//
//	printf("%p\n", p1);
//	printf("%p\n", p1+1);
//	printf("%p\n", p2);
//	printf("%p\n", p2+1);
//	return 0;
//}



//ָ������;�����ָ���ڽ����ò�����ʱ���ܽ��в��������ֽ�
//#include <stdio.h>
//
//int main()
//{
//	int num = 0x44332211;
//	
//	char* p1 = &num;
//	int* p2 = &num;
//	printf("%d\n", *p1);
//	printf("%d\n", *p2);
//
//	*p1 = 0;
//	*p2 = 0;
//	return 0;
//}




//Ұָ��
//ָ��δ��ʼ��
//#include <stdio.h>
//
//int main()
//{
//	int* p;
//	printf("%p\n", p);
//	return 0;
//}




//ָ��Խ�����
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//
//	for (int i = 0; i <= 11; i++)
//	{
//		//p�ķ��ʷ�Χ������������±귶Χ��p����Ұָ��
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}



//ָ��ָ��Ŀռ�Ϊ�ͷ�
//#include <stdio.h>
//int test(int num)
//{
//	int* p = &num;
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int num = 10;
//	int *p = test(num);
//	return 0;
//}



//����Ұָ��
//#include <stdio.h>
//void test(int* p)
//{
//	//���ָ�����Ч��
//	if(p == NULL){}
//}
//
//int main()
//{
//	int* p = NULL;//��֪��ָ��ָ�������ʱ����ΪNULL
//	test(p);
//	return 0;
//}



//ָ������
//ָ��+-����
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p;
//	for (p = arr; p < &arr[10]; p++)
//	{
//		printf("%d ", *p);
//	}
//	return 0;
//}



//����ָ��ָ�����ͬһ��ռ���������һ�µģ���������õ���Ԫ�ظ���
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p1 = arr;
//	int* p2 = &arr[10];
//
//	//ָ��-ָ��
//	printf("%d\n", p2 - p1);//10
//	return 0;
//}



//ָ��Ĺ�ϵ����
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p;
//	for (p = &arr[10]; p > &arr[0];)
//	{
//		*--p = 0;
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p;
//	for (p = &arr[9]; p >= &arr[0]; p--)
//	{
//		*p = 0;
//	}
//	return 0;
//}




//��������������Ԫ�صĵ�ַ��&��������ȡ����������ĵ�ַ
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//
//	printf("arr = %p\n", arr);
//	printf("arr + 1 = %p\n", arr + 1);
//	printf("&arr = %p\n", &arr);
//	printf("&arr + 1 = %p\n", &arr + 1);
//	return 0;
//}




//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%p == %p\n", &arr[i], p+i);
//	}
//	return 0;
//}




//����ָ��
//#include <stdio.h>
//
//int main()
//{
//	int num = 10;
//	int* p = &num;//*p��ʾ����һ��ָ�룬ָ���������int
//	int** pp = &p;//*pp��ʾ����һ��ָ�룬ָ���������int*
//	
//	printf("%d\n", num);//10
//	printf("%d\n", *p);//10
//	printf("%d\n", **pp);//10
//	return 0;
//}



//1���ַ�ָ��ָ��һ���ַ�����
//2���ַ�ָ��ָ��һ�������ַ���

//#include <stdio.h>
//
//int main()
//{
//	char ch = 'a';
//	//�ַ�ָ��ָ��һ���ַ�����
//	char* p1 = &ch;
//	printf("%c\n", *p1);
//
//	//�ַ�ָ��ָ��һ�������ַ���
//	char* p2 = "abcdef";
//	printf("%c\n", *p2);
//	printf("%s\n", p2);
//	return 0;
//}



//ָ������
//#include <stdio.h>
//
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7 };
//
//	int* arr[3] = { arr1,arr2,arr3 };//�洢�������������Ԫ�ص�ַ
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", *(arr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}



//����ָ��
//#include <stdio.h>
//
//int main()
//{
//	char str1[] = "abcdef";
//	char str2[] = "abcdef";
//	const char* arr1 = "abcdef";
//	const char* arr2 = "abcdef";
//
//	if (str1 == str2)
//	{
//		printf("str1 and str2 are same\n");
//	}
//	else
//	{
//		printf("str1 and str2 are not same\n");
//	}
//
//	if (arr1 == arr2)
//	{
//		printf("arr1 and arr2 are same\n");
//	}
//	else
//	{
//		printf("arr1 and arr2 are not same\n");
//	}
//	return 0;
//}



//#include <stdio.h>
//
//void printArr(int(*p)[5], int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			//printf("%d ", p[i][j]);
//			//printf("%d ", *(*(p + i) + j));
//			printf("%d ", *(p[i] + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	int row = sizeof(arr) / sizeof(arr[0]);
//	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
//	printArr(arr, row, col);
//	return 0;
//}




//һά����Ĵ��η�ʽ
//#include <stdio.h>
//
////һά���鴫��
////���η�ʽ1
//void test(int arr[]){}
////���η�ʽ2
//void test1(int arr[10]){}
////���η�ʽ3
//void test2(int* arr){}
//
////һάָ�����鴫��
////���η�ʽ1
//void demo1(int* p[10]){}
////���η�ʽ2
//void demo2(int** arr){} //���ͣ�*arr����str���飬��һ��*��ʾԪ����ָ��
//
//int main()
//{
//	int arr[5] = { 0 };
//	test(arr);
//	test1(arr);
//	test2(arr);
//
//	//һάָ�����鴫��
//	int* str[10] = { 0 };
//	demo1(str);
//	demo2(str);
//	return 0;
//}



//��ά���鴫��
//#include <stdio.h>
//
////���η�ʽ1
//void test(int arr[3][3]){}
////���η�ʽ2
//void test1(int arr[][3]){}
////���η�ʽ3
//void test2(int(*arr)[3]){}
//
//int main()
//{
//	int arr[3][3] = { 0 };
//	test(arr);
//	test1(arr);
//	test2(arr);
//	return 0;
//}



//һ��ָ�봫��
//#include <stdio.h>
////���η�ʽ1
//void test(int* p){}
////���η�ʽ2
//void test1(int* *p){}
//
//int main()
//{
//	int* p = NULL;
//	test(p);
//	return 0;
//}



//#include <stdio.h>
//
//void test(int** p) {}
//
//int main()
//{
//	int** p = NULL;
//	test(p);
//	return 0;
//}



//����ָ��
//#include <stdio.h>
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//�������е�ַ��
//	//printf("%p\n", &add);
//
//	int (*p)(int, int) = &add;
//	int ret = p(5, 3);
//	printf("%d\n", ret);//8
//	return 0;
//}

#include <stdio.h>

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("******************************\n");
	printf("****   1. add    2.sub   *****\n");
	printf("****   3. mul    4.div   *****\n");
	printf("****   0. exit           *****\n");
	printf("******************************\n");
}

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;

	//ת�Ʊ� - ����ָ�������
	int (*pfArr[])(int, int) = { NULL, Add, Sub, Mul, Div };
								//0    1    2    3    4

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("�˳�������\n");
			break;
		}
		else if (input >= 1 && input <= 4)
		{
			printf("����������������:>");
			scanf("%d %d", &x, &y);
			ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else
		{
			printf("ѡ�����\n");
		}
	} while (input);
	return 0;
}