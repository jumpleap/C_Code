#define _CRT_SECURE_NO_WARNINGS

//����ָ��ĸ��������ǣ�(C)
//
//A.ָ���Ǳ�����������ŵ�ַ
// //��ȷ��ָ����������洢��ַ
//B.ָ������д����Ч��ַ����Ψһָ���ڴ��е�һ������
// //��ȷ
//C.Ұָ��Ҳ��������ʹ��
//D.�ֲ�ָ���������ʼ������Ұָ��
//��ȷ


//����ϵͳ�У�int����ռ�����ֽڣ�ָ��ռ�����ֽڣ�
//����ϵͳ����ʹ�õ�����ڴ�ռ��Ƕ��(C)
//
//A.32λ�£�4, 4, 2 ^ 32 64λ�£�8, 8, 2 ^ 64
//B.32λ�£�4, 4, ������ 64λ�£�4, 8, ������
//C.32λ�£�4, 4, 2 ^ 32 64λ�£�4, 8, 2 ^ 64
//D.32λ�£�4, 4, 2 ^ 32 64λ�£�4, 4, 2 ^ 64


//�������Ľ���ǣ���
//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    //
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);//0 0 3 4 5
//    }
//    return 0;
//}




//��С�˻����У������������Ľ���ǣ��� ��

//#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);//0x00332211
//    return 0;
//}



//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//ָ��arr���׵�ַ
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}



//��ӡ����
/*
     *
   * * *
 * * * * *
   * * *
     *
	
*/
#include <stdio.h>

int main() 
{
	int len = 0;
	scanf("%d", &len);
	for (int i = 0; i < len * 2 - 1; i+=2)
	{
		for (int j = i; j < len * 2; j++)
		{
			printf(" ");
		}

		for (int j = 0; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	for (int i = len; i <= len * 2; i+=2)
	{

		if (len % 2 == 1)
		{
			for (int j = 0; j <= i; j++)
			{
				printf(" ");
			}

			for (int j = i; j <= len * 2 - 1; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		else
		{
			for (int j = 1; j <= i; j++)
			{
				printf(" ");
			}

			for (int j = i; j <= len * 2; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		
	}
	
	return 0;
}