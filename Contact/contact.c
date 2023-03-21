#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

//��ʼ��ͨѶ¼
void InitContact(Contact* pc)
{
	pc->len = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

//�����ϵ��
void AddContact(Contact* pc)
{
	if (pc->len == MAX)
	{
		printf("ͨѶ¼�������޷����~\n");
		return;
	}

	//���
	printf("��������ϵ��������>");
	scanf("%s", pc->data[pc->len].name);
	printf("��������ϵ�����䣺>");
	scanf("%d", &(pc->data[pc->len].age));
	printf("��������ϵ���Ա�>");
	scanf("%s", pc->data[pc->len].gender);
	printf("��������ϵ�˵绰��>");
	scanf("%s", pc->data[pc->len].tele);
	printf("��������ϵ�˵�ַ��>");
	scanf("%s", pc->data[pc->len].addr);

	pc->len++;
	printf("��ӳɹ�\n");
}

//��ӡͨѶ¼��Ϣ
void ShowContact(const Contact* pc)
{
	printf("%-10s %-4s %-4s %-15s %-20s\n", "����", "����", "�Ա�", "�绰", "סַ");
	for (int i = 0; i < pc->len; i++)
	{
		printf("%-10s %-4d %-4s %-15s %-20s\n",
			pc->data[i].name, pc->data[i].age,
			pc->data[i].gender, pc->data[i].tele,
			pc->data[i].addr);
	}
}

static int seacrch_by_name(const Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->len; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
		{
			return i;
		}
	}
	return -1;//�Ҳ���
}

//ɾ����ϵ��
void DelContact(Contact* pc)
{
	if (pc->len == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�����ɾ����\n");
		return;
	}

	char name[MAX_NAME] = { 0 };
	printf("��������Ҫɾ������ϵ�����֣�>");
	scanf("%s", name);

	int ret = seacrch_by_name(pc, name);
	if (ret == -1)
	{
		printf("�Ҳ�������ϵ��~\n");
		return;
	}

	for (int j = ret; j < pc->len - 1; j++)
	{
		pc->data[j] = pc->data[j + 1];
	}
	pc->len--;
	printf("ɾ���ɹ�~\n");
}

//������ϵ��
void SearchContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("��������Ҫ���ҵ���ϵ��������>");
	scanf("%s", name);

	int ret = seacrch_by_name(pc, name);
	if (ret == -1)
	{
		printf("�Ҳ�������ϵ��\n~");
		return;
	}

	printf("����ϵ�˵���Ϣ���£�\n");
	printf("%-10s %-4s %-4s %-15s %-20s\n", "����", "����", "�Ա�", "�绰", "סַ");
	printf("%-10s %-4d %-4s %-15s %-20s\n",
		pc->data[ret].name, pc->data[ret].age,
		pc->data[ret].gender, pc->data[ret].tele,
		pc->data[ret].addr);
}

//�޸���ϵ����Ϣ
void ModifyContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("��������Ҫ�޸ĵ���ϵ����Ϣ�����֣�>");
	scanf("%s", name);

	int ret = seacrch_by_name(pc, name);
	if (ret == -1)
	{
		printf("�Ҳ�������ϵ��\n~");
		return;
	}

	//�޸���Ϣ
	printf("��������ϵ��������>");
	scanf("%s", pc->data[ret].name);
	printf("��������ϵ�����䣺>");
	scanf("%d", &(pc->data[ret].age));
	printf("��������ϵ���Ա�>");
	scanf("%s", pc->data[ret].gender);
	printf("��������ϵ�˵绰��>");
	scanf("%s", pc->data[ret].tele);
	printf("��������ϵ�˵�ַ��>");
	scanf("%s", pc->data[ret].addr);
	
	printf("�޸ĳɹ���\n");
}


//����ϵ�˽�������
int cmp_by_name(const void* e1, const void* e2)
{
	return strcmp((*(PeoInfo*)e1).name, (*(PeoInfo*)e2).name);
}

void SortContact(Contact* pc)
{
	qsort(pc->data, pc->len, sizeof(PeoInfo), cmp_by_name);
	printf("������������£�\n");
	ShowContact(pc);
}