#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
	�������� seconds ������ת����Сʱ�����Ӻ��롣
	���ݷ�Χ�� 0 < seconds < 100000000\0 < seconds < 100000000

int main()
{
    int second = 0;
    int hour = 0, minute = 0;

    while (scanf("%d", &second) != EOF)
    {
        hour = second / 3600; //�õ�Сʱ
        minute = second % 3600 / 60; //�õ���
        second = second % 60; //��
        printf("hour=%d minute=%d second=%d\n", hour, minute, second);
    }
	return 0;
}
*/


/*
����
    СS�����ڿ��Կ�ѧ�����ÿ��İ���
    СY����û�������𣬿�ѧ�������Ӻ��ˡ�
    СS��NOOOOOOOOOOOOOOOO��
    СS֪��ԭ�ƻ�����X��ѧ��֪ͨ��ѧʱ������N�죬���ʿ�ѧ���������ڼ�����������7��ʾ����
����������
    ���������������X��N��1��X��7, 1��N��1000����
���������
    ���һ�����֣���ʾ��ѧ���������ڼ���
*/

int main()
{
    int start = 0, end = 0;
    int sum = 0;
    int fixedDay = 7;
    while (scanf("%d %d", &start, &end) != EOF)
    {
        sum = start + end;
        if (sum % 7)
        {
            printf("%d\n", sum % 7);
        }
        else
        {
            printf("%d\n", fixedDay);
        }
    }
    return 0;
}