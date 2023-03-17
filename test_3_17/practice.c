#define _CRT_SECURE_NO_WARNINGS


//法一：循环遍历
//#include <stdio.h>
//
//int sumNums(int n)
//{
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//		sum += i;//累加
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", sumNums(n));
//	return 0;
//}



//数学公式
//#include <stdio.h>
//
//int sumNums(int n)
//{
//	long long sum = n * (n + 1) / 2;
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", sumNums(n));
//	return 0;
//}


//法三：递归
//#include <stdio.h>
//
//int sumNums(int n)
//{
//	//递归结束条件
//	if (n < 1)
//		return 0;
//	return n + sumNums(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", sumNums(n));
//	return 0;
//}


//法四：奇数偶数判断求解

//#include <stdio.h>
//
//int sumNums(int n)
//{
//	int sum = 0;
//
//	if (n % 2)
//		sum = (n + 1) / 2 * n;//奇数情况
//	else
//		sum = n / 2 * (n + 1);//偶数情况
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", sumNums(n));
//	return 0;
//}


//法五：pow和数学公式求解
//#include <stdio.h>
//#include <math.h>
//
//int sumNums(int n)
//{
//	return ((int)pow(n, 2) + n) >> 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", sumNums(n));
//	return 0;
//}



//法六：短路运算和递归搭配使用
#include <stdio.h>

int sumNums(int n)
{
	n && (n += sumNums(n - 1));
	return n;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", sumNums(n));
	return 0;
}