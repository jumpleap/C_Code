#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�⺯�����˽�
//1)strcpy()����:�ַ�������
//char* strcpy(char* destination, const char* source);
//���ͣ�
//strcpy()�����ķ���ֵ��destination�����أ�
//const char* source: �����Ƶĺ�����const��ʾsource�е����ݲ��ܱ��ٴθı�
//char* destination: Ŀ�ĺ�����source�е����ݸ��Ƶ�destination��
//��Ҫͷ�ļ�: <string.h>


//2)strcat()�������ַ������Ӻ���
//char * strcat ( char * destination, const char * source );
//strcat�ĺ�����destination������;
//const char * source: ���Ӻ���,const: source�����ݲ��ܱ��ٴ��޸�
//char * destination: Ŀ�ĺ��������Ӻ���������Ŀ�ĺ�������
//��Ҫͷ�ļ�: <string.h>
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "hughdsh";
//	char str[101] = "acbdghdgsh";
//
//	//�ַ������ƺ���
//	strcpy(str, arr1);//��arr�ַ��������ݸ��Ƶ�str��
//	printf("%s\n", str);//abcdefg
//
//	//�ַ������Ӻ���
//	strcat(str, arr2);//��arr2���ַ������������ӵ�str�ַ����ĺ���
//	printf("%s\n", str);//abcdefghughdsh
//	return 0;
//}

#include <stdio.h>

//�õ������������ֵ�ĺ���
//�������ͣ�int  ������:getMax  �����б�a,b
int getMax(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	int max = getMax(a, b);
	printf("%d\n", max);
	return 0;
}