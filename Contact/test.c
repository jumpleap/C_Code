#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

void menu()
{
	printf("**********************************\n");
	printf("******   1.�����ϵ����Ϣ   ******\n");
	printf("******   2.ɾ����ϵ����Ϣ   ******\n");
	printf("******   3.������ϵ����Ϣ   ******\n");
	printf("******   4.�޸���ϵ����Ϣ   ******\n");
	printf("******   5.������ϵ����Ϣ   ******\n");
	printf("******   6.��ӡͨѶ¼��Ϣ   ******\n");
	printf("******   0.�˳�ͨѶ¼       ******\n");
	printf("**********************************\n");
}

int main()
{
	int option = 0;
	Contact con;
	InitContact(&con);
	do
	{
		menu();
		printf("������Ҫ���еĲ�����>\n");
		scanf("%d", &option);

		switch (option)
		{
			case ADD:
				AddContact(&con);
				break;
			case DEL:
				DelContact(&con);
				break;
			case SEARCH:
				SearchContact(&con);
				break;
			case MODIFY:
				ModifyContact(&con);
				break;
			case SORT:
				SortContact(&con);
				break;
			case SHOW:
				ShowContact(&con);
				break;
			case EXIT:
				freeCapacity(&con);
				printf("�˳�ͨѶ¼\n");
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				break;
		}

	} while (option);
	return 0;
}