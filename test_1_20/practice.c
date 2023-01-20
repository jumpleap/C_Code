#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//输入一个无符号整型，按照顺序打印它的每一位

//void printNum(unsigned int num)
//{
//	if (num > 9)
//	{
//		printNum(num / 10);
//	}
//	printf("%u ", num % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//
//	printNum(num);
//	return 0;
//}


//求阶乘(int的范围内）
//int fac(int n)
//{
//	//n <= 1是限制条件
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);//每次递归逐渐接近限制条件
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int res = fac(n);
//	printf("%d\n", res);
//	return 0;
//}


//求第n个斐波那契数

//int Fib(int n)
//{
//	//n <= 2：限制条件
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int fib = Fib(n);
//	printf("%d\n", fib);
//	return 0;
//}



int main()
{
	////数组的完全初始化
	//int array[] = { 1,2,3,4,5,6,7,8,9,10 };
	////数组的不完全初始化
	//int arr[10] = { 1,2,3 };//0
	//double num[10] = { 1.0,2.0 };//0.0
	//char ch[10] = { 'a','b','c' };//'\0'

	//思考以下代码的差异
	char ch[] = "abc";
	char ch1[3] = { 'a','b','c' };
	//1.ch以'\0'结尾，而ch1不是
	//2.ch的数组大小比ch1大1
	//3.当两者以%s进行打印输出的时候，ch会打印出abc,而ch1则不能（无字符串结束标志）
	return 0;
}