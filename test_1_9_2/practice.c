#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

//��д���룬��ʾ����ַ��������ƶ������м���

//void move(char arr1[], char arr2[], int len)
//{
//	int left = 0;
//	int right = len - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		right--;
//		left++;
//		Sleep(1000);//ͣ��һ�����ִ�У���λ�Ǻ��룬��ͷ�ļ�windows.h
//		system("cls");//����
//		printf("%s\n", arr2);
//	}
//}
//
//int main()
//{
//	char arr1[] = "Welcome to my world,my dear!";
//	char arr2[] = "############################";
//	int len = strlen(arr1);
//	
//	move(arr1, arr2, len);
//	return 0;
//}



//��д����ģ���û���¼�����ֻ�ܵ�¼����
int main()
{
	char password[20] = "123456";
	
	for (int i = 1; i <= 3; i++)
	{
		printf("���������룺>");
		scanf("%s", password);

		if (!strcmp(password, "123456"))
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("��¼ʧ�ܣ��㻹��%d�λ���\n", 3 - i);
		}
	}
}