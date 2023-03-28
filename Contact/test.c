#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

void menu()
{
	printf("**********************************\n");
	printf("******   1.添加联系人信息   ******\n");
	printf("******   2.删除联系人信息   ******\n");
	printf("******   3.查找联系人信息   ******\n");
	printf("******   4.修改联系人信息   ******\n");
	printf("******   5.排序联系人信息   ******\n");
	printf("******   6.打印通讯录信息   ******\n");
	printf("******   0.退出通讯录       ******\n");
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
		printf("请输入要进行的操作：>\n");
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
				printf("退出通讯录\n");
				break;
			default:
				printf("选择错误，请重新选择\n");
				break;
		}

	} while (option);
	return 0;
}