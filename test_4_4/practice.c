#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int cmp(const void* e1, const void* e2)
{
    return *(int*)e1 - *(int*)e2;
}

int* sortArray(int* nums, int numsSize, int* returnSize)
{
    qsort(nums,numsSize,sizeof(nums[0]),cmp);
    *returnSize = numsSize;
    return nums;
}


 //Ã°ÅÝÅÄÑ°£º³¬Ê±
int* sortArray(int* nums, int numsSize, int* returnSize)
{
    for (int i = 0; i < numsSize - 1; i++)
    {
        int flag = 1;
        for (int j = 0; j < numsSize - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                flag = 0;
                int tmp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = tmp;
            }
        }
        if (flag == 1)
            break;
    }
    *returnSize = numsSize;
    return nums;
}

int main()
{
	int arr[100] = { 0 };
	int len = 0;
	while (scanf("%d", &len) == 1)
	{
        int returnLen = 0;
		for (int i = 0; i < len; i++)
			scanf("%d", &arr[i]);
        int* sort = sortArray(arr, len, &returnLen);
	}
}