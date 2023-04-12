#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

/*
��Ŀ���ӣ�https://leetcode.cn/problems/count-the-number-of-consistent-strings/description/

��������
����һ���ɲ�ͬ�ַ���ɵ��ַ��� allowed ��һ���ַ������� words ��
���һ���ַ�����ÿһ���ַ����� allowed �У��ͳ�����ַ����� һ���ַ��� ��
���㷵�� words ������ һ���ַ��� ����Ŀ
*/

int countConsistentStrings(char* allowed, char** words, int wordsSize)
{
	int count = 0;
	for (int i = 0; i < wordsSize; i++)
	{
		bool flag = true;
		for (int j = 0; j < strlen(words[i]); j++)
		{
			//�ж�allowed���Ƿ������words�е��ַ�
			if (strchr(allowed, words[i][j]) == NULL)
			{
				flag = false;
				break;
			}
		}
		if (flag)
			count++;
	}
	return count;
}