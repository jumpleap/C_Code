#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
////const��ָ�������
////1.const �����������͵�ǰ�棬��ָ����ָ��ı��������ݲ��ܸı䣬��ָ���ָ���ܸı�
////2.const �����������͵ĺ��棬��ָ����ָ��ı����������ܸı䣬��ָ���ָ���ܸı�
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//
//	const int* p1 = &a;
//	//ָ����������ݲ��ܸı�
//	//*p1 = 20;
//	//�ܸı�ָ��ı���
//	p1 = &b;
//	printf("%d\n", *p1);//11
//
//	int* const p2 = &a;
//	//ָ������������ܸı�
//	*p2 = 12;
//	printf("%d\n", *p2);//12
//	//���ܸı�ָ��ı���
//	//p2 = &a;
//	return 0;
//}



//#include <stdio.h>
//
////extern�ؼ��ֵ�����
//extern int age;
//
//int main()
//{
//	printf("%d\n", age);//20
//	return 0;
//}



//˳��ṹ
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a + b);
//	return 0;
//}


//��֧�ṹ
//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 9;
//
//	if (a > b)
//	{
//		printf("a > b\n");
//	}
//	else
//	{
//		printf("a < b\n");
//	}
//	return 0;
//}


//ѭ���ṹ
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		printf("believe youself, you can do it!!!\n");
//		i++;
//	}
//	return 0;
//}



//���: �ԷֺŽ����ı��ʽ�����ͽ������
//#include <stdio.h>
//
//int main()
//{
//	"abcdef";//�ֺŽ���
//	int num = 10;//�ֺŽ���
//	return 0;
//}



//���֧��ִ�й���
//#include <stdio.h>
//
//int main()
//{
//	int score = 0;
//	scanf("%d", &score);
//
//	if (score > 0 && score < 60)
//	{
//		printf("�ɼ����ϸ�\n");
//	}
//	else if (score >= 60 && score < 70)
//	{
//		printf("�ɼ�һ��\n");
//	}
//	else if (score >= 70 && score < 80)
//	{
//		printf("�ɼ�����\n");
//	}
//	else if (score >= 80 && score < 90)
//	{
//		printf("�ɼ�����\n");
//	}
//	else if (score >= 90 && score <= 100)
//	{
//		printf("�ɼ�����\n");
//	}
//	else
//	{
//		printf("������ĳɼ���������д����~\n");
//	}
//	return 0;
//}



//switch��case���ص�
//#include <stdio.h>
//
//int main()
//{
//	int weekday = 0;
//	scanf("%d", &weekday);
//	double data = 4;
//	//switch(data){}������ֻ��Ϊ���ͱ��ʽ
//	switch (weekday)
//	{
//		//case 1.0://����case�ĺ���ֻ�ܸ����ͳ���ֵ�����ͳ���ֵ�����ظ�
//		case 1:
//			printf("����һ\n");
//			break;
//		case 2:
//			printf("���ڶ�\n");
//			break;
//		case 3:
//			printf("������\n");
//			break;
//		case 4:
//			printf("������\n");
//			break;
//		case 5:
//			printf("������\n");
//			break;
//		case 6:
//			printf("������\n");
//			break;
//		case 7:
//			printf("������\n");
//			break;
//		default:
//			printf("��������������������²���\n");
//			break;//��ϰ��
//	}
//	return 0;
//}



//break��continue��ѭ���е�����
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d ", i);//0 1 2 3 4
//		i++;
//	}
//
//	i = 0;
//	while (i < 10)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);//0 1 2 3 4 ��ѭ��
//		i++;
//	}
//	return 0;
//}



#include <stdio.h>

//������
void test(void){}

int main()
{
	//���ͼ���
	char a;
	short b;
	int c;
	long d;
	long long e;

	//�����ͼ���
	float f;
	double g;

	//��������
	//struct{};//������Ҫ����еĲ���
	//union{};
	int arr[10];
	enum{};

	//ָ������
	int* p1;
	char* p2;
	float* p3;

	return 0;
}