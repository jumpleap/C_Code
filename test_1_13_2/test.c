#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）、
#include <stdio.h>
//1)非递归实现
/*
int fac(int n)
{
	int sum = 1;
	int i = 1;

	for (i = 1; i <= n; i++)
	{
		sum *= i;//计算总和
	}
	return sum;
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	int res = fac(n);
	printf("%d\n", res);
	return 0;
}
*/


//2)递归实现
//int fac(int n)
//{
//	//终止条件
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);//递归，从大到小
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



//递归方式实现打印一个整数的每一位
#include <stdio.h>

void get_single(int num)
{
	if (num > 9)
		get_single(num / 10);//访问下一个值

	printf("%d ", num % 10);//打印每个值
}

int main()
{
	int num = 0;
	scanf("%d", &num);

	get_single(num);
	return 0;
}