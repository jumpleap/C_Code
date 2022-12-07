#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//输入两个整数，范围-231~231-1，交换两个数并输出。

/*
//法一：临时变量交换
int main()
{
	int a = 0, b = 0;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		int temp = a;
		a = b;
		b = temp;
		printf("a=%d,b=%d\n",a, b);
	}
	return 0;
}
*/

/*
//法二：投机法
int main()
{
	int a = 0, b = 0;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		printf("a=%d,b=%d\n", b, a);//交换位置
	}
	return 0;
}
*/


//法三：异或法
//异或时，两个异或的数若是相等的话，结果为0
//0与任何数异或等于它本身
int main()
{
	int a = 0, b = 0;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		a = a ^ b;
		b = a ^ b; // b = a ^ b ^ b = a
		a = a ^ b; // a = a ^ a ^ b = b
		printf("a=%d,b=%d\n", a, b);
	}
	return 0;
}