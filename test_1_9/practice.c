#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����n�Ľ׳�
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;//1*2*3*����*n:n�Ľ׳�
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//����1!+2!+3!+4!+5!+����+10!
//��һ
//int main()
//{
//	int ret = 1;
//	int sum = 0;
//
//	for (int i = 1; i <= 10; i++)
//	{
//		ret = 1;//����
//		for (int j = 1; j <= i; j++)
//		{
//			ret *= j;//iÿ��ֵ�Ľ׳�
//		}
//		sum += ret;//�����ܺ�
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//����
int main()
{
	int ret = 1;
	int sum = 0;
	
	for (int i = 1; i <= 10; i++)
	{
		ret *= i;//��i��ʱ��Ϊi�Ľ׳�
		sum += ret;//�ܺ�
	}
	printf("%d\n", sum);
	return 0;
}
