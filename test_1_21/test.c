#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����ת������дһ��������ȷ����Ҫ�ı伸��λ���ܽ�����Aת������B��
//int convertInteger(int A, int B)
//{
//    int c = A ^ B;//���õ��������еĲ�ֵͬ
//    int count = 0;
//
//    for (int i = 0; i < 32; i++)
//    {
//        //c & 1��Ϊ1��Ϊ�������еĲ�ֵͬ
//        if (c & 1)
//        {
//            count++;
//        }
//        c >>= 1;//c����
//    }
//    return count;//���ز�ͬ����
//}


//����һ���������� nums ���������Ǵ��� Ψһ�� һ��������� ��
//�����ҳ������е����Ԫ�ز�������Ƿ� ������������ÿ���������ֵ����� ��
//����ǣ��򷵻� ���Ԫ�ص��±� �����򷵻� - 1 ��

int dominantIndex(int* arr, int len)
{
    int max = arr[0];
    int flag = 0;//������ֵ�±꣬��0��ʼ��Ϊ�˷�ֹ����ֻ��1����

    for (int i = 1; i < len; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];//�ҵ����ֵ
            flag = i;//�������ֵ�±�
        }

    }

    for (int i = 0; i < len; i++)
    {
        if (max < (arr[i] * 2) && (i != flag))
            return -1;
    }
    return flag;
}