#define _CRT_SECURE_NO_WARNINGS

//��һ��ʹ�ÿ⺯��strlen()���
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[100] = "";
//
//	while(scanf("%s", str)!=EOF)
//		printf("%d\n", strlen(str));
//	return 0;
//}


//����:������
//#include <stdio.h>
//#include <assert.h>
//
//int getCharTotal(const char* str)
//{
//	assert(str);//�жϿ�ָ��
//	int count = 0;
//	//ͳ��'\0'֮ǰ���ַ���
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char str[100] = "";
//
//	while (scanf("%s", str) != EOF)
//	{
//		int total = getCharTotal(str);
//		printf("%d\n", total);
//	}
//	return 0;
//}



//������ָ�� - ָ��
//#include <stdio.h>
//#include <assert.h>
//
//int getCharTotal(const char* str)
//{
//	assert(str);//�жϿ�ָ��
//
//	const char* cur = str;//����ָ��
//	//ʹ����ָ�������'\0'��λ��
//	while (*cur != '\0')
//	{
//		cur++;
//	}
//	//ָ��-ָ��õ������ַ�����
//	return cur - str;
//}
//
//int main()
//{
//	char str[100] = "";
//
//	while (scanf("%s", str) != EOF)
//	{
//		int total = getCharTotal(str);
//		printf("%d\n", total);
//	}
//	return 0;
//}



//�ݹ�
#include <stdio.h>
#include <assert.h>

int getCharTotal(const char* str)
{
	assert(str);//�жϿ�ָ��
	if (*str == '\0')
		return 0;
	return 1 + getCharTotal(str + 1);
}

int main()
{
	char str[100] = "";

	while (scanf("%s", str) != EOF)
	{
		int total = getCharTotal(str);
		printf("%d\n", total);
	}
	return 0;
}