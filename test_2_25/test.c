#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int num = 10;
//	int* p = &num;//*p就是指针变量
//
//	return 0;
//}


//指针变量的大小
//int main()
//{
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(short*));//4
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(long*));//4
//	printf("%d\n", sizeof(long long*));//4
//	printf("%d\n", sizeof(float*));//4
//	printf("%d\n", sizeof(double*));//4
//	//由此可知：指针变量
//	//在32位平台上，是4个字节的空间
//	//在64位平台上，是8个字节的空间
//	return 0;
//}



//指针+-整数
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
//	//结论：指针的类型决定了指针走一步的步长是几个字节
//	return 0;
//}


//指针解引用
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
//	//结论：指针的类型决定了指针解引用能操作几个字节的空间
//	return 0;
//}



//野指针的类型
//1）指针未初始化
//2）指针越界访问
//3）指针指向的空间释放

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



//如何预防野指针
//1.指针初始化
//2.小心指针越界
//3.指针指向的空间释放后及时的置为NULL
//4.避免返回局部变量的地址
//5.指针使用之前检查有效性

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



//指针运算：指针+-整数
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



//指针-指针
//int main()
//{
//	int data = 10;
//	int num = 11;
//	int* p1 = &data;
//	int* p2 = &num;
//	printf("%d\n", p2 - p1);
//	return 0;
//}


//求字符串长度 —— 使用指针-指针完成
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


//看看指针-指针在数组中的运算
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
//	//结论：指针和指针在数组中的运算，相当于是下标与下标的运算
//	return 0;
//}


//指针的关系运算
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


//指针和数组
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));//访问形式
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



//指向指针的指针 —— 二级指针
//int main()
//{
//	int num = 10;
//	int* p1 = &num; //一级指针
//	//int表示指向的是一个整型，*p表示存放所指向变量的地址
//	int** p2 = &p1;//二级指针
//	//解释：int* 表示指向是个指针类型，*p表示存放所指向变量的地址
//
//	//查看所指向指针的地址
//	printf("%p\n", &num);//num的地址
//	printf("%p\n", &p1);//表示p1的地址
//	printf("%p\n", &p2);//表示p2的地址
//
//	//解引用
//	printf("%d\n", num);
//	printf("%d\n", *p1);
//	printf("%d\n", **p2);
//	return 0;
//}


//指针数组 —— 是数组：存放指针的数组
int main()
{
	int a = 10;
	int b = 30;
	int* arr[10] = { &a, &b };//指针数组
	return 0;
}