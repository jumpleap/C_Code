#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
	�������ֵ�����ָ��ĳһλ�ǡ�9�����������硰2019������199���ȡ�
	����������
��
	���������һ�У�һ����������ʾ1~2019�й��ж��ٸ�����������9��


//��һ
int main()
{
    int i;
    int count = 0;//������
    for (i = 1; i < 2020; i++)
    {
        if (i % 10 == 9)//�жϸ�λ
            count++;
        else if (i / 10 % 10 == 9)//�ж�ʮλ
            count++;
        else if (i / 100 % 10 == 9)//�жϰ�λ
            count++;
    }
    printf("%d\n", count);
	return 0;
}
*/


//����
int main()
{
    int count = 0;
    int i;

    for (i = 1; i < 2020; i++)
    {
        int m = i;
        while (m)
        {
            int x = m % 10;//��ÿһλ���ֽ����ж�
            if (x % 10 == 9)
            {
                count++;
                break;//ֻҪ��һλ����9������ѭ��
            }
            m /= 10;
        }
    }
    printf("%d\n", count);
    return 0;
}