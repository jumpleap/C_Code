#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
����
    �涨һ�ֶ��ڸ��ϴʵļ�д��ʽΪֻ����ÿ����ɵ��ʵ�����ĸ����������ĸ��д����������һ��
    ���� ��College English Test�����Լ�д�ɡ�CET����
    ��Computer Science�����Լ�дΪ��CS������I am Bob����дΪ��IAB��
    ����һ�������ϴʣ���ɵ����� sum,sum��1��sum��100,ÿ�����ʳ���len,len��1��len��50����
    ����������ļ�д
����������
    ����һ�����ϴ�
���������
    ���һ�У���ʾ���ϴʵļ�д


//�ⷨһ���������뷨
int main()
{
    char arr[50];
    //�������һ������
    while (scanf("%s", arr) != EOF)
    {
        //���е�һ����ĸ���жϣ�Сд�Ļ���ȥ32
        if (arr[0] >= 'a' && arr[0] <= 'z')
            arr[0] -= 32;
        printf("%c", arr[0]);//�������ĸ
    }
    return 0;
}
*/


//�ⷨ��
int main()
{
    char arr[5000];
    gets(arr);//���룬���Խ��ܿո�
    int len = strlen(arr);//�������ַ����ĳ���

    int i = 0;
    for (i = 0; i < len; i++)
    {
        //��Сд��ĸȫ��ת��Ϊ��д��ĸ
        if (arr[i] >= 97)
            arr[i] -= 32;
    }

    for (i = 0; i < len; i++)
    {
        //��һ���ַ�
        if (i == 0)
            printf("%c", arr[i]);

        //�ո����ַ�
        if (arr[i] == ' ')
            printf("%c", arr[i + 1]);
    }
    return 0;
}