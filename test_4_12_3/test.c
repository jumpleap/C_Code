#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STU 100

//定义学生结构体
typedef struct Student
{
	char name[15];
	int score;
}student;

//输入学生信息
void input_message(student* stu, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("请输入第%d个学生的姓名：\n", i + 1);
		scanf("%s", stu[i].name);
		printf("请输入第%d个学生的成绩(0-100)：\n", i + 1);
		scanf("%d", &stu[i].score);
	}
}

//打印成绩不合格的学生
void print_to_fail(student* stu, int num, double* totalSum)
{
	double sum = 0;
	printf("不及格的学生有：\n");
	for (int i = 0; i < num; i++)
	{
		if (stu[i].score < 60)
			printf("%s %d\n", stu[i].name, stu[i].score);
		sum += stu[i].score;
	}
	*totalSum = sum;
}

//获取最高分和最低分
void getMaxandMin(student* stu, int num, student* maxScore, student* minScore)
{
	double sum = 0;

	//把最大最小都设为第一个值
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

//统计各阶段的人数
void calculate_period_stu(student* stu, int num, int* grade)
{
	for (int i = 0; i < num; i++)
	{
		if (stu[i].score >= 90)
			grade[0]++;//优秀人数
		else if (stu[i].score >= 80 && stu[i].score < 90)
			grade[1]++;//良好人数
		else if (stu[i].score >= 70 && stu[i].score < 80)
			grade[2]++;//中等人数
		else if (stu[i].score >= 60 && stu[i].score < 70)
			grade[3]++;//及格人数
		else
			grade[4]++;//不及格人数
	}
}

//排序
int cmp(const void* e1, const void* e2)
{
	student* stu1 = (student*)e1;
	student* stu2 = (student*)e2;
	return (stu2->score) - (stu1->score);
}

int main()
{
	student stu[MAX_STU] = { 0 };//定义结构体数组
	int num = 0;
	printf("请输入你要输入多少个学生的信息：\n");
	scanf("%d", &num);

	//给stu结构体输入数据
	input_message(stu, num);

	//打印未及格的同学信息
	double totalScore = 0;//汇总总成绩
	print_to_fail(stu, num, &totalScore);

	//统计成绩最高的学生和成绩最低的学生
	student maxScore = { 0 };//成绩最高分
	student minScore = { 0 };//成绩最低分
	getMaxandMin(stu, num, &maxScore, &minScore);
	printf("成绩最高的学生是：%s  成绩为：%d\n", maxScore.name, maxScore.score);
	printf("成绩最低的学生是：%s  成绩为：%d\n", minScore.name, minScore.score);
	printf("班级平均分为：%.2lf\n", totalScore / num);

	//统计各个阶段的人数
	int grade[5] = { 0 };
	calculate_period_stu(stu, num, grade);
	printf("优秀的学生人数为：%d\n", grade[0]);
	printf("良好的学生人数为：%d\n", grade[1]);
	printf("中等的学生人数为：%d\n", grade[2]);
	printf("及格的学生人数为：%d\n", grade[3]);
	printf("不及格的学生人数为：%d\n", grade[4]);

	//成绩高到低进行排序
	qsort(stu, num, sizeof(stu[0]), cmp);
	//排序后的信息
	printf("排序后的学生信息为：\n");
	for (int i = 0; i < num; i++)
	{
		printf("%s %d\n", stu[i].name, stu[i].score);
	}
	return 0;
}