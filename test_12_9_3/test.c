#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//输入一个整数，求其十位数

/*
//法一：/10%10 --> /10后得到10十位变个位，%10得到个位
int main()
{
	int num = 0;
	while (scanf("%d", &num) != EOF)
	{
		printf("num的十位数是：%d\n", num / 10 % 10);
	}
	return 0;
}
*/

//法二：%100/10
//个位：%10,十位：%100/10,千位：%1000/10

int main()
{
	int num = 0;
	while (scanf("%d", &num) != EOF)
	{
		printf("num的十位数是：%d\n", num %100 / 10);
	}
	return 0;
}