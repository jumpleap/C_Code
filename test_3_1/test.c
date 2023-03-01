#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_sys(int a)
{
	//返回低地址的值
	return (char*)a;
}

int main()
{
	int a = 1;

	int ret = check_sys(a);
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}