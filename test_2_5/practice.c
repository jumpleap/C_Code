#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
����һ���ַ������������з�ת���
*/

//��һ�������ӡ
//int main()
//{
//	char arr[100] = "";
//	while (scanf("%s", arr) != EOF)
//	{
//		int len = strlen(arr);
//
//		//�����ӡ
//		for (int i = len - 1; i >= 0; i--)
//		{
//			printf("%c", arr[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//����������λ��
void swap(char* arr, int len)
{
	for (int i = 0; i < len / 2; i++)
	{
		//��β����
		char tmp = arr[len - 1 - i];
		arr[len - 1 - i] = arr[i];
		arr[i] = tmp;
	}
}

int main()
{
	char arr[1000] = "";
	while (scanf("%s", arr) != EOF)
	{
		int len = strlen(arr);

		swap(arr, len);
		printf("%s\n", arr);
	}
	return 0;
}