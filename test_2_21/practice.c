#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//д��10�Ľ׳�
//��һ��ѭ��
//int getSum(int n)
//{
//	int sum = 1;
//	for (int i = 1; i <= 10; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int sum = getSum(n);
//	printf("%d\n", sum);
//	return 0;
//}



//�������ݹ�
int getSum(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * getSum(n - 1);
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	int sum = getSum(n);
	printf("%d\n", sum);
	return 0;
}