#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
	BoBo��KiKi�ַ��������ַ�������ʾ���ַ����ڴ�����ASCII����ʽ�洢��
	BoBo����һ�������KiKi��ת������ASCII��Ϊ��Ӧ�ַ���������ǡ�
	73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33
����������
	��
���������
	һ�����ת����Ŀ�и���������ASCII���Ӧ���ַ��������Կո������


int main()
{
	printf("%c%c%c%c%c%c%c%c%c%c%c%c\n", 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33);
	return 0;
}
*/


/*
����
	С��������ٷ��Ƴɼ������뽫�ɼ�ת���ɵȼ��ơ�ת������Ϊ��
	90-100Ϊ��A����80-89Ϊ��B����70-79Ϊ��C����60-69Ϊ��D����59����Ϊ��E����
	�������ĳɼ�����0-100֮�䣬�����F����
����������
	һ�У�һ��������ʾ�ĳɼ���
���������
	һ�У�ת����ĵȼ���


int main()
{
    int score = 0;
    char grade = '0';
    printf("������ɼ���\n");
    scanf("%d", &score);

    if (score < 60 && score >= 0)
    {
        grade = 'E';
    }
    else if (score < 70 && score >= 60)
    {
        grade = 'D';
    }
    else if (score < 80 && score >= 70)
    {
        grade = 'C';
    }
    else if (score < 90 && score >= 80)
    {
        grade = 'B';
    }
    else if (score <= 100 && score >= 90)
    {
        grade = 'A';
    }
    else
    {
        grade = 'F';
    }
    printf("�ȼ�Ϊ��%c\n", grade);
    return 0;
}
*/


/*
����
    С���ֻ��4������������������ҵ���������
����������
    һ�У�4���������ÿո�ֿ���
���������
    һ�У�һ��������Ϊ�����4������������������
*/

int getMax(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int a, b, c, d;
    printf("������4��������\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("������Ϊ��%d\n", getMax(a, getMax(b, getMax(c, d))));
    return 0;
}