#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
 ����һ���ַ��� jewels ����ʯͷ�б�ʯ�����ͣ�
 ����һ���ַ��� stones ������ӵ�е�ʯͷ�� 
 stones ��ÿ���ַ�������һ����ӵ�е�ʯͷ�����ͣ�����֪����ӵ�е�ʯͷ���ж����Ǳ�ʯ��
��ĸ���ִ�Сд����� "a" �� "A" �ǲ�ͬ���͵�ʯͷ��
*/

//����ö�ٱȽ�
int numJewelsInStones(char* jewels, char* stones)
{
    int count = 0;
    for (int i = 0; i < strlen(jewels); i++)
    {
        for (int j = 0; j < strlen(stones); j++)
        {
            //���бȽ�
            if (jewels[i] == stones[j])
            {
                count++;
            }
        }
    }
    return count;
}


//��ϣ��
int numJewelsInStones(char* jewels, char* stones)
{
    int count = 0;
    int hash[128] = { 0 };
    for (int i = 0; i < strlen(stones); i++)
    {
        ++hash[stones[i]];
    }
    for (int i = 0; i < strlen(jewels); i++)
    {
        if (hash[jewels[i]] != 0)
            count += hash[jewels[i]];
    }
    return count;
}