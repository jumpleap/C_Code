#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	printf("%c\n", '\\');//��ӡ'\'
//	printf("%c\n",'\'' );//��ӡ'
//	printf("%s\n","\"");//��ӡ"
//	return 0;
//}


//���������[]���ܲ���ʹ�ñ������ܲ���ʹ��const���εı���
//#include <stdio.h>
//
//int main()
//{
//	int num = 10;
//	//������±�������в���ʹ�ñ���
//	//int arr[num] = { 1,2,3 };
//
//	const int data = 10;
//	//������Ȼconst���εı������ܸı䣬�����������ϻ���һ������������ʹ��
//	//int arr[data] = { 1,2,3,4,5 };
//	return 0;
//}


//�ַ������ַ����������
#include <stdio.h>
#include <stdio.h>

int main()
{
	char arr1[] = { 'a','b','c','d' };
	char arr2[] = "abcd";
	//1)�ַ�����Ĵ�С���ַ�����ռ����1�ֽ�
	printf("%d\n", sizeof(arr1));//4
	printf("%d\n", sizeof(arr2));//5

	//�ַ����н�����־���ַ������޽�����־
	printf("%d\n", strlen(arr1));//���ֵ
	printf("%d\n", strlen(arr2));//4
	return 0;
}