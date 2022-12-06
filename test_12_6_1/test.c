#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//循环输入，每输入一个n，则输出1+2+3+4+……+n的值
//法一
/*
int main()
{
	int num = 0;
	while (scanf("%d", &num) != EOF)
	{
		int sum = 0;
		int i = 0;
		for (i = 1; i <= num; i++)
		{
			sum += i;
		}
		printf("sum = %d\n", sum);
	}
	return 0;
}
*/

//法二：使用公式：sum = n(n+1)/2
int main()
{
	long long int num = 0;
	while (scanf("%lld", &num) != EOF)
	{
		long long int sum = num * (num + 1) / 2;
		printf("sum = %lld\n", sum);
	}
	return 0;
}