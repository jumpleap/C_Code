#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
	2020�������ˣ�KiKiҪ������nλ������˵n�顱Happy new year!Good luck!����ף���
����������
	����ֻ��һ�У����к���һ�������� n(1��n��20)������KiKi˵ף�����ı�����
���������
	��� n��"Happy new year!Good luck!"��


int main()
{
    int num = 0;
    scanf("%d", &num);

    int i = 0;
    for (i = 0; i < num; i++)
    {
        printf("Happy new year!Good luck!\n");
    }
	return 0;
}
*/


/*
����
    С��������Ӵ�����ͷ��Ŧ����������Ľ��������С���ֺܱ���������������
����������
    ����һ��������n  (1 �� n �� 10^9)
���������
    ���һ��ֵ��Ϊ��ͽ����
*/

int main()
{
    int num = 0;
    long sum = 0;
    scanf("%d", &num);

    int i;
    for (i = 1; i <= num; i++)
    {
        sum += i;
    }
    printf("%ld\n", sum);
    return 0;
}