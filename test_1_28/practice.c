#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
问题描述：
	给你一个含 n 个整数的数组 nums ，其中 nums[i] 在区间[1, n] 内。
	请你找出所有在[1, n] 范围内但没有出现在 nums 中的数字，
	并以数组的形式返回结果。
提示：
	n == nums.length
	1 <= n <= 105
	1 <= nums[i] <= n
*/

void input_arr(int* arr, int length)
{
	int i = 0;
	for (i = 0; i < length; i++)
		scanf("%d", &arr[i]);
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize)
{
    //时间复杂度过大(O(N^2))
    // int* arr = (int*)malloc(sizeof(int) * numsSize);
    // int count = 0;

    // for(int i=1; i<=numsSize; i++)
    // {
    //     int flag = 0;
    //     for(int j=0; j<numsSize; j++)
    //     {
    //         if(i == nums[j])
    //         {
    //             flag = 1;//标记
    //             break;
    //         }
    //     }
    //     if(flag == 0)
    //     {
    //         arr[count] = i;
    //         count++;
    //     }
    // }

    // *returnSize = count;
    // return arr;

    /*
    思路：
        定义一个哈希表，使哈希表的长度比nums数组长度多1，把nums数组
        中的每个元素作为哈希表的下标，并把哈希表的值置为1，遍历哈希表，
        找出哈希表中值不为1的数，这个数即是消失的数
    */
    
    //申请空间
    int* arr = (int*)malloc(sizeof(int) * (numsSize + 1));
    memset(arr, 0, sizeof(arr));//初始化

    for (int i = 0; i < numsSize; i++)
        arr[nums[i]] = 1;//记录出现元素

    *returnSize = 0;
    //arr的下标是从1开始的，不从0
    for (int i = 1; i <= numsSize; i++)
    {
        //hash表中的值
        if (arr[i] != 1)
        {
            //记录没有出现的数
            arr[*returnSize] = i;
            (*returnSize)++;
        }
    }
    return arr;
}

int main()
{
	int arr[105] = { 0 };
	int length = 0;
	while (scanf("%d", &length) != EOF)
	{
		input_arr(arr, length);
		int returnSize = 0;
		int* res = findDisappearedNumbers(arr, length, &returnSize);

        for (int i = 0; i < returnSize; i++)
        {
            printf("%d ", res[i]);
        }
        printf("\n");
	}
	return 0;
}