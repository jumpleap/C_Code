#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����Ļ�����9*9�˷��ھ���
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d\t", j, i, i * j);
//		}
//		printf("\n");//����
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <limits.h>
////��10 �����������ֵ
//int main()
//{
//	int data = 0;
//	int max = INT_MIN;//INT_MIN��int����Сֵ
//
//	for (int i = 1; i <= 10; i++)
//	{
//		scanf("%d", &data);
//		//�����жϴ�С
//		if (data > max)
//		{
//			max = data;
//		}
//	}
//	printf("%d\n", max);
//}



//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//int main()
//{
//	int i = 0;
//	int flag = 1;//�������
//	double sum = 0;//�����ܺ͵�ֵ
//	for (i = 1; i <= 100; i++)
//	{
//		sum += 1.0 / i * flag;
//		flag = -flag;//ʹż������ɸ���
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
int main()
{
	int count = 0;
	for (int i = 1; i <= 100; i++)
	{
		//��λΪ9��ֵ
		if (i % 10 == 9)
			count++;
		//ʮλΪ9��ֵ
		if (i / 10 == 9)
			count++;
	}
	printf("%d\n", count);
}