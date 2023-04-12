#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
��Ŀ���ӣ�https://leetcode.cn/problems/check-if-the-sentence-is-pangram/description/

��Ŀ��Ϣ��
ȫ��ĸ�� ָ����Ӣ����ĸ����ÿ����ĸ����һ�εľ��ӡ�
����һ������СдӢ����ĸ��ɵ��ַ��� sentence �������ж� sentence �Ƿ�Ϊ ȫ��ĸ�� ��
����ǣ����� true �����򣬷��� false ��
*/

bool checkIfPangram(char* sentence)
{
    int hash[26] = { 0 };
    int len = strlen(sentence);

    for (int i = 0; i < len; i++)
    {
        //��sentence�е��ַ���¼��hash�±���
        hash[sentence[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        //������ϣ���飬���Ƿ�26����ĸ�����ַ�
        if (hash[i] == 0)
            return false;
    }
    return true;
}



/*
��Ŀ���ӣ�https://leetcode.cn/problems/split-a-string-in-balanced-strings/description/?orderBy=hot&languageTags=c

��Ŀ��Ϣ��
ƽ���ַ��� �У�'L' �� 'R' �ַ�����������ͬ�ġ�
����һ��ƽ���ַ��� s�����㽫���ָ�ɾ����ܶ�����ַ����������㣺
ÿ�����ַ�������ƽ���ַ�����
���ؿ���ͨ���ָ�õ���ƽ���ַ����� ������� ��
*/

int balancedStringSplit(char* s)
{
    int len = strlen(s);
    int maxBalance = 0;
    int flag = 0;

    for (int i = 0; i < len; i++)
    {
        //��'L'��++
        if (s[i] == 'L')
            flag++;
        //��'R'��--
        if (s[i] == 'R')
            flag--;
        //��־λΪ0��ƽ���ַ����ִ�+1
        if (flag == 0)
            maxBalance++;
    }
    return maxBalance;
}