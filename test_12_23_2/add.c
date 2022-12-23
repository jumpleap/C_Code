#define _CRT_SECURE_NO_WARNINGS

//使函数的外部链接属性不存在，只能在本文件使用，不能被外部文件使用
static int getSum(int a, int b)
{
	return a + b;
}