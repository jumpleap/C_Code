#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//дһ�����룺��ӡ100~200֮�������
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//flag����ǣ�1��ʾ��������0��ʾ��������
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//��������
//				break;
//			}
//		}
//		//�ж�
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//��ӡ1000�굽2000��֮�������
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�����
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//}



//���������������������������Լ��
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	
//	//շת�����
//	int gcd = 0;
//	while (gcd = num1 % num2)
//	{
//		num1 = num2;
//		num2 = gcd;
//	}
//	printf("%d", num2);
//	return 0;
//}


int getGcd(int x, int y)
{
	//�ж�y�Ƿ�Ϊ0��Ϊ0��ֱ�ӷ���x
	if (y == 0)
		return x;
	//���еݹ�
	return getGcd(y, x % y);
}

int main()
{
	int num1 = 0;
	int num2 = 0;

	scanf("%d %d", &num1, &num2);
	int gcd = getGcd(num1, num2);
	printf("%d\n", gcd);
}