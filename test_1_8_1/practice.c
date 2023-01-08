#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//写代码将三个整数数按从大到小输出。
//法一：临时变量交换

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		getchar();//用于接受回车键
//		int tmp = 0;//临时变量，用于交换
//
//		//判断a,b的大小，若b大则交换
//		if (a < b)
//		{
//			tmp = a;
//			a = b;
//			b = tmp;
//		}
//		//判断a,c的大小，若c大则交换
//		if (a < c)
//		{
//			tmp = a;
//			a = c;
//			c = tmp;
//		}
//		//判断b,c的大小，若c大则交换
//		if (b < c)
//		{
//			tmp = b;
//			b = c;
//			c = tmp;
//		}
//		printf("%d %d %d\n", a, b, c);
//	}
//	return 0;
//}


//法二：指针法
void swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		getchar();//用于接收回车符
		if (a < b)
			swap(&a, &b);
		if (a < c)
			swap(&a, &c);
		if (b < c)
			swap(&b, &c);
		printf("%d %d %d\n", a, b, c);
	}
	return 0;
}