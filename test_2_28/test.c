#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//int main()
//{
//	//sizeof�ڲ��Ǳ��ʽ�Ļ����������������
//	int a = 10;
//	printf("%d\n", a);//10
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(a++));//4
//	printf("%d\n", sizeof(++a));//4
//	printf("%d\n", a);//10,û�н��б��ʽ����
//
//	char c = 8;
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(+c));//4
//	printf("%d\n", sizeof(-c));//4
//
//	short b = 8;
//	printf("%d\n", sizeof(b));//2
//	printf("%d\n", sizeof(+b));//4
//	printf("%d\n", sizeof(-b));//4
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	//1��ǰ��++/--������������ʹ��
//	int i = 10;
//	printf("%d\n", ++i);//11
//	//printf("%d\n", --i);//9
//	
//	//2������++ / --����ʹ�ã�������
//	int a = 10;
//	//printf("%d\n", a++);//10
//	printf("%d\n", a--);//10
//	return 0;
//}


//#include <stdio.h>
//
//typedef unsigned int unit;//��unsigned int�ض���Ϊunit
//
//int main()
//{
//	//ʹ���ض�������ͽ�����������
//	unit num = 10;//�ȼ��� unsigned int num = 10;
//	printf("%u\n", num);//10
//	return 0;
//}


/*
1�����ξֲ�����
���� ʹ�ֲ��������������ڱ䳤��ֻ����ʼ��һ�Σ�����ʼ����һֱ���ڣ�
2������ȫ�ֱ���
����ʹȫ�ֱ���ֻ���ڱ��ļ���ʹ�ã�ȫ�ֱ��������ⲿ�������ԣ�
3�����κ���
����ʹ����ֻ���ڱ��ļ���ʹ��
*/

//#include <stdio.h>
//void test(int i)
//{
//	//static���ξֲ�����
//	static int num = 0;
//	num = i;
//	printf("%d\n", num);
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test(i);
//	}
//
//	return 0;
//}


//#include <stdio.h>
//
//extern int age;//�����ⲿ��ȫ�ֱ���
//
//int main()
//{
//	printf("%d\n", age);//10
//	return 0;
//}


//#include <stdio.h>
//
////static���κ���
//static void test()
//{
//	printf("test~");
//}
//
//int main()
//{
//	test();
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int num = 10;
//	//ָ��������������������ĵ�ַ��
//	int* p = &num;
//	
//	//����ָ���Ƿ��ŵ���num�ĵ�ַ
//	printf("%p\n", &num);
//	printf("%p\n", p);
//	return 0;
//}



//ָ��Ĵ�С
//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}



//#include <stdio.h>
//
//struct Person
//{
//	int age;
//	char gender;
//};
//typedef struct Person Person;
//
//int main()
//{
//	Person person = { 18,'m' };
//	Person* p = &person;
//
//	//�ṹ��ָ����ʳ�Ա���Ե���ʽ
//	//��ʽ1��ʹ��->
//	printf("%d\n", p->age);//
//	printf("%d\n", p->gender);
//	//��ʽ2��(*xx).����
//	printf("%d\n", (*p).age);
//	printf("%c\n", (*p).gender);
//	return 0;
//}


//һ������ֻ����һ��������
//#include <stdio.h>
//
//int main(){}
//int main(){}