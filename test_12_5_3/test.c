#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//������Ĭ����double��������Ҫ���float�������ֺ����f/F
	float num = 23.7f;
	int n = scanf("%f", & num);
	printf("%d\n", n); // 1? ��ΪscanfĬ�Ϸ���һ��int��
	//scanf���뼸�������򷵻ؼ���ֵ
	return 0;
}