#define _CRT_SECURE_NO_WARNINGS
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
//  *
// ***
//*****
// ***
//  *
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() 
//{
//    int line;  // ����������
//    int column;  // ����������
//    int i;  // ��ǰ��
//    int j;  // ��ǰ��
//    scanf("%d", &line);
//
//    // �ж��Ƿ�������
//    if (line % 2 == 0) 
//    {
//        printf("��������������\n");
//        exit(1);
//    }
//    column = line; // ����������������ͬ
//
//    // ����������
//    for (i = 1; i <= line; i++) 
//    {  
//        // �ϰ벿�֣������м�һ�У�
//        if (i < (line + 1) / 2 + 1) 
//        {
//            // �����ϰ벿�ֵ�������
//            for (j = 1; j <= column; j++) 
//            {  
//                if ((column + 1) / 2 - (i - 1) <= j && j <= (column + 1) / 2 + (i - 1)) 
//                {
//                    printf("*");
//                }
//                else 
//                {
//                    printf(" ");
//                }
//            }
//        }
//        else 
//        {  
//            // �°벿��
//            // �����°벿�ֵ�������
//            for (j = 1; j <= column; j++) 
//            { 
//                if ((column + 1) / 2 - (line - i) <= j && j <= (column + 1) / 2 + (line - i)) 
//                {
//                    printf("*");
//                }
//                else 
//                {
//                    printf(" ");
//                }
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}



//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������

//#include <stdio.h>
//#include <math.h>
//
//int getRes()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int count = 0;//����λ��
//		int sum = 0;//�����ܺ�
//		int tmp = i;//��ʱ����
//
//		//�����м�λ
//		while (tmp)
//		{
//			count++;
//			tmp /= 10;
//		}
//
//		tmp = i;//���¸�ֵ
//
//		//ѭ������ÿλ�Ĵη��������ܺ�
//		while (tmp)
//		{
//			int x = tmp % 10;
//			sum += pow(x, count);
//			tmp /= 10;
//		}
//
//		//�ж��Ƿ�Ϊˮ�ɻ���
//		if (i == sum)
//		{
//			printf("%d ", sum);
//		}
//	}
//}
//
//int main()
//{
//	getRes();
//	return 0;
//}



//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222

#include <stdio.h>

int getNumSum(int num)
{
	int sum = num;
	int value = num;
	for (int i = 1; i < 5; i++)
	{
		//ʹ��ÿ����� * 10 + num --> ���õ���һ����
		value = value * 10 + num;
		//����֮ǰ����
		sum += value;
	}
	return sum;
}

int main()
{
	int num = 0;
	scanf("%d", &num);

	int sum = getNumSum(num);
	printf("%d\n", sum);
	return 0;
}