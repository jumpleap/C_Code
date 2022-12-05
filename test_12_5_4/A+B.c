#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//a+b的问题

/*
//法一：
int main()
{
	int a = 0, b = 0;
	printf("请输入两个操作数：\n");
	scanf("%d %d", &a, &b);
	printf("a+b=%d\n", a + b);
	return 0;
}
*/

//法二：有t组数据，每组数据有a,b，求这t组数据的a+b的和
/*
int main()
{
	int t = 0;
	int a = 0, b = 0;
	printf("请输入有多少组数据：\n");
	scanf("%d", &t);

	while (t--)
	{
		printf("请输入a,b两个操作数：\n");
		scanf("%d %d", &a, &b);
		printf("a+b = %d\n",a + b);
	}
	return 0;
}
*/

//法三：有多组数据，每组数据有a, b，求这些数据的a + b的和
/*
int main()
{
	int a = 0, b = 0;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		//EOF的值是-1
		printf("a+b = %d\n", a + b);
	}
}
*/


//法四：编写函数返回a与b的和
int getAdd(int a, int b)
{
	return a + b;
}

int main()
{
	int a = 0, b = 0;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		printf("a+b = %d\n", getAdd(a, b));
	}
	return 0;
}