#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����n���ɼ����������n���ɼ�����߷�������ͷ����Ĳ

����������
���У���һ��Ϊn����ʾn���ɼ����������10000��
�ڶ���Ϊn���ɼ���������ʾ����Χ0~100�����Կո������
*/

/*
//��һ:ʹ������
#define SCOPE 10000
int main()
{
    int score[SCOPE] = { 0 };
    int n = 0;
    int high, low;
    int i = 0;

    printf("��������Ҫ¼��ɼ�������:\n");
    scanf("%d", &n);
    printf("������%d��ѧ���ĳɼ���\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &score[i]);
    }

    high = low = score[0];
    for (i = 0; i < n; i++)
    {
        //����߷ֺ���ͷ�
        if (high < score[i])
            high = score[i];//�߷�
        if (low > score[i])
            low = score[i];//�ͷ�
    }
    printf("%d\n", high - low);
	return 0;
}
*/

//����
int main()
{
    int n = 0;//����
    int max = 0, min = 100;
    int num = 0;
    int i;
    printf("��������Ҫ¼��ɼ�������:\n");
    scanf("%d", &n);
    printf("������%d��ѧ���ĳɼ���\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (max < num)
            max = num;
        if (min > num)
            min = num;
    }
    printf("%d\n", max - min);
    return 0;
}