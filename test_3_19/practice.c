#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>


/*
给你一个整数 n，请你判断该整数是否是 2 的幂次方。
如果是，返回 true ；否则，返回 false 。
如果存在一个整数 x 使得 n == 2x ，则认为 n 是 2 的幂次方。
*/

//法一：(num & (num - 1)) == 0
//bool isPowerOfTwo(long n)
//{
//	if ((n > 0) && (n & (n - 1)) == 0)
//		return true;
//	return false;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	bool ret = isPowerOfTwo(n);
//	printf("%d\n", ret);
//	return 0;
//}



//法二：循环
bool isPowerOfTwo(long n)
{
	if (n < 1)
		return false;
	while (n)
	{
		if (n == 1)
			return true;
		if (n % 2 != 0)
			return false;
		n /= 2;
	}
	return false;
}


int main()
{
	int n = 0;
	scanf("%d", &n);
	bool ret = isPowerOfTwo(n);
	printf("%d\n", ret);
	return 0;
}