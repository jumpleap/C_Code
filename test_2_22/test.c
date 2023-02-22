#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//下面关于"指针"的描述不正确的是：（A）
//
//A.当使用free释放掉一个指针内容后, 指针变量的值被置为NULL
//B.32位系统下任何类型指针的长度都是4个字节
//C.指针的数据类型声明的是指针实际指向内容的数据类型
//D.野指针是指向未分配或者已经释放的内存地址

//int main()
//{
//	/*int a = 10;
//	int* pa = &a;
//	free(pa);
//	if (pa == NULL)
//	{
//		printf("haha\n");
//	}*/
//
//	//32位平台下
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(short*));//4
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(long*));//4
//	printf("%d\n", sizeof(long long*));//4
//	printf("%d\n", sizeof(float*));//4
//	printf("%d\n", sizeof(double*));//4
//
//	//指针的数据类型声明的是指针实际指向内容的数据类型
//	int a = 10;
//	int* pa = &a;
//	return 0;
//}



//关于下面代码描述正确的是：（C）
//
//char* p = "hello bit";
//A.把字符串hello bit存放在p变量中
//B.把字符串hello bit的第一个字符存放在p变量中
//C.把字符串hello bit的第一个字符的地址存放在p变量中
//D.*p等价于hello bit

//注：当字符指针指向一个常量字符串的时候，它存放的是常量字符串首字符的地址



//关于数组指针的描述正确的是：（C）
//
//A.数组指针是一种数组
//B.数组指针是一种存放数组的指针
//C.数组指针是一种指针
//D.指针数组是一种指向数组的指针

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//数组指针：p，指向数组的指针
//	
//	int* pa[10] = arr;//指针数组 ： 是数组
//	return 0;
//}



//下面哪个是数组指针（C）
//
//A.int** arr[10]
//B.int(*arr[10])
//C.char* (*arr)[10]
//D.char(*)arr[10]

//int main()
//{
//	int** arr[10];//存放int二级指针的指针数组
//	int(*arr[10]);//存放int指针的数组
//	char*(*arr)[10];//数组指针，指向char*数组的指针
//	//char(*)arr[10];//指针数组，存放的是字符指针
//	return 0;
//}



//如何定义一个int类型的指针数组，数组元素个数为10个：(C)
//
//A.int a[10]
//B.int(*a)[10]
//C.int* a[10];
//D.int (*a[10])(int);

int main()
{
	int a[10];//整型数组
	int(*a)[10];//数组指针，指向int型数组的数组指针
	int* a[10];//指针数组，存放10个int*的数组
	int (*a[10])(int);//函数指针数组，
	return 0;
}