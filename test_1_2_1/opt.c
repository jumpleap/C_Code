#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
    ������������Ҫ��ѡ�糤����������ѡ�˷ֱ���A��B������ÿ��ͬѧ���벢��ֻ��ͶһƱ��
    ���յ�Ʊ�����Ϊ�糤.
����������
    һ�У��ַ����У�����A��B���������ַ�0������
���������
    һ�У�һ���ַ���A��B��E�����A��ʾA��Ʊ���࣬���B��ʾB��Ʊ���࣬���E��ʾ���˵�Ʊ����ȡ�
*/

int main()
{
    char ch = '1';
    int count1 = 0, count2 = 0;//count1ΪA�ļ�Ʊ��count2ΪB�ļ�Ʊ
    int i;
    //�����ch����Ϊ'0'
    for (i = 0; ch != '0'; i++)
    {
        scanf("%c", &ch);
        //�ж��ַ��ǲ���'A'
        if (ch == 'A')
            count1++;
        //�ж��ַ��ǲ���'B'
        if (ch == 'B')
            count2++;
    }

    //���ߵļ�Ʊ�Ƚ�
    if (count1 > count2)
        printf("A\n");
    else if (count1 < count2)
        printf("B\n");
    else
        printf("E\n");
    return 0;
}