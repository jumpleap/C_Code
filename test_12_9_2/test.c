#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����һ������a��һ��������b, �����ǵĸ�λ��
int main()
{
	int a = 0;
	float b = 0;
	
	while (scanf("%d %f", &a, &b) != EOF)
	{
		//a�ĸ�λ��
		printf("a�ĸ�λ��Ϊ��%d\n", a % 10);
		//b�ĸ�λ��:�Ƚ���ǿת��%10
		printf("b�ĸ�λ��Ϊ��%d\n", (int)b % 10);
	}
	return 0;
}