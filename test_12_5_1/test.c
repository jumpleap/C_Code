#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//写一个函数求两个整数的较大值
int getMax(int x, int y)
{
	return x > y ? x : y;
}

int main()
{
	int num1 = 0, num2 = 0;
	printf("请输入两个操作数：\n");
	scanf("%d %d", &num1, &num2);
	printf("大的数是：%d\n", getMax(num1, num2));
	return 0;
}