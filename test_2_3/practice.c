#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����������Ϸ��the game of master mind�����淨���¡�
�������4���ۣ�ÿ���۷�һ����
��ɫ�����Ǻ�ɫ��R������ɫ��Y������ɫ��G������ɫ��B����
���磬�����������RGGB 4�֣���1Ϊ��ɫ����2��3Ϊ��ɫ����4Ϊ��ɫ����
��Ϊ�û�������ͼ�³���ɫ��ϡ�����ȷ�������ܻ��YRGB��
Ҫ�ǲ¶�ĳ���۵���ɫ������һ�Ρ����С���
Ҫ��ֻ�¶���ɫ����λ�´��ˣ�����һ�Ρ�α���С���
ע�⣬�����С��������롰α���С���
����һ����ɫ���solution��һ���²�guess����дһ��������
���ز��к�α���еĴ���answer������answer[0]Ϊ���еĴ�����
answer[1]Ϊα���еĴ�����

��ʾ��
	len(solution) = len(guess) = 4
	solution��guess������"R","G","B","Y"��4���ַ�
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
//int* masterMind(char* solution, char* guess, int* returnSize) 
//{
//    int guessHash[26] = { 0 }, solutionHash[26] = { 0 }, i;
//    *returnSize = 2;
//    int* res = (int*)malloc(2 * sizeof(int));
//    memset(res, 0, sizeof(res));//��ʼ��
//
//    for (i = 0; i < 4; i++) 
//    {
//        if (solution[i] != guess[i]) 
//        {  
//            // ����ȵĲ�ͳ��
//            guessHash[guess[i] - 65]++;
//            solutionHash[solution[i] - 65]++;
//        }
//        else
//        {
//            // ͳ����ȫ���е�
//            res[0]++;
//        }
//    }
//
//    for (i = 0; i < 26; i++) 
//    {  
//        // ������α���е�
//        if (guessHash[i] > 0 && solutionHash[i] > 0) 
//        {
//            res[1] += guessHash[i] > solutionHash[i] ? solutionHash[i] : guessHash[i];
//        }
//    }
//    return res;
//}





/*
����
	����һ���������� numbers ��һ��Ŀ��ֵ target��
	�����������ҳ���������������Ŀ��ֵ�������±꣬���ص��±갴�������С�
	��ע�����ص������±��1��ʼ���𣬱�֤targetһ����������������2��������ӵõ���
���ݷ�Χ��
	2��len(numbers)��10^5
	0��target��10^9
*/

/**
 * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
 *
 *
 * @param numbers int����һά����
 * @param numbersLen int numbers���鳤��
 * @param target int����
 * @return int����һά����
 * @return int* returnSize ������������
 */

int* twoSum(int* numbers, int numbersLen, int target, int* returnSize)
{
    //����ռ�
    int* arr = (int*)malloc(sizeof(int) * 2);

    for (int i = 0; i < numbersLen; i++)
    {
        //���ֵ����Ŀ�꣬��������ѭ��
        if (numbers[i] > target)
        {
            continue;
        }

        for (int j = i + 1; j < numbersLen; j++)
        {
            //�����Ŀ��ֵ��ͬ
            if (numbers[i] + numbers[j] == target)
            {
                arr[0] = i + 1;
                arr[1] = j + 1;
                *returnSize = 2;
                goto label;//����ѭ��
            }
        }
    }
label:
    return arr;
}