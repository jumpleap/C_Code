#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

/*
����
	ѭ�����룬����Ϊһ�飬Ϊ�����������ֵ������������ľ���
����
	��������
���
	�������,������λС��


double get_distance(double x1, double y1, double x2, double y2)
{
	//���������ľ���
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main()
{
	double x1, y1, x2, y2;
	while (scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2) != EOF)
	{
		getchar();//���ܻ��з�
		printf("%.2lf\n", get_distance(x1, y1, x2, y2));//��ӡ���
	}
	return 0;
}
*/


/*
����
	���������е����ֵ
����
	�������룬ÿ��Ϊ��������
���
	ÿ�����������
*/

//�ⷨһ
int getMax(int x, int y)
{
	//�������ֵ
	return x > y ? x : y;
}

int main()
{
	int a, b, c;
	while (scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		getchar();//���ܻ��з�
		//ֱ�Ӵ�ӡ���
		printf("%d\n", getMax(a, getMax(b,c)));
	}
	return 0;
}