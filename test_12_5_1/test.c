#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//дһ�����������������Ľϴ�ֵ
int getMax(int x, int y)
{
	return x > y ? x : y;
}

int main()
{
	int num1 = 0, num2 = 0;
	printf("������������������\n");
	scanf("%d %d", &num1, &num2);
	printf("������ǣ�%d\n", getMax(num1, num2));
	return 0;
}