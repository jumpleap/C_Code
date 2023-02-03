#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
珠玑妙算游戏（the game of master mind）的玩法如下。
计算机有4个槽，每个槽放一个球，
颜色可能是红色（R）、黄色（Y）、绿色（G）或蓝色（B）。
例如，计算机可能有RGGB 4种（槽1为红色，槽2、3为绿色，槽4为蓝色）。
作为用户，你试图猜出颜色组合。打个比方，你可能会猜YRGB。
要是猜对某个槽的颜色，则算一次“猜中”；
要是只猜对颜色但槽位猜错了，则算一次“伪猜中”。
注意，“猜中”不能算入“伪猜中”。
给定一种颜色组合solution和一个猜测guess，编写一个方法，
返回猜中和伪猜中的次数answer，其中answer[0]为猜中的次数，
answer[1]为伪猜中的次数。

提示：
	len(solution) = len(guess) = 4
	solution和guess仅包含"R","G","B","Y"这4种字符
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
//int* masterMind(char* solution, char* guess, int* returnSize) 
//{
//    int guessHash[26] = { 0 }, solutionHash[26] = { 0 }, i;
//    *returnSize = 2;
//    int* res = (int*)malloc(2 * sizeof(int));
//    memset(res, 0, sizeof(res));//初始化
//
//    for (i = 0; i < 4; i++) 
//    {
//        if (solution[i] != guess[i]) 
//        {  
//            // 不相等的才统计
//            guessHash[guess[i] - 65]++;
//            solutionHash[solution[i] - 65]++;
//        }
//        else
//        {
//            // 统计完全猜中的
//            res[0]++;
//        }
//    }
//
//    for (i = 0; i < 26; i++) 
//    {  
//        // 最后计算伪猜中的
//        if (guessHash[i] > 0 && solutionHash[i] > 0) 
//        {
//            res[1] += guessHash[i] > solutionHash[i] ? solutionHash[i] : guessHash[i];
//        }
//    }
//    return res;
//}





/*
描述
	给出一个整型数组 numbers 和一个目标值 target，
	请在数组中找出两个加起来等于目标值的数的下标，返回的下标按升序排列。
	（注：返回的数组下标从1开始算起，保证target一定可以由数组里面2个数字相加得到）
数据范围：
	2≤len(numbers)≤10^5
	0≤target≤10^9
*/

/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 *
 * @param numbers int整型一维数组
 * @param numbersLen int numbers数组长度
 * @param target int整型
 * @return int整型一维数组
 * @return int* returnSize 返回数组行数
 */

int* twoSum(int* numbers, int numbersLen, int target, int* returnSize)
{
    //申请空间
    int* arr = (int*)malloc(sizeof(int) * 2);

    for (int i = 0; i < numbersLen; i++)
    {
        //如果值大于目标，跳过本次循环
        if (numbers[i] > target)
        {
            continue;
        }

        for (int j = i + 1; j < numbersLen; j++)
        {
            //如果和目标值相同
            if (numbers[i] + numbers[j] == target)
            {
                arr[0] = i + 1;
                arr[1] = j + 1;
                *returnSize = 2;
                goto label;//跳出循环
            }
        }
    }
label:
    return arr;
}