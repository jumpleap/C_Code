#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int check_sys(int a)
//{
//	//���ص͵�ַ�ĵ�һ���ֽڵ�����ֵ
//	return (*(char*)&a);
//}
//
//int main()
//{
//	int a = 1;
//	int ret = check_sys(a);
//
//	//���رȽ�
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}



//��������
//#include <stdio.h>
//
//int main()
//{
//	char ch1 = 127;
//	//01111111
//	char ch2 = 3;
//	//00000011
//	char ch3 = ch1 + ch2;
//	//01111111  --> 127
//	//00000011  --> 3
//	//10000010 --> ����
//	//11111111 11111111 11111111 10000010 ��������
//	//10000010  �ض�
//	//10000001 
//	//11111110 -126 ���
//
//	printf("%d %d\n", ch3, ch1 + ch2);//-126 130
//	return 0;
//}



//��������
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 10;
//	int c = 0;
//	int d = 5;
//	
//	int ret = a ^ c;
//	int res = a ^ b ^ d;
//	printf("%d\n", ret);//10
//	printf("%d\n", res);//5
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	if (num & 1)
//	{
//		printf("%d������\n", num);
//	}
//	else
//	{
//		printf("%d��ż��\n", num);
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int is_judge_even(int num)
//{
//	return num % 2;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	if (is_judge_even(num))
//	{
//		printf("%d������\n", num);
//	}
//	else
//	{
//		printf("%d��ż��\n", num);
//	}
//	return 0;
//}


#include <stdio.h>

void test()
{
	printf("test...\n");
}

int main()
{
	test();
	return 0;
}