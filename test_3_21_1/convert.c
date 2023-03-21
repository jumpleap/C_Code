#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����һ���������뵽��λС���ķǸ������� celsius ����ʾ�¶ȣ�
�� ���϶ȣ�Celsius��Ϊ��λ��
����Ҫ�����϶�ת��Ϊ ���϶ȣ�Kelvin���� ���϶ȣ�Fahrenheit����
�������� ans = [kelvin, fahrenheit] ����ʽ���ؽ����
�������� ans ����ʵ�ʴ������� 10-5 �Ļ���Ϊ��ȷ�𰸡�
*/


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize)
{
    double* ans = (double*)malloc(sizeof(double) * 2);
    *returnSize = 2;

    double kelvin = celsius + 273.15;//���϶�
    double fahrenheit = celsius * 1.80 + 32.00;//���϶�

    ans[0] = kelvin;
    ans[1] = fahrenheit;
    return ans;//����������ʼ��ַ
}

int main()
{
    double celsius = 0.0;
    while (scanf("%lf", &celsius) != EOF)
    {
        int len = 0;
        double* ret = convertTemperature(celsius, &len);

        //��ӡ
        for (int i = 0; i < len; i++)
        {
            printf("%.5lf\n", ret[i]);
        }
    }

	return 0;
}