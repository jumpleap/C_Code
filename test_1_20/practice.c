#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����һ���޷������ͣ�����˳���ӡ����ÿһλ

//void printNum(unsigned int num)
//{
//	if (num > 9)
//	{
//		printNum(num / 10);
//	}
//	printf("%u ", num % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//
//	printNum(num);
//	return 0;
//}


//��׳�(int�ķ�Χ�ڣ�
//int fac(int n)
//{
//	//n <= 1����������
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);//ÿ�εݹ��𽥽ӽ���������
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


//���n��쳲�������

//int Fib(int n)
//{
//	//n <= 2����������
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int fib = Fib(n);
//	printf("%d\n", fib);
//	return 0;
//}



int main()
{
	////�������ȫ��ʼ��
	//int array[] = { 1,2,3,4,5,6,7,8,9,10 };
	////����Ĳ���ȫ��ʼ��
	//int arr[10] = { 1,2,3 };//0
	//double num[10] = { 1.0,2.0 };//0.0
	//char ch[10] = { 'a','b','c' };//'\0'

	//˼�����´���Ĳ���
	char ch[] = "abc";
	char ch1[3] = { 'a','b','c' };
	//1.ch��'\0'��β����ch1����
	//2.ch�������С��ch1��1
	//3.��������%s���д�ӡ�����ʱ��ch���ӡ��abc,��ch1���ܣ����ַ���������־��
	return 0;
}