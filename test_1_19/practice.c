#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//ѭ�����룬����һ��r����Բ���ܳ������
#define PI 3.14
int main()
{
	int r = 0;
	double tangle, area;
	while (scanf("%d", &r) != EOF)
	{
		tangle = 2 * PI * r;//�ܳ�
		area = PI * r * r;//���

		printf("%.2lf %.2lf\n", tangle, area);
	}
	return 0;
}