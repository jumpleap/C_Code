#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//1,6
//	return 0;
//}


//int main()
//{
//	int a[5] = { 5, 4, 3, 2, 1 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));//4,1
//	return 0;
//}



//使用qsort排序各种数据类型的数据
//void input(int* arr, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//}
//
//void output(int* arr, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//int sort(const void* x, const void* y)
//{
//	return (*(int*)x - *(int*)y);
//}

//void test1()
//{
//	int arr[10] = { 0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	//输入
//	input(arr, len);
//	qsort(arr, len, sizeof(arr[0]), sort);
//	output(arr, len);
//}


//void input(double* arr, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		scanf("%lf", &arr[i]);
//	}
//}
//
//int sort_Double(const void* e1, const void* e2)
//{
//	return *(double*)e1 - *(double*)e2 ? 1 : -1;
//  return (*(double *)a>*(double *)b ? 1:-1)
//  return (*(double*)b > *(double*)a ? 1 : -1);
//}
//
//void output(double* arr, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%lf ", arr[i]);
//	}
//}
//
//void test2()
//{
//	double arr[4] = { 0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	//输入
//	input(arr, len);
//	qsort(arr, len, sizeof(arr[0]), sort_Double);
//	output(arr, len);
//}
//
//int main()
//{
//	//test1();//排序整型数组
//	test2();//排序浮点型数组
//	return 0;
//}