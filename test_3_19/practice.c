#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>


/*
����һ������ n�������жϸ������Ƿ��� 2 ���ݴη���
����ǣ����� true �����򣬷��� false ��
�������һ������ x ʹ�� n == 2x ������Ϊ n �� 2 ���ݴη���
*/

//��һ��(num & (num - 1)) == 0
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



//������ѭ��
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