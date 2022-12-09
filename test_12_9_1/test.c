#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//输入两个整数a, b, 输出a 除以b的余数,除数，加数和减数,和乘数
int main()
{
	int a = 0, b = 0;
	printf("请输入两个整数：\n");
	scanf("%d %d", &a, &b);
	
	printf("a+b=%d\n", a + b);
	printf("a-b=%d\n", a - b);
	printf("a/b=%d\n", a / b);
	printf("a%%b=%d\n", a % b);//对%字符打印的时候，要进行%%进行转义
	printf("a*b=%d\n", a * b);
	return 0;
}