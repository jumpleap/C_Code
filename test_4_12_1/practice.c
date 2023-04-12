#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
��Ŀ����
    https://leetcode.cn/problems/zuo-xuan-zhuan-zi-fu-chuan-lcof/description/?orderBy=hot&languageTags=c

��Ŀ��Ϣ
�ַ���������ת�����ǰ��ַ���ǰ������ɸ��ַ�ת�Ƶ��ַ�����β����
�붨��һ������ʵ���ַ�������ת�����Ĺ��ܡ�
���磬�����ַ���"abcdefg"������2���ú�������������ת��λ�õ��Ľ��"cdefgab"��
*/

//��������
char* reverseLeftWords(char* s, int k)
{
    int len = strlen(s);
    k %= len;//��ֹ�������ַ����ȹ���
    int i = 0;
    int j = 0;

    for (i = 0; i < k; i++)
    {
        char tmp = s[0];//ÿ��ȡһ��
        for (j = 0; j < len - 1; j++)
        {
            s[j] = s[j + 1];
        }
        s[j] = tmp;//���뵽���һ��
    }
    return s;
}


//ƴ�ӷ�
char* reverseLeftWords(char* s, int k)
{
    int len = strlen(s);
    char* tmp = (char*)malloc(sizeof(char) * (len + 1));

    strcpy(tmp, s + k);//����������ַ�
    strncat(tmp, s, k);//��ǰ����ַ�����
    strcpy(s, tmp);//���¿�����ȥ
    free(tmp);
    tmp = NULL;
    return s;
}


//��������
void reverse(char* s, int start, int end)
{
    char tmp = 0;
    int left = start;
    int right = end;

    while (left < right)
    {
        tmp = s[left];
        s[left] = s[right];
        s[right] = tmp;

        left++;
        right--;
    }
}

char* reverseLeftWords(char* s, int k)
{
    int len = strlen(s);
    k %= len;
    //ǰ�������:ba
    reverse(s, 0, k - 1);
    //��������:gfedc
    reverse(s, k, len - 1);
    //bagfedc
    //��������:cdefgab
    reverse(s, 0, len - 1);
    return s;
}