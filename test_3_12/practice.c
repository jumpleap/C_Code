#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//�ҵ��ַ����е�һ��ֻ����һ�����ַ�

char firstUniqChar(char* s)
{
    int hash[128] = { 0 };//��ϣ����

    //s�е�ֵӳ�䵽��ϣ�±�
    for (int i = 0; i < strlen(s); i++)
    {
        //��ϣ���±��Ӧֵ����
        hash[s[i]]++;
    }

    for (int i = 0; i < strlen(s); i++)
    {
        //�ҵ���ϣ��ֻ����һ�ε�ֵ
        if (hash[s[i]] == 1)
            return s[i];
    }
    return ' ';//û��ֻ����һ�ε�ֵ
}