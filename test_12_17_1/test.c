#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
	ţţ��ͨ��·��������ѡ��Ҫô��·��Ҫô�򳵣�ţţ��·���ٶ��� 1m/s ��
	�򳵵��ٶȵ� 10m/s �����Ǵ���Ҫ�ȳ��⳵ 10 s��
	�������ţţ�뾡�쵽��˾Ӧ��ѡ��򳵻�����·��
����������
	����һ������������ʾţţ����˾�ľ��롣
���������
	���ţţ�뾡���ܿ쵽��˾Ӧ��ѡ��򳵻�����·����·�Ļ���� w �� �򳵵���� v��
	��֤��һ�����������������ʱ��һ���������

//��һ
int main()
{
	int distance = 0;//����
	scanf("%d", &distance);

	//����С��10�׵Ļ���ʱ�������·ʱ��
	if (distance <= 10)
		printf("w\n");
	else
		printf("v\n");
	return 0;
}
*/

int main()
{
	int distance = 0;//����
	scanf("%d", &distance);

	float taxi = 0.0;//���⳵��ʱ��
	taxi = distance / 10.0 + 10;//������⳵���õ�ʱ��
	printf("%c\n", taxi < distance ? 'v' : 'w');//�Ƚ��Ǹ����õ�ʱ����
	return 0;
}