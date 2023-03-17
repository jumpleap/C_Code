#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
������������¥�ݡ���Ҫ n ������ܵ���¥����
ÿ��������� 1 �� 2 ��̨�ס����ж����ֲ�ͬ�ķ�����������¥���أ�
1 <= n <= 45
*/


//��һ���ݹ顾ʱ�临�Ӷȹ���
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


//������ѭ������
int climbStairs(int n)
{
	int n1 = 0;
	int n2 = 1;
	int ret = 0;
	
	//ѭ������
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