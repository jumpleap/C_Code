#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//typedef unsigned int unit; //���޷�������������Ϊunit
//int main()
//{
//	unit a = 10;
//	printf("%u\n", a);//%u�Ǵ�ӡ�޷�������
//	return 0;
//}


//��̬�ֲ�������ֻ����ʼ��һ�Σ����ų���Ľ�����������ʹ�þֲ��������������ڱ䳤
//����ֻ���ڶ����Լ���{}��ʹ��
//void test(int i)
//{
//	static int j = 10;
//	j++;
//	printf("i = %d j = %d\n", i, j);
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test(i);
//	}
//	return 0;
//}


//ȫ�ֱ��������ⲿ�������ԣ������ļ���ȫ�ֱ��������ǿ���ʹ��extern�ؼ���������
//static����ȫ�ֱ����󣬸�ȫ�ֱ����Ͳ��������ⲿ�������ԣ���ȫ�ֱ���ֻ���ڱ��ļ��ڷ��ʣ�
//extern int sum;
//int main()
//{
//	printf("%d\n", sum);
//	return 0;
//}


//extern int getSum(int, int);//��ΪgetSum(int,int)���ⲿ�������Բ������ˣ������޷������������
//int main()
//{
//	printf("%d\n", getSum(10,20));//�Ҳ���getSum()����
//	return 0;
//}

//#define����ı�ʶ������

//#define MAX 100
//int main()
//{
//	printf("%d\n", MAX);//100
//	return 0;
//}


//#define�����
#define sum(a,b) ((a)+(b))
int main()
{
	printf("%d\n", sum(10, 20));
	return 0;
}