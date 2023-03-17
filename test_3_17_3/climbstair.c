#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？
1 <= n <= 45
*/


//法一：递归【时间复杂度过大】
//int climbStairs(int n)
//{
//	if (n < 2)
//		return 1;
//	return climbStairs(n - 1) + climbStairs(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		printf("%d\n", climbStairs(n));
//	}
//	return 0;
//}


//法二：循环迭代
int climbStairs(int n)
{
	int n1 = 0;
	int n2 = 1;
	int ret = 0;
	
	//循环迭代
	while (n)
	{
		ret = n1 + n2;
		n1 = n2;
		n2 = ret;
		n--;
	}
	return ret;
}

int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		printf("%d\n", climbStairs(n));
	}
	return 0;
}