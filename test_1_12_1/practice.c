#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

/*
����
    �������� n����˳���ӡ���� 1 ������ n λʮ��������
    �������� 3�����ӡ�� 1��2��3 һֱ������ 3 λ�� 999��
    1. �÷���һ�������б��������ӡ
    2. n Ϊ��������0 < n <= 5
*/

int* printNumbers(int n, int* returnSize)
{
    int i = 1;
    int len = pow(10, n);//���鳤��
    //������arr����ռ�
    int* arr = (int*)malloc((len - 1) * sizeof(int));
    for (i = 0; i < len; i++)
    {
        *(arr + i) = i + 1;//��ֵ
    }
    *returnSize = len - 1;//����������Ԫ�ظ���
    return arr;//��������
}

int main()
{
	int n = 0;
    int count = 0;//����Ԫ�ظ���
	scanf("%d", &n);
    //ʹ��ָ����շ���ֵ
    int* str = printNumbers(n, &count);

    //���
    int i = 0;
    for (i = 0; i < count; i++)
        printf("%d ", str[i]);
	return 0;
}