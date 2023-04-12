#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STU 100

//����ѧ���ṹ��
typedef struct Student
{
	char name[15];
	int score;
}student;

//����ѧ����Ϣ
void input_message(student* stu, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("�������%d��ѧ����������\n", i + 1);
		scanf("%s", stu[i].name);
		printf("�������%d��ѧ���ĳɼ�(0-100)��\n", i + 1);
		scanf("%d", &stu[i].score);
	}
}

//��ӡ�ɼ����ϸ��ѧ��
void print_to_fail(student* stu, int num, double* totalSum)
{
	double sum = 0;
	printf("�������ѧ���У�\n");
	for (int i = 0; i < num; i++)
	{
		if (stu[i].score < 60)
			printf("%s %d\n", stu[i].name, stu[i].score);
		sum += stu[i].score;
	}
	*totalSum = sum;
}

//��ȡ��߷ֺ���ͷ�
void getMaxandMin(student* stu, int num, student* maxScore, student* minScore)
{
	double sum = 0;

	//�������С����Ϊ��һ��ֵ
	maxScore->score = stu[0].score;
	strcpy(maxScore->name, stu[0].name);
	minScore->score = stu[0].score;
	strcpy(minScore->name, stu[0].name);

	for (int i = 1; i < num; i++)
	{
		if (stu[i].score > maxScore->score)
		{
			strcpy(maxScore->name, stu[i].name);
			maxScore->score = stu[i].score;
		}
		if (stu[i].score < minScore->score)
		{
			strcpy(minScore->name, stu[i].name);
			minScore->score = stu[i].score;
		}
	}
}

//ͳ�Ƹ��׶ε�����
void calculate_period_stu(student* stu, int num, int* grade)
{
	for (int i = 0; i < num; i++)
	{
		if (stu[i].score >= 90)
			grade[0]++;//��������
		else if (stu[i].score >= 80 && stu[i].score < 90)
			grade[1]++;//��������
		else if (stu[i].score >= 70 && stu[i].score < 80)
			grade[2]++;//�е�����
		else if (stu[i].score >= 60 && stu[i].score < 70)
			grade[3]++;//��������
		else
			grade[4]++;//����������
	}
}

//����
int cmp(const void* e1, const void* e2)
{
	student* stu1 = (student*)e1;
	student* stu2 = (student*)e2;
	return (stu2->score) - (stu1->score);
}

int main()
{
	student stu[MAX_STU] = { 0 };//����ṹ������
	int num = 0;
	printf("��������Ҫ������ٸ�ѧ������Ϣ��\n");
	scanf("%d", &num);

	//��stu�ṹ����������
	input_message(stu, num);

	//��ӡδ�����ͬѧ��Ϣ
	double totalScore = 0;//�����ܳɼ�
	print_to_fail(stu, num, &totalScore);

	//ͳ�Ƴɼ���ߵ�ѧ���ͳɼ���͵�ѧ��
	student maxScore = { 0 };//�ɼ���߷�
	student minScore = { 0 };//�ɼ���ͷ�
	getMaxandMin(stu, num, &maxScore, &minScore);
	printf("�ɼ���ߵ�ѧ���ǣ�%s  �ɼ�Ϊ��%d\n", maxScore.name, maxScore.score);
	printf("�ɼ���͵�ѧ���ǣ�%s  �ɼ�Ϊ��%d\n", minScore.name, minScore.score);
	printf("�༶ƽ����Ϊ��%.2lf\n", totalScore / num);

	//ͳ�Ƹ����׶ε�����
	int grade[5] = { 0 };
	calculate_period_stu(stu, num, grade);
	printf("�����ѧ������Ϊ��%d\n", grade[0]);
	printf("���õ�ѧ������Ϊ��%d\n", grade[1]);
	printf("�еȵ�ѧ������Ϊ��%d\n", grade[2]);
	printf("�����ѧ������Ϊ��%d\n", grade[3]);
	printf("�������ѧ������Ϊ��%d\n", grade[4]);

	//�ɼ��ߵ��ͽ�������
	qsort(stu, num, sizeof(stu[0]), cmp);
	//��������Ϣ
	printf("������ѧ����ϢΪ��\n");
	for (int i = 0; i < num; i++)
	{
		printf("%s %d\n", stu[i].name, stu[i].score);
	}
	return 0;
}