#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int num = 0;
    int i;
    int res = 0;
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        int temp = i;
        res = 0;//ÿ�ζ�Ҫ����
        while (temp > 0)//�ж�ֵ�Ƿ����0
        {
            //�����������ͷ�����һ�������Ե��ų˵�ԭ���Ļ���Ϊ������
            res = res * 10 + temp % 10;
            temp /= 10;
        }

        //�ж��Ƿ��ǻ�����
        if (i == res)
            printf("%d\n", res);
    }
    return 0;
}