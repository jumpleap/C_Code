#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	С����ѧУ��ѧ¥�ĵ���ǰ���˺ܶ��ˣ�����ǰ����n�����ڵȵ��ݡ�
	����ÿ�ο��Գ���12�ˣ�ÿ��������Ҫ��ʱ��Ϊ4���ӣ�����Ҫ2���ӣ�����Ҫ2���ӣ���
	�����С���ּ��㻹��Ҫ���ٷ��Ӳ��ܳ˵��ݵ���¥�ϡ����������������1�㣩
*/
int main()
{
    int n = 0;
    int up = 2, sum = 4;
    int res = 0;
    printf("������ǰ�滹�ж����ˣ�\n");
    scanf("%d", &n);

    if (n <= 12)
    {
        res = up;
    }
    else
    {
        n = n / 12;
        res = n * sum + up;
    }
    printf("%d\n", res);
	return 0;
}