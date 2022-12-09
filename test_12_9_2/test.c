#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//输入一个整数a和一个浮点数b, 求它们的个位数
int main()
{
	int a = 0;
	float b = 0;
	
	while (scanf("%d %f", &a, &b) != EOF)
	{
		//a的个位数
		printf("a的个位数为：%d\n", a % 10);
		//b的个位数:先进行强转再%10
		printf("b的个位数为：%d\n", (int)b % 10);
	}
	return 0;
}