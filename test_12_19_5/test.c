#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
	���ţţ�ֻ��˸����У�������㣺1+1/2+1/3+��+1/N��ֵ��(����6λС��)
����������
	����һ����������Χ��0��1000
���������
	���һ��������


int main()
{
    int num = 0;
    double sum = 0;//�ܺ�
    int i;
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        sum += 1.0 / i;
    }
    printf("%.6lf\n", sum);
	return 0;
}
*/


/*
����
    ����ţţ���� 1+��1+2��+��1+2+3��+...+(1+2+3+...+n)
����������
    ����һ������
���������
    ���һ������
*/

int main()
{
    int num = 0;
    int sum = 0;
    int i, j;
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            sum += j;
        }
    }
    printf("%d\n", sum);

    return 0;
}