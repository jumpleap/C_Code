#define _CRT_SECURE_NO_WARNINGS
#include "my._Instr.h"

int main()
{
	char arr1[100] = "";
	char arr2[30] = "";
	printf("�������һ���ַ�����\n");
	scanf("%s", arr1);
	printf("������ڶ����ַ�����\n");
	scanf("%s", arr2);

	connect(arr1,arr2);
	printf("���Ӻ���ַ���Ϊ��%s", arr1);
	return 0;
}