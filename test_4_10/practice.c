#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//��Ŀ���ӣ�https://leetcode.cn/problems/maximum-number-of-words-found-in-sentences/description/

/*
һ�� ���� ��һЩ ���� �Լ�����֮��ĵ����ո���ɣ����ӵĿ�ͷ�ͽ�β�����ж���ո�
����һ���ַ������� sentences ������ sentences[i] ��ʾ���� ���� ��
���㷵�ص��������� ���ʵ������Ŀ ��
*/


int mostWordsFound(char** sentences, int sentencesSize)
{
    int ret = 0;
    for (int i = 0; i < sentencesSize; i++)
    {
        int count = 1;//�ո�ȵ�������1
        for (int j = 0; j < strlen(sentences[i]); j++)
        {
            //���ҿո�
            if (sentences[i][j] == ' ')
                count++;
        }
        //�ж������Ǹ�������
        if (ret < count)
            ret = count;
    }
    return ret;
}