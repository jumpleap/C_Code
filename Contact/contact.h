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


//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

//�����ϵ��
void AddContact(Contact* pc);

//��ӡͨѶ¼��Ϣ
void ShowContact(const Contact* pc);

//ɾ����ϵ��
void DelContact(Contact* pc);

//������ϵ��
void SearchContact(Contact* pc);

//�޸���ϵ����Ϣ
void ModifyContact(Contact* pc);

//����ϵ�˽�������
void SortContact(Contact* pc);

//�ͷſռ�
void freeCapacity(Contact* pc);