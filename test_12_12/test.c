#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
	BMIָ��������������ָ�����������ع����������������ƽ���ó������֣�
	��Ŀǰ�����ϳ��õĺ����������ݳ̶��Լ��Ƿ񽡿���һ����׼��
	���磺һ���˵����Ϊ1.75�ף�����Ϊ68ǧ�ˣ�����BMI=68/(1.75^2)=22.2��ǧ��/��^2����
	��BMIָ��Ϊ18.5��23.9ʱ�������������ʾ������ڽ������ա�����ж����彡�������
����������
	һ�У�����һ���˵����أ�ǧ�ˣ�����ߣ��ף����м���һ���ո�ָ���
���������
	һ�У��������Normal(����)��Abnormal(������)��


int main()
{
    double kg, meter;
    double res;
    scanf("%lf %lf", &kg, &meter);

    res = kg / (meter * meter);
    if (res >= 18.5 && res <= 23.9)
        printf("Normal\n");
    else
        printf("Abnormal\n");
    return 0;
}
*/


/*
����
    ���������ϣ�ͨ����3��5��Ϊ����(spring)��6��8��Ϊ�ļ�(summer)��9��11��Ϊ�＾(autumn)��
    12�¡�����2��Ϊ����(winter)����������������Լ��·ݣ������Ӧ�ļ��ڡ�
����������
    ��������ݸ�ʽ�ǹ̶���YYYYMM����ʽ���������ռ4����λ���·�ռ2����λ��
���������
    ����·ݶ�Ӧ�ļ��ڣ���Ӣ�ĵ��ʱ�ʾ��ȫ����Сд��ĸ����


int main()
{
    int reason = 0;
    scanf("%d", &reason);

    reason = reason % 100;

    switch (reason)
    {
        case 3:
        case 4:
        case 5:
            printf("spring\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("summer\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("autumn\n");
            break;
        case 12:
        case 1:
        case 2:
            printf("winter\n");
            break;
        default:
            break;
    }
    return 0;
}
*/


/*
����
    �Ӽ�����������һ���ַ�������ж��Ƿ�����ĸ��������Сд����
����������
    �������һ���ַ���
���������
    ������ַ�����ĸ��YES�����ǣ�NO����


int main()
{
    char ch = '0';
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
*/


/*
����
    �ж�һ������n�Ƿ�������
����������
    ����һ������n ��1��n��2018��
���������
    ���������"yes" �������"no"


int main()
{
    int year = 0;
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}
*/


/*
����
    ţţ�Ӽ����������� x �����ұ߽� l �� r ������������
    �����ж� x �Ƿ��� l �� r ֮�� �����Ƿ����l��x��r ��
����������
    �������� x ��l ��r �����������ÿո������
���������
    �������l��x��r  ����� true ��������� false
*/

int main()
{
    int x, l, r;
    while (scanf("%d %d %d", &x, &l, &r) != EOF)
    {
        if (x >= l && x <= r)
        {
            printf("true\n");
        }
        else
        {
            printf("false\n");
        }
    }
    return 0;
}