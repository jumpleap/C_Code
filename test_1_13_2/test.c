#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩��
#include <stdio.h>
//1)�ǵݹ�ʵ��
/*
int fac(int n)
{
	int sum = 1;
	int i = 1;

	for (i = 1; i <= n; i++)
	{
		sum *= i;//�����ܺ�
	}
	return sum;
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	int res = fac(n);
	printf("%d\n", res);
	return 0;
}
*/


//2)�ݹ�ʵ��
//int fac(int n)
//{
//	//��ֹ����
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);//�ݹ飬�Ӵ�С
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int res = fac(n);
//	printf("%d\n", res);
//	return 0;
//}



//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
#include <stdio.h>

void get_single(int num)
{
	if (num > 9)
		get_single(num / 10);//������һ��ֵ

	printf("%d ", num % 10);//��ӡÿ��ֵ
}

int main()
{
	int num = 0;
	scanf("%d", &num);

	get_single(num);
	return 0;
}