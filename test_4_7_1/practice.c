#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

/*
����һ���ַ��� s ��ÿ ���� �������� '|' Ϊ һ�� ��
����֮����һ���͵ڶ��� '|' Ϊһ�ԣ��������͵��ĸ� '|' Ϊһ�ԣ��Դ����ơ�
���㷵�� ���� ���߶�֮�䣬s �� '*' ����Ŀ��
ע�⣬ÿ������ '|' ���� ǡ�� ����һ���ԡ�
*/

//��һ
int countAsterisks(char* s)
{
    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        //�ж�*��
        if (s[i] == '*')
            count++;
        //�ж�|��
        else if (s[i] == '|')
        {
            //������һ��|�Ŵ�
            while (s[++i] != '|');
        }
        else
        {
            ;//�����κδ���
        }
    }
    return count;
}

//����
int countAsterisks(char* s)
{
    int count = 0;
    bool flag = true;//���|��

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '|')
            flag = !flag;//���أ���һ������|�أ��ڶ���������
        else if (s[i] == '*' && flag)
        {
            //ͳ��'*'��
            count++;
        }
        else
        {
            ;//�����κδ���
        }
    }
    return count;
}