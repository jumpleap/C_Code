#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
给定一个int范围内的数，要求将它逆序输出
*/

int main()
{
	int num = 0;
	while (scanf("%d", &num) != EOF)
	{
		while (num)
		{
			//打印尾数
			printf("%d", num % 10);
			//得到下一个尾数
			num /= 10;
		}
		puts("");//换行
	}
	return 0;
}