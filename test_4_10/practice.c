#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//题目链接：https://leetcode.cn/problems/maximum-number-of-words-found-in-sentences/description/

/*
一个 句子 由一些 单词 以及它们之间的单个空格组成，句子的开头和结尾不会有多余空格。
给你一个字符串数组 sentences ，其中 sentences[i] 表示单个 句子 。
请你返回单个句子里 单词的最多数目 。
*/


int mostWordsFound(char** sentences, int sentencesSize)
{
    int ret = 0;
    for (int i = 0; i < sentencesSize; i++)
    {
        int count = 1;//空格比单词数少1
        for (int j = 0; j < strlen(sentences[i]); j++)
        {
            //查找空格
            if (sentences[i][j] == ' ')
                count++;
        }
        //判断最大的那个单词数
        if (ret < count)
            ret = count;
    }
    return ret;
}