#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
	����žų˷��������ʽ��������
����������
	����û������
���������
	����˷������뷽ʽ���������


int main()
{
    int i, j;//˫��ѭ��
    for (i = 1; i < 10; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d*%d=%2d ", j, i, i * j);
        }
        printf("\n");
    }
	return 0;
}
*/


/*
����
    ţţ��ʼѧϰ������ ,��������֪��1-2+3-4...+n��ֵ
����������
    ����һ������n (1 \le n \le 1001��n��100)
���������
    ���һ������
*/

int main()
{
    int n = 0;
    int sum = 0;
    scanf("%d", &n);
    int i, j;
    for (i = 1; i <= n; i++)
    {
        j = i;
        //�����ż������ʹi���-i
        if (j % 2 == 0)
            j = -i;
        sum += j;
    }
    printf("%d\n", sum);
    return 0;
}