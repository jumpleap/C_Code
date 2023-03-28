#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_GENDER 5
#define MAX_TELE 20
#define MAX_ADDR 20
#define DEFAULT_MAX 3

enum opt
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	SHOW
};

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char gender[MAX_GENDER];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

typedef struct Contact
{
	PeoInfo *data;
	int len;
	int capacity;
}Contact;


//初始化通讯录
void InitContact(Contact* pc);

//添加联系人
void AddContact(Contact* pc);

//打印通讯录信息
void ShowContact(const Contact* pc);

//删除联系人
void DelContact(Contact* pc);

//查找联系人
void SearchContact(Contact* pc);

//修改联系人信息
void ModifyContact(Contact* pc);

//给联系人进行排序
void SortContact(Contact* pc);

//释放空间
void freeCapacity(Contact* pc);