#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//
//char* reverse_string(char* string)
//{
//	char* left = string;
//	char* right = string + strlen(string) - 1;//��ָ�뵽�ַ������
//
//	while (left < right)
//	{
//		//�����ַ�
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//		left++;//leftָ��ǰ��
//		right--;//rightָ�����
//	}
//	return string;
//}
//
//int main()
//{
//	char str[100] = "";
//	scanf("%s", str);
//	char* arr = reverse_string(str);
//	printf("%s\n", arr);
//	return 0;
//}


//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
#include <stdio.h>

//1)�ݹ�ʵ��strlen
/*
int my_strlen(char* str)
{
	//�ݹ飺û������'\0'
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;//����'\0'
}

int main()
{
	char str[100] = "";
	scanf("%s", str);

	int len = my_strlen(str);
	printf("%d\n", len);
	return 0;
}
*/


//2���ǵݹ�ʵ��strlen

int my_strlen(char* arr)
{
	int count = 0;//������
	
	//�ж��Ƿ�����'\0'
	while (*arr++ != '\0')
	{
		count++;
	}

	return count;
}

int main()
{
	char arr[100] = "";
	scanf("%s", arr);

	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}