#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�ü��̶���һ���ַ���Ȼ������Ļ����ʾ������ַ���ɵ� 3*3 �ľ���
/*
int main()
{
    char c = '0';
    scanf("%c", &c);
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c", c);
        }
        //printf("\n");
        puts("");
    }
	return 0;
}
*/

//ѭ�����룬����һ���ַ���������ַ���Ӧ��ASCII�롣

int main()
{
    char c = '0';
    while (scanf("%c", &c) != EOF)
    {
        getchar(); //�������ջ��з�
        int asc = (int)c;
        printf("%d\n", asc);
    }
    return 0;
}