#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//���ַ������ȵ����ַ�ʽ

//��һ���⺯��strlen()���
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = strlen(arr);
//	printf("%d\n", len);//7
//	return 0;
//}


//������������
//int my_strlen(char* arr)
//{
//	int count = 0;//������
//	while (*arr++ != '\0')
//	{
//		count++;
//	}
//	return count;//���س���
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	
//	int len = my_strlen(arr);
//	printf("%d\n", len);//6
//	return 0;
//}


//�������ݹ�
int my_strlen(char* arr)
{
	if (*arr != '\0')
		return 1 + my_strlen(arr + 1);//�ݹ�õ����鳤��
	else
		return 0;//�õ�0��ʼ�ع�
}

int main()
{
	char arr[] = "abcdefg";

	int len = my_strlen(arr);
	printf("%d\n", len);//7
	return 0;
}