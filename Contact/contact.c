#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

//初始化通讯录
void InitContact(Contact* pc)
{
	pc->len = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

//添加联系人
void AddContact(Contact* pc)
{
	if (pc->len == MAX)
	{
		printf("通讯录已满，无法添加~\n");
		return;
	}

	//添加
	printf("请输入联系人姓名：>");
	scanf("%s", pc->data[pc->len].name);
	printf("请输入联系人年龄：>");
	scanf("%d", &(pc->data[pc->len].age));
	printf("请输入联系人性别：>");
	scanf("%s", pc->data[pc->len].gender);
	printf("请输入联系人电话：>");
	scanf("%s", pc->data[pc->len].tele);
	printf("请输入联系人地址：>");
	scanf("%s", pc->data[pc->len].addr);

	pc->len++;
	printf("添加成功\n");
}

//打印通讯录信息
void ShowContact(const Contact* pc)
{
	printf("%-10s %-4s %-4s %-15s %-20s\n", "姓名", "年龄", "性别", "电话", "住址");
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
	return -1;//找不到
}

//删除联系人
void DelContact(Contact* pc)
{
	if (pc->len == 0)
	{
		printf("通讯录为空，无法进行删除！\n");
		return;
	}

	char name[MAX_NAME] = { 0 };
	printf("请输入你要删除的联系人名字：>");
	scanf("%s", name);

	int ret = seacrch_by_name(pc, name);
	if (ret == -1)
	{
		printf("找不到该联系人~\n");
		return;
	}

	for (int j = ret; j < pc->len - 1; j++)
	{
		pc->data[j] = pc->data[j + 1];
	}
	pc->len--;
	printf("删除成功~\n");
}

//查找联系人
void SearchContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入你要查找的联系人姓名：>");
	scanf("%s", name);

	int ret = seacrch_by_name(pc, name);
	if (ret == -1)
	{
		printf("找不到该联系人\n~");
		return;
	}

	printf("该联系人的信息如下：\n");
	printf("%-10s %-4s %-4s %-15s %-20s\n", "姓名", "年龄", "性别", "电话", "住址");
	printf("%-10s %-4d %-4s %-15s %-20s\n",
		pc->data[ret].name, pc->data[ret].age,
		pc->data[ret].gender, pc->data[ret].tele,
		pc->data[ret].addr);
}

//修改联系人信息
void ModifyContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入你要修改的联系人信息的名字：>");
	scanf("%s", name);

	int ret = seacrch_by_name(pc, name);
	if (ret == -1)
	{
		printf("找不到该联系人\n~");
		return;
	}

	//修改信息
	printf("请输入联系人姓名：>");
	scanf("%s", pc->data[ret].name);
	printf("请输入联系人年龄：>");
	scanf("%d", &(pc->data[ret].age));
	printf("请输入联系人性别：>");
	scanf("%s", pc->data[ret].gender);
	printf("请输入联系人电话：>");
	scanf("%s", pc->data[ret].tele);
	printf("请输入联系人地址：>");
	scanf("%s", pc->data[ret].addr);
	
	printf("修改成功！\n");
}


//给联系人进行排序
int cmp_by_name(const void* e1, const void* e2)
{
	return strcmp((*(PeoInfo*)e1).name, (*(PeoInfo*)e2).name);
}

void SortContact(Contact* pc)
{
	qsort(pc->data, pc->len, sizeof(PeoInfo), cmp_by_name);
	printf("排序后的情况如下：\n");
	ShowContact(pc);
}