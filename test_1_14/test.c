#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int a, int b叫形参
//int getSum(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	//getSum中的a,b叫做实参,以变量做实参
//	int sum1 = getSum(a, b);
//	//1,2以常量值做实参
//	int sum2 = getSum(1, 2);
//	//a++,b++以表达式做实参
//	int sum3 = getSum(a++, b++);
//	//以函数调用作为实参
//	int sum4 = getSum(getSum(a, 10), b);
//
//	printf("%d %d %d %d\n", sum1,sum2,sum3,sum4);//30 3 30 42
//	return 0;
//}

//void swap1(int x, int y)
//{
//	//交换两个值，只在函数体内交换，出了函数体形式参数自动销毁
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
////地址需要指针变量来接收
//void swap2(int* x, int* y)
//{
//	//*:取出地址中对应的值
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//
//	//传值调用：形参的改变不改变实参
//	swap1(x, y);
//	//可以发现，在swap1中的交换对实参并没有作用
//	printf("%d %d\n", x, y);
//
//	//传址调用：形参中的改变，实参也跟着改变
//	swap2(&x, &y);//&：取出对应变量的地址
//	printf("%d %d\n", x, y);
//	return 0;
//}


//函数的嵌套调用：在一个函数中调用另外一个函数

//void print(int i)
//{
//	printf("%d ", i);
//}
//
//int getSum(int x)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= x; i++)
//	{
//		print(i);//调用另一个函数
//		sum += i;
//	}
//	return sum;
//}
//
//int main()
//{
//	printf("\n%d\n", getSum(10));//55
//	return 0;
//}


//函数不可以嵌套定义

//void print()
//{
//	void get()
//	{
//		//错误，不能在一个函数中定义另外一个函数，即函数不能嵌套定义
//	}
//}
//
//int main()
//{
//	print();
//	return 0;
//}


//函数的链式访问：把一个函数的返回值作为另外一个函数的参数

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	//printf的返回值是int，即printf中有几个字符就打印几个字符
//	//printf("%d", 43)：打印43,4和3是两个字符，下一个printf打印2
//	//2是一个字符，最后打印1
//	return 0;
//}

//#include "test.h"
//
////先声明后使用
//void print()
//{
//	printf("hello,world\n");
//}
//
//int main()
//{
//	print();
//}

////函数声明和定义
//int getSum(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int x = 10;
//	int y = 20;
//
//	printf("%d\n", getSum(x, y));//30
//	return 0;
//}


//使用函数判断一个数是不是素数
//#include <math.h>
//
//int isPrime(int num)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(num); i++)
//	{
//		//能除尽则不是素数
//		if (num % i == 0)
//			return 0;
//	}
//	return 1;//是素数
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	int res = isPrime(num);
//	if (res == 1)
//	{
//		printf("%d是素数\n", num);
//	}
//	else
//	{
//		printf("%d不是素数\n", num);
//	}
//	return 0;
//}


//判断一个数是不是闰年

//int is_leap_year(int year)
//{
//	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//
//	int res = is_leap_year(year);
//	if (res)
//	{
//		printf("%d是闰年\n", year);
//	}
//	else
//	{
//		printf("%d不是闰年\n", year);
//	}
//	return 0;
//}



//二分查找

//int binarySearch(int arr[], int num, int len)
//{
//	int left = 0;
//	int right = len - 1;
//
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;//防止数值溢出
//	
//		if (arr[mid] > num)
//		{
//			right = mid - 1;//right左移
//		}
//		else if (arr[mid] < num)
//		{
//			left = mid + 1;//left右移
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int num = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);//数组长度
//	scanf("%d", &num);
//
//	int index = binarySearch(arr, num, len);
//	if (index == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", index);
//	}
//	return 0;
//}


//写一个递归函数DigitSum(num)，输入一个非负整数，返回组成它的数字之和
int DigitSum(int num)
{
	if (num > 9)
		return num % 10 + DigitSum(num / 10);//大于9的数
	else
		return num % 10;//最后一个数
}

int main()
{
	int num = 0;
	scanf("%d", &num);

	int sum = DigitSum(num);
	printf("%d\n", sum);
	return 0;
}