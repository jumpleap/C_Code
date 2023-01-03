#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
    С����ѧ�����Զ��庯����BoBo��ʦ�������˸����⣬�������¹�ʽ����m��ֵ��
    ���㹫ʽ��max3(a+b,b,c) / (max3(a,b+c,c) + max3(a,b,b+c));
    ���� max3����Ϊ���������������ֵ���磺 max3(1, 2, 3) ���ؽ��Ϊ3��
����������
    һ�У����������������ÿո�������ֱ��ʾa, b, c��
���������
    һ�У�һ����������С���㱣��2λ��Ϊ�����m��ֵ��


//���������е����ֵ
int getMax(int a, int b, int c)
{
    return (a > b) ? (a > c ? a : c) : (b > c ? b : c);
}

int main()
{
    int a, b, c;
    double m = 0.0;
    int res1, res2, res3;
    scanf("%d %d %d", &a, &b, &c);//����

    //��3�����ֵ
    res1 = getMax(a + b, b, c);
    res2 = getMax(a, b + c, c);
    res3 = getMax(a, b, b + c);

    //����������1.0��ת��Ϊ������
    m = (res1 * 1.0) / (res2 + res3);
    printf("%.2lf\n", m);
    return 0;
}
*/


/*
����
    ���[a,b]�������ж��ٸ�����λ֮��Ϊ5�ı���
����������
    ����һ�а�����������a,b (1<= a<= b<=1000000)
���������
    ���һ������
*/

//�ó�ÿ��λ�����ĺͲ�����
int judge(int x)
{
    int res = 0;
    while (x != 0)
    {
        int num = x % 10;//��ÿ��λ
        res += num;//��λ���ܺ�
        x /= 10;//��λ
    }
    return res;//����λ��֮��
}

int main()
{
    int a, b;
    int count = 0;
    scanf("%d %d", &a, &b);

    for (; a <= b; a++)
    {
        int ret = judge(a);
        //�ж�ֵ�ǲ���5�ı���
        if (ret % 5 == 0)
            count++;//���м���
    }
    printf("%d\n", count);
    return 0;
}