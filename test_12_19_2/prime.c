#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
	KiKi֪����ʲô��������ֻ�ܱ�1����������������������������֪��������λ�����У��ж��ٸ�������
����������
	��
���������
	һ�У�һ����������ʾ������λ�����У��ж��ٸ�������

//�ⷨһ�����ú���
int isPrime(int i)
{
    int j;
    for (j = 2; j < i; j++)
    {
        //��������ֱ�ӷ���0
        if (i % j == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int count = 0;
    int i;
    for (i = 100; i < 1000; i++)
    {
        //�����жϣ��������򷵻�1�����Ƿ���0
        if (isPrime(i))
        {
            count++;//��������++
        }
    }
    printf("%d\n", count);
    return 0;
}
*/


//�ⷨ����ʹ��һ���ڱ�����
int main()
{
    int count = 0;
    int i,j;
    int temp = 1;//�ڱ�
    
    for (i = 100; i < 1000; i++)
    {
        temp = 1;//��ʹ�ڱ�����
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                temp = 0;//��������������ڱ�������
        }

        if (temp)
            count++;
    }
    printf("%d\n", count);
    return 0;
}