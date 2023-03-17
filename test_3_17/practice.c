#define _CRT_SECURE_NO_WARNINGS


//��һ��ѭ������
//#include <stdio.h>
//
//int sumNums(int n)
//{
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//		sum += i;//�ۼ�
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", sumNums(n));
//	return 0;
//}



//��ѧ��ʽ
//#include <stdio.h>
//
//int sumNums(int n)
//{
//	long long sum = n * (n + 1) / 2;
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", sumNums(n));
//	return 0;
//}


//�������ݹ�
//#include <stdio.h>
//
//int sumNums(int n)
//{
//	//�ݹ��������
//	if (n < 1)
//		return 0;
//	return n + sumNums(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", sumNums(n));
//	return 0;
//}


//���ģ�����ż���ж����

//#include <stdio.h>
//
//int sumNums(int n)
//{
//	int sum = 0;
//
//	if (n % 2)
//		sum = (n + 1) / 2 * n;//�������
//	else
//		sum = n / 2 * (n + 1);//ż�����
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", sumNums(n));
//	return 0;
//}


//���壺pow����ѧ��ʽ���
//#include <stdio.h>
//#include <math.h>
//
//int sumNums(int n)
//{
//	return ((int)pow(n, 2) + n) >> 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", sumNums(n));
//	return 0;
//}



//��������·����͵ݹ����ʹ��
#include <stdio.h>

int sumNums(int n)
{
	n && (n += sumNums(n - 1));
	return n;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", sumNums(n));
	return 0;
}