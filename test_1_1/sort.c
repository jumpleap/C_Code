#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
    ����һ���������У��ж��Ƿ����������У�
    ����ָ�����е�������С����������ߴӴ�С����(��ͬԪ��Ҳ��Ϊ����)��
    ���ݷ�Χ��3��n��50  �����е�ֵ������ 1��val��100
����������
    ��һ������һ������N(3��N��50)��
    �ڶ�������N���������ÿո�ָ�N��������
���������
    ���Ϊһ�У���������������sorted���������unsorted��
*/

int main()
{
    int arr[50] = { 0 };
    int n = 0;
    int flag1 = 0, flag2 = 0;//����������
    int i = 0;
    //��������
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (i > 0)
        {
            if (arr[i] < arr[i - 1])
            {
                flag1 = 1;//ǰ�����С�ں������
            }
            else if (arr[i] > arr[i - 1])
            {
                flag2 = 1;//ǰ��������ں������
            }
        }
    }
    //ǰ������������
    if (flag1 && flag2)
    {
        printf("unsorted\n");
    }
    else
    {
        printf("sorted\n");
    }
    return 0;
}