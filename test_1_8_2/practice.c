#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//写一个代码：打印100~200之间的素数
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//flag做标记，1表示是素数，0表示不是素数
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//不是素数
//				break;
//			}
//		}
//		//判断
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//打印1000年到2000年之间的闰年
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断闰年
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//}



//给定两个数，求这两个数的最大公约数
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	
//	//辗转相除法
//	int gcd = 0;
//	while (gcd = num1 % num2)
//	{
//		num1 = num2;
//		num2 = gcd;
//	}
//	printf("%d", num2);
//	return 0;
//}


int getGcd(int x, int y)
{
	//判断y是否为0，为0则直接返回x
	if (y == 0)
		return x;
	//进行递归
	return getGcd(y, x % y);
}

int main()
{
	int num1 = 0;
	int num2 = 0;

	scanf("%d %d", &num1, &num2);
	int gcd = getGcd(num1, num2);
	printf("%d\n", gcd);
}