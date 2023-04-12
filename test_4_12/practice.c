#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

/*
题目链接：https://leetcode.cn/problems/count-the-number-of-consistent-strings/description/

问题描述
给你一个由不同字符组成的字符串 allowed 和一个字符串数组 words 。
如果一个字符串的每一个字符都在 allowed 中，就称这个字符串是 一致字符串 。
请你返回 words 数组中 一致字符串 的数目
*/

int countConsistentStrings(char* allowed, char** words, int wordsSize)
{
	int count = 0;
	for (int i = 0; i < wordsSize; i++)
	{
		bool flag = true;
		for (int j = 0; j < strlen(words[i]); j++)
		{
			//判断allowed中是否均含有words中的字符
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