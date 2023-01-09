#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//计算n的阶乘
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;//1*2*3*……*n:n的阶乘
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//计算1!+2!+3!+4!+5!+……+10!
//法一
//int main()
//{
//	int ret = 1;
//	int sum = 0;
//
//	for (int i = 1; i <= 10; i++)
//	{
//		ret = 1;//重置
//		for (int j = 1; j <= i; j++)
//		{
//			ret *= j;//i每个值的阶乘
//		}
//		sum += ret;//计算总和
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//法二
int main()
{
	int ret = 1;
	int sum = 0;
	
	for (int i = 1; i <= 10; i++)
	{
		ret *= i;//乘i的时候为i的阶乘
		sum += ret;//总和
	}
	printf("%d\n", sum);
	return 0;
}
