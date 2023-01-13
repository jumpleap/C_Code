#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//关于递归的描述错误的是：（C）
//A.存在限制条件，当满足这个限制条件的时候，递归便不再继续
//B.每次递归调用之后越来越接近这个限制条件
//C.递归可以无限递归下去 //错误，递归不能无限的执行下去
//D.递归层次太深，会出现栈溢出现象


//关于函数的声明和定义说法正确的是：（B）
//A.函数的定义必须放在函数的使用之前 //放在使用之后
//B.函数必须保证先声明后使用
//C.函数定义在使用之后，也可以不声明 //必须声明后才能使用
//D.函数的声明就是说明函数是怎么实现的 //函数的定义


//根据下面递归函数：调用函数Fun(2)，返回值是多少
//int fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * fun(n + 1);
//}
//
//int main()
//{
//	printf("%d", fun(2));//16
//	return 0;
//}



//递归和非递归分别实现求第n个斐波那契数

/*
//1）递归实现
int Fib(int n)
{
	//判断n <= 2的情况
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);//进行递归调用
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int res = Fib(n);
	printf("%d\n", res);
	return 0;
}
*/

//循环实现
//int Fib(int n)
//{
//	int i = 1;
//	int j = 1;
//	int ret = 0;
//
//	//判断n<=2的情况
//	if (n <= 2)
//		return 1;
//
//	while (n >= 3)
//	{
//		ret = i + j;//ret第n个斐波那契的值
//		i = j;
//		j = ret;
//		n--;//控制循环
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int res = Fib(n);
//	printf("%d\n", res);
//	return 0;
//}


//编写一个函数实现n的k次方，使用递归实现。
//int my_pow(int n, int k)
//{
//	//终止条件
//	if (k < 1)
//		return 1;
//	else
//		return n * my_pow(n, k - 1); //递归部分
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int res = my_pow(n, k);
//	printf("%d\n", res);
//	return 0;
//}


//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19

int DigtSum(int n)
{
	//超过10的部分
	if (n > 9)
		return n % 10 + DigtSum(n / 10);
	else
		return n % 10;//个位的情况
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int res = DigtSum(n);
	printf("%d\n", res);
	return 0;
}