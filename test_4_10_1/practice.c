#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
��Ŀ���ӣ�https://leetcode.cn/problems/first-letter-to-appear-twice/description/

����������
����һ����СдӢ����ĸ��ɵ��ַ��� s �������ҳ������ص�һ������ ���� ����ĸ��
ע�⣺
��� a �� �ڶ��� ���ֱ� b �� �ڶ��� �������ַ����е�λ�ø���ǰ��
����Ϊ��ĸ a ����ĸ b ֮ǰ�������Ρ�
s ��������һ���������ε���ĸ��
*/

char repeatedCharacter(char* s)
{
    int hash[26] = { 0 };//��¼�ַ��±��Ӧ��λ��
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        //���ǰ���Ѿ���������ͬ���ַ���������ַ����ǵ�һ���������ε��ַ�
        if (hash[s[i] - 'a'] > 0)
            return s[i];
        hash[s[i] - 'a'] = 1;//�����ֵ��ַ����
    }
    return ' ';
}

int main()
{
    char arr[10000] = { 0 };
    gets(arr);
    char ret = repeatedCharacter(arr);
    printf("%c\n", ret);
	return 0;
}