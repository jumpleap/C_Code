#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int num = 100;
//
//int main()
//{
//	int x = 10;
//	printf("%d\n", x);
//	{
//		int y = 20;
//		printf("%d\n", y);
//	}
//	//printf("%d\n", y); //����y�Ǿֲ������������������Ǳ������ڵľֲ���Χ
//	printf("%d\n", num);
//	return 0;
//}


//extern int global;
//int main()
//{
//	printf("%d\n", global);
//	return 0;
//}


//void test()
//{
//	int b = 20;
//	printf("%d\n", b);
//}
//
//int main()
//{
//	test();
//	//printf("%d\n", b); ����b�����������������ڵ�{}���������ڳ�{}�����
//	return 0;
//}

//�ܽ�
//1.������
//	�ֲ��������������Ǳ������ڵľֲ���Χ
//	ȫ�ֱ���������������������
//2.��������
//	�ֲ��������������ڣ������������������ڿ�ʼ�����������������ڽ���
//	ȫ�ֱ������������ڣ������������������


//#define MAX 10
//int main()
//{
//	//���泣��
//	3.14;
//	2;
//	'a';
//	"asnh";
//
//	//const���εĳ�������const�ǳ�����
//	const int n = 10; //n��һ�����������Ǿ����˳����ԣ����ܱ��޸�
//	//n = 20; //ʹ��const���εı���������ֵ�������޸�
//	//int arr[n];//��Ȼn�����˳����ԣ��������ϻ��Ǳ��������в���ʹ������Ϊ���ֵĴ�С
//
//  const: const���εĳ�������C������ֻ�����﷨���������˱������ܱ�ֱ���޸ģ������������ϻ��Ǳ��������Խг�����
//	printf("%d\n", MAX);//10
//  int arr[MAX]; //����ʹ��
//	return 0;
//}

//ö�ٳ���
//ע�⣺������һ��ʹ�ô�д
//enum Sex
//{
//	MALE = 3,//Ĭ�ϴ�0��ʼ
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex one = MALE;
//	printf("%d\n", one);
//	printf("%d\n", SECRET);
//
//	//MALE = 3; //����ֱ�Ӹ�ö���еĳ�����ֵ
//	return 0;
//}


//�ַ�������˫������������һ���ַ������ַ�������ֵ������Ϊ�ַ���
//�ַ����Ľ�����־��'\0'���ڼ����ַ������ȵ�ʱ��'\0'�ǽ�����־���������ַ���������
//int main()
//{
//	char arr1[] = "gitee";
//	char arr2[] = { 'g','i','t','e','e'};
//	char arr3[] = { 'g','i','t','e','e','\0' };
//	printf("%s\n", arr1);//gitee
//	printf("%s\n", arr2);//��֪��ʲôʱ������'\0',���Բ���ȷ��
//	printf("%s\n", arr3);//gitee
//	return 0;
//}

#include <string.h>
////ʹ��strlen()�������ַ������� -- ��Ҫͷ�ļ�string.h
//int main()
//{
//	char arr1[] = "gitee";
//	char arr2[] = { 'g','i','t','e','e'};
//	char arr3[] = { 'g','i','t','e','e','\0' };
//	printf("%d\n", strlen(arr1));// 5
//	printf("%d\n", strlen(arr2));//��֪��ʲôʱ������'\0',���Բ���ȷ��
//	printf("%d\n", strlen(arr3)); //5
//	return 0;
//}


//ת���
//int main()
//{
//	printf("hello\nworld!\n"); // \n������
//	printf("hello,\tworld!\n"); // \t:�Ʊ��
//	printf("\\"); //\ --> ��ӡ
//	printf("%s\n", "\""); //��ӡ��һ��"
//	printf("%c\n", '\'');//��ӡ��'
//
//	printf("D:\\C_code\\c-language-code\n"); 
//
//	//�˽��� -- \ddd
//	printf("%d\n", '\123'); //83
//	printf("%c\n", '\045');
//
//	//ʮ������ -- \xdd
//	printf("%d\n", '\x12'); //18
//	return 0;
//}


//int main()
//{
//	printf("%d\n", strlen("abcdef")); //6
//	printf("%d\n", strlen("c:\test\628\test.c")); //14
//	return 0;
//}


int main()
{
	int option = 0;
	printf("���ú��ô�����(1/0):\n");
	scanf("%d", &option);
	if (option == 1)
	{
		printf("���ɹ��ģ�����\n");
	}
	else
	{
		printf("����������Ŷ��Ҫ�ú��ô��룡����\n");
	}
	return 0;
}