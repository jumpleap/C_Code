#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//������������a, b, ���a ����b������,�����������ͼ���,�ͳ���
int main()
{
	int a = 0, b = 0;
	printf("����������������\n");
	scanf("%d %d", &a, &b);
	
	printf("a+b=%d\n", a + b);
	printf("a-b=%d\n", a - b);
	printf("a/b=%d\n", a / b);
	printf("a%%b=%d\n", a % b);//��%�ַ���ӡ��ʱ��Ҫ����%%����ת��
	printf("a*b=%d\n", a * b);
	return 0;
}