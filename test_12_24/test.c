#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//ʹ��&��ַ����ȡ�������ĵ�ַ
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);//���뺯����&��ȡnum�����ĵ�ַ�������������num�ĵ�ַ��
//	&num;//ȡ��num�ĵ�ַ
//	//ʹ��%p��ӡ��ַ��Ϣ
//	printf("%p\n", &num);//006FF9E0����ַ���������ÿ�β����ĵ�ַ��ͬ
//	return 0;
//}

//int main()
//{
//	int a = 10;//���ڴ�����4���ֽڵĿռ䴢��10
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//&aȡ����a�ĵ�ַ��ʹ��pa���д���
//	return 0;
//}

//int main()
//{
//	//sizeof���������ͻ������ֽڴ�С
//	printf("char* =%d\n", sizeof(char*));
//	printf("short* =%d\n", sizeof(short*));
//	printf("int* =%d\n", sizeof(int*));
//	printf("long* =%d\n", sizeof(long*));
//	printf("long long* =%d\n", sizeof(long long*));
//	printf("float* =%d\n", sizeof(float*));
//	printf("double* =%d\n", sizeof(double*));
//	return 0;
//}


//struct student
//{
//	char name[12];
//	char sex[3];
//	int age;
//};
//
//int main()
//{
//	struct student stu = { "С��","��",18};//�����ṹ���������ʼ���ṹ�����
//	//��ӡ�ṹ���������Ϣ:ʹ��.ȥ���ʽṹ��ĳ�Ա��Ϣ
//	printf("name = %s sex = %s age = %d\n", stu.name, stu.sex, stu.age);
//	return 0;
//}


struct student
{
	char name[12];
	char sex[3];
	int age;
};

int main()
{
	struct student stu = { "С��","��",18 };//�����ṹ���������ʼ���ṹ�����
	struct student* p = &stu;//ָ��p������stu�ĵ�ַ
	//ʹ�ã�*xx).xx��->ȥ���ʽṹ��ָ��ĳ�Ա��Ϣ
	printf("%s %s %d\n", (*p).name, (*p).sex, (*p).age);
	printf("%s %s %d\n", p->name, p->sex, p->age);
	return 0;
}