#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//ѭ�������ʽ
//int main()
//{
//	//1.whileѭ��
//	//while (����)
//	//{
//	//	���;
//	//}
//
//	//2.do-whileѭ��
//	//do
//	//{
//	//} while (����);
//
//	//forѭ��
//	//for(��ʼֵ;�����ж�;��������){}
//	return 0;
//}

////ʹ������ѭ����ӡ1-10��ֵ
//int main()
//{
//	int i = 1;
//	//whileѭ��
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	printf("\n");
//
//	i = 1;
//	//do-whileѭ��
//	do
//	{
//		printf("%d ", i);
//		i++;
//	}while (i <= 10);
//	printf("\n");
//
//	//forѭ��
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//1��whileѭ����do-whileѭ����forѭ���е������жϲ�Ϊ0��NULL�Ż�ִ����������
//int main()
//{
//	int i = 0;
//	int* p = NULL;
//	while (i) 
//	{
//		printf("haha\n");
//	}
//
//	do
//	{
//		printf("hehe\n");//hehe
//	} while (p);
//
//	for (i = 0; i == 0; i++)
//	{
//		printf("hihi\n");
//	}
//	return 0;
//}


//��ѭ��
//int main()
//{
//	//while����ѭ��
//	while (1){}
//	
//	//do while����ѭ��
//	do
//	{
//	} while (1);
//
//	//forѭ������ѭ��
//	for(;;){}
//
//	//���ͣ�ֻҪҪ�����жϺ�Ϊ�棬��ᵼ����ѭ��
//	return 0;
//}


//break��continue����ʽ
//һ������¾��Ǽӷֺž�ʹ��

//break;//ʹ����switch��ѭ����ʹ��
//continue;//ֻ����ѭ����ʹ��
//int main()
//{
//	//break;
//	//continue;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);// 1 2 3 4
//		i++;
//	}
//	printf("\n");
//
//	i = 1;
//	do
//	{
//		if (i == 4)
//			break;
//		printf("%d ", i);//1 2 3
//		i++;
//	} while (i <= 10);
//	printf("\n");
//
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 4)
//		{
//			break;
//		}
//		printf("%d ", i);//1 2 3
//	}
//	return 0;
//}


////����һ��
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);// 1 2 3 4 ��ѭ��
//		i++;
//	}
//	printf("\n");
//	return 0;
//}
//
//
////�������
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 4)
//			continue;
//		printf("%d ", i);//1 2 3 ��ѭ��
//		i++;
//	} while (i <= 10);
//	printf("\n");
//	return 0;
//}
//
////��������
//int main()
//{
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 4)
//		{
//			continue;//������������󻹻�ִ��i++
//		}
//		printf("%d ", i);//1 2 3 5 6 7 8 9 10
//	}
//	return 0;
//}


////break��switch�е�ʹ��
//int main()
//{
//	int month = 1;
//	scanf("%d", &month);
//
//	switch (month)
//	{
//		case 12:
//		case 1:
//		case 2:
//			printf("����\n");
//			break;
//		case 3:
//		case 4:
//		case 5:
//			printf("����\n");
//			break;
//		case 6:
//		case 7:
//		case 8:
//			printf("�ļ�\n");
//			break;
//		case 9:
//		case 10:
//		case 11:
//			printf("�＾\n");
//			break;
//		default:
//			printf("������·�����\n");
//			break;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int k = 0;
//	//��:ѭ��ִ�ж��ٴΣ�0�Σ�k=0��ֱ������ѭ������Ϊ0Ϊ��
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}


//int main()
//{
//	int i = 1, j = 1, k = 1, m = 1, n = 1;
//	for (i = 1; ;i++)
//	{
//		for (j = 1; ;j++)
//		{
//			for (k = 1; ;k++)
//			{
//				for (m = 1; ;m++)
//				{
//					for (n = 1; ;n++)
//					{
//						goto here;
//					}
//				}
//			}
//		}
//	}
//here:
//	printf("haha\n");
//	return 0;
//}

#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main()
{
	char arr[10] = { 0 };
	system("shutdown -s -t 60");//����60s��ػ�

again:
	printf("������һ���Ӻ�ػ���������룺����pig����ȡ���ػ���\n�����룺");
	scanf("%s", arr);
	if (0 == strcmp("����pig", arr))//�ַ����Ƚ���Ҫʹ��strcmp,����򷵻�0
	{
		system("shutdown -a");//ȡ���ػ�����
	}
	else
	{
		goto again;
	}
	return 0;
}