#define _CRT_SECURE_NO_WARNINGS

//指针变量保存地址
//#include <stdio.h>
//
//int main()
//{
//	int num = 10;
//	int* p = &num;//取出了num的地址赋给了p
//
//	//打印查看地址
//	printf("&num = %p\n", &num);
//	printf("p = %p\n", p);
//	return 0;
//}



//指针的大小
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
//	//一般情况，那种类型的指针变量存储那种类型变量的地址
//	char* ch = &c;
//	int* p = &num;
//	float* p1 = &f;
//	double* p2 = &data;
//	return 0;
//}



//指针的类型决定了指针向前走一步或向后走一步的字节距离有多大
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



//指针的类型决定了指针在解引用操作的时候能进行操作几个字节
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




//野指针
//指针未初始化
//#include <stdio.h>
//
//int main()
//{
//	int* p;
//	printf("%p\n", p);
//	return 0;
//}




//指针越界访问
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//
//	for (int i = 0; i <= 11; i++)
//	{
//		//p的访问范围超过了数组的下标范围，p就是野指针
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}



//指针指向的空间为释放
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



//防范野指针
//#include <stdio.h>
//void test(int* p)
//{
//	//检查指针的有效性
//	if(p == NULL){}
//}
//
//int main()
//{
//	int* p = NULL;//不知道指针指向哪里的时候置为NULL
//	test(p);
//	return 0;
//}



//指针运算
//指针+-整数
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



//两个指针指向的是同一块空间且类型是一致的，两者相减得到是元素个数
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p1 = arr;
//	int* p2 = &arr[10];
//
//	//指针-指针
//	printf("%d\n", p2 - p1);//10
//	return 0;
//}



//指针的关系运算
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




//数组名是数组首元素的地址，&数组名是取出整个数组的地址
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




//二级指针
//#include <stdio.h>
//
//int main()
//{
//	int num = 10;
//	int* p = &num;//*p表示这是一个指针，指向的类型是int
//	int** pp = &p;//*pp表示这是一个指针，指向的类型是int*
//	
//	printf("%d\n", num);//10
//	printf("%d\n", *p);//10
//	printf("%d\n", **pp);//10
//	return 0;
//}



//1）字符指针指向一个字符变量
//2）字符指针指向一个常量字符串

//#include <stdio.h>
//
//int main()
//{
//	char ch = 'a';
//	//字符指针指向一个字符变量
//	char* p1 = &ch;
//	printf("%c\n", *p1);
//
//	//字符指针指向一个常量字符串
//	char* p2 = "abcdef";
//	printf("%c\n", *p2);
//	printf("%s\n", p2);
//	return 0;
//}



//指针数组
//#include <stdio.h>
//
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7 };
//
//	int* arr[3] = { arr1,arr2,arr3 };//存储了三个数组的首元素地址
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



//数组指针
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




//一维数组的传参方式
//#include <stdio.h>
//
////一维数组传参
////传参方式1
//void test(int arr[]){}
////传参方式2
//void test1(int arr[10]){}
////传参方式3
//void test2(int* arr){}
//
////一维指针数组传参
////传参方式1
//void demo1(int* p[10]){}
////传参方式2
//void demo2(int** arr){} //解释：*arr接收str数组，另一个*表示元素是指针
//
//int main()
//{
//	int arr[5] = { 0 };
//	test(arr);
//	test1(arr);
//	test2(arr);
//
//	//一维指针数组传参
//	int* str[10] = { 0 };
//	demo1(str);
//	demo2(str);
//	return 0;
//}



//二维数组传参
//#include <stdio.h>
//
////传参方式1
//void test(int arr[3][3]){}
////传参方式2
//void test1(int arr[][3]){}
////传参方式3
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



//一级指针传参
//#include <stdio.h>
////传参方式1
//void test(int* p){}
////传参方式2
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



//函数指针
//#include <stdio.h>
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//函数是有地址的
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

	//转移表 - 函数指针的数组
	int (*pfArr[])(int, int) = { NULL, Add, Sub, Mul, Div };
								//0    1    2    3    4

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("退出计算器\n");
			break;
		}
		else if (input >= 1 && input <= 4)
		{
			printf("请输入两个操作数:>");
			scanf("%d %d", &x, &y);
			ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else
		{
			printf("选择错误\n");
		}
	} while (input);
	return 0;
}