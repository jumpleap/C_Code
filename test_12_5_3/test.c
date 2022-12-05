#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//浮点数默认是double，若是想要变成float，在数字后面加f/F
	float num = 23.7f;
	int n = scanf("%f", & num);
	printf("%d\n", n); // 1? 因为scanf默认返回一个int型
	//scanf输入几个数，则返回几个值
	return 0;
}