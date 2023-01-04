#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
    ţţ��ϲ�������ţ������õ�ͨѶ��˾���շѷ������£�
    1.ÿ�������շ�0.1Ԫ
    2.ÿ����Ϣ������������60�֣��������60�֣�������0.2Ԫ�ļ۸��շѡ�
    ţţ����·��� n �����ţ�����ţţһ��Ҫ�ɶ��ٶ��ŷ�
����������
    ��һ������һ�������� n ����ʾ���Ͷ��ŵ�������
    �ڶ������� n ������������ʾţţ���͵� n ��������ÿ�����ŵ�����
���������
    ���ţţ�����Ҫ�ɵĶ��ŷ�


double judge(int word)
{
    double price = 0.1;
    if (word > 60)
        price = 0.2;
    return price;
}

int main()
{
    int n = 0;
    int word = 0;
    double sum = 0;
    scanf("%d", &n);

    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &word);
        double price = judge(word);
        sum += price;
    }
    printf("%.1lf\n", sum);
    return 0;
}
*/



/*
����
    ţţ�ո�ѧ�������Ķ��壺����ֵָ�ڴ���1����Ȼ���У�����1�����������ⲻ����������������Ȼ��
    ţţ��֪���� [l,r] ��Χ��ȫ�������ĺ�
����������
    �������������� l��r ��ʾ�����䷶Χ
���������
    ��� [l,r] ��Χ�ڵ������ĺ�
*/

#include <stdio.h>

int judgePrime(int x)
{
    int i;
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return x;
}

int main()
{
    int l = 0;
    int r = 0;
    int sum = 0;
    scanf("%d %d", &l, &r);

    for (; l <= r; l++)
    {
        int num = judgePrime(l);
        if (num != 0)
        {
            sum += num;
        }
    }

    printf("%d\n", sum);
    return 0;
}