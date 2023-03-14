#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//数组中的重复的数字

//法一：暴力枚举
//int findRepeatNumber(int* nums, int numsSize)
//{
//    for (int i = 0; i < numsSize; i++)
//    {
//        for (int j = i + 1; j < numsSize; j++)
//        {
//            //进行比较
//            if (nums[i] == nums[j])
//                return nums[i];
//        }
//    }
//    return -1;
//}


//法二：哈希
//int findRepeatNumber(int* nums, int numsSize)
//{
//    //哈希
//    int hash[numsSize];
//    //初始化
//    memset(hash, 0, sizeof(hash));
//
//    //nums数组中的值映射到hash的下标，使hash的下标的值自增
//    for (int i = 0; i < numsSize; i++)
//        hash[nums[i]]++;
//
//    for (int i = 0; i < numsSize; i++)
//    {
//        //查看哈希中的值是否大于1
//        if (hash[nums[i]] > 1)
//            return nums[i];
//    }
//    return -1;//没有找到
//}


//法三：排序
int sort_int(const void* e1, const void* e2)
{
    return *(int*)e1 - *(int*)e2;
}

int findRepeatNumber(int* nums, int numsSize)
{
    //排序
    qsort(nums, numsSize, sizeof(nums[0]), sort_int);

    for (int i = 0; i < numsSize; i++)
    {
        //相邻数比较
        if (nums[i] == nums[i + 1])
            return nums[i];
    }
    return -1;
}

int main()
{
    int arr[10] = { 1,2,3,4,5,6,7,3,2,1 };
    int len = sizeof(arr) / sizeof(arr[0]);

    int ret = findRepeatNumber(arr, len);
    printf("%d\n", ret);
	return 0;
}