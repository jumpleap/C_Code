#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
    ����10��������Ҫ������ʱ���������10������ӡ������������������ǰ��������෴��˳���ӡ��10������
����������
    һ�У�����10����������Χ-231~231-1�����ÿո�ָ���
���������
    һ�У�������������10���������ÿո�ָ���


int main()
{
    int arr[10] = { 0 };
    int i;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 9; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/


/*
����
    ��������N��Ȼ������N������������N�����ĺ͡�
����������
    ��һ������һ������N(0��N��50)���ڶ��������ÿո�ָ���N��������
���������
    ���Ϊһ�У�Ϊ�ڶ�������ġ�N������֮�͡��ļ�������


int main()
{
    int len = 0, num = 0;
    int sum = 0;
    int i;
    scanf("%d",&len);
    for(i=0;i<len;i++)
    {
        scanf("%d",&num);
        sum += num;
    }
    printf("%d\n",sum);
    return 0;
}
*/


/*
����
    ����n���ɼ����������n���ɼ�����߷�������ͷ����Ĳ
����������
    ���У���һ��Ϊn����ʾn���ɼ����������10000��
    �ڶ���Ϊn���ɼ���������ʾ����Χ0~100�����Կո������
���������
    һ�У����n���ɼ�����߷�������ͷ����Ĳ
*/

#define SCOPE 10000
int main()
{
    int score[SCOPE] = { 0 };
    int n = 0;
    int high, low;
    int i = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &score[i]);
    }

    high = low = score[0];
    for (i = 0; i < n; i++)
    {
        if (high < score[i])
            high = score[i];
        if (low > score[i])
            low = score[i];
    }
    printf("%d\n", high - low);
    return 0;
}