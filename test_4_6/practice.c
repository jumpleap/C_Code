#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
给你一个正整数 n ，返回 2 和 n 的最小公倍数（正整数）。
*/

//法一：遍历
int smallestEvenMultiple(int n)
{
    int flag = 0;
    for (int i = 2; ; i++)
    {
        if (i % 2 == 0 && i % n == 0)
        {
            flag = i;
            break;
        }
    }
    return flag;
}

//法二：数学
int smallestEvenMultiple(int n)
{
    //奇数的话是2n，偶数的话是n
    return n % 2 == 1 ? 2 * n : n;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = smallestEvenMultiple(n);
    printf("%d\n", ret);
	return 0;
}


/*
请你设计一个可以解释字符串 command 的 Goal 解析器 。
command 由 "G"、"()" 和/或 "(al)" 按某种顺序组成。
Goal 解析器会将 "G" 解释为字符串 "G"、"()" 解释为字符串 "o" ，
"(al)" 解释为字符串 "al" 。然后，按原顺序将经解释得到的字符串连接成一个字符串。
给你字符串 command ，返回 Goal 解析器 对 command 的解释结果。
*/

char* interpret(char* command)
{
    int len = strlen(command);
    char* arr = (int*)malloc(sizeof(int) * len);

    int j = 0;
    for (int i = 0; i < len; i++)
    {
        //判断是不是'G'字符
        if (command[i] == 'G')
        {
            arr[j++] = 'G';
        }
        else//不是'G'字符就是其他字符
        {
            if (command[i + 1] == ')')
            {
                arr[j++] = 'o';
                i++;
            }
            else
            {
                arr[j++] = 'a';
                arr[j++] = 'l';
                i += 3;//跳过后面三个字节
            }
        }
    }
    arr[j] = '\0';//补字符串结束标志
    return arr;
}


/*
给你一个长度为 n 的整数数组 nums 。请你构建一个长度为 2n 的答案数组 ans ，
数组下标 从 0 开始计数 ，对于所有 0 <= i < n 的 i ，满足下述所有要求：
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 // int* getConcatenation(int* nums, int numsSize, int* returnSize)
 // {
 //     //开辟空间
 //     int* ans = (int*)malloc(sizeof(int) * numsSize * 2);
 //     //第一次赋值
 //     for(int i=0; i<numsSize; i++)
 //         ans[i] = nums[i];

        //第二次赋值
 //     for(int i=numsSize; i<numsSize*2; i++)
 //         ans[i] = nums[i%numsSize];
 //     *returnSize = numsSize * 2;
 //     return ans;
 // }

int* getConcatenation(int* nums, int numsSize, int* returnSize)
{
    //开辟空间
    int* ans = (int*)malloc(sizeof(int) * numsSize * 2);
    //一次遍历解决
    for (int i = 0; i < numsSize * 2; i++)
        ans[i] = nums[i % numsSize];

    *returnSize = numsSize * 2;
    return ans;
}