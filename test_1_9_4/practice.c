#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//在屏幕上输出9*9乘法口诀表
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d\t", j, i, i * j);
//		}
//		printf("\n");//换行
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <limits.h>
////求10 个整数中最大值
//int main()
//{
//	int data = 0;
//	int max = INT_MIN;//INT_MIN是int的最小值
//
//	for (int i = 1; i <= 10; i++)
//	{
//		scanf("%d", &data);
//		//进行判断大小
//		if (data > max)
//		{
//			max = data;
//		}
//	}
//	printf("%d\n", max);
//}



//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//int main()
//{
//	int i = 0;
//	int flag = 1;//标记正负
//	double sum = 0;//计算总和的值
//	for (i = 1; i <= 100; i++)
//	{
//		sum += 1.0 / i * flag;
//		flag = -flag;//使偶个数变成负数
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//编写程序数一下 1到 100 的所有整数中出现多少个数字9
int main()
{
	int count = 0;
	for (int i = 1; i <= 100; i++)
	{
		//个位为9的值
		if (i % 10 == 9)
			count++;
		//十位为9的值
		if (i / 10 == 9)
			count++;
	}
	printf("%d\n", count);
}