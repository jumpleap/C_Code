#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	����һ���˵ĳ������ڣ����������գ������������е��ꡢ�¡��շֱ������
	���ݷ�Χ���������1990��y��2015 ���·�����1��m��12  �������� 1��d��30
*/
int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	scanf("%4d%2d%2d", &num1, &num2, &num3);
	printf("year=%d\nmonth=%02d\ndate=%02d\n", num1, num2, num3);
	return 0;
}