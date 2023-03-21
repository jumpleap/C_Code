#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
给定一个包含 [0, n] 中 n 个数的数组 nums ，
找出 [0, n] 这个范围内没有出现在数组中的那个数。
*/

//法一：累加再减
//int missingNumber(int* nums, int numsSize)
//{
//    int sum = 0;//计和
//    for (int i = 1; i <= numsSize; i++)
//        sum += i;//1-n的和
//
//    for (int i = 0; i < numsSize; i++)
//    {
//        sum -= nums[i];//减去得到缺失的数
//    }
//    return sum;
//}
//
//int main()
//{
//    int nums[1000] = { 0 };
//    int len = 0;
//    scanf("%d", &len);
//    for (int i = 0; i < len - 1; i++)
//        scanf("%d", &nums[i]);
//    int ret = missingNumber(nums, len);
//    printf("%d\n", ret);
//	return 0;
//}



////法二：遍历比较
//int missingNumber(int* nums, int numsSize)
//{
//    int i = 0, j = 0;
//    for (i = 0; i <= numsSize; i++)
//    {
//        int flag = 1;//标记
//        for (j = 0; j < numsSize; j++)
//        {
//            //比较是否相等
//            if (i == nums[j])
//            {
//                flag = 0;//相等置为0
//                break;
//            }
//        }
//        if (flag == 1)
//        {
//            return i;//缺失的数
//        }
//    }
//    return -1;
//}
//
//
//int main()
//{
//    int nums[1000] = { 0 };
//    int len = 0;
//    scanf("%d", &len);
//    for (int i = 0; i < len - 1; i++)
//        scanf("%d", &nums[i]);
//    int ret = missingNumber(nums, len);
//    printf("%d\n", ret);
//    return 0;
//}


//法三：哈希表
//int missingNumber(int* nums, int numsSize)
//{
//    int hash[10000] = { 0 };
//
//    //把nums中的值映射到哈希表中
//    for (int i = 0; i < numsSize; i++)
//        hash[nums[i]]++;
//
//    for (int i = 0; i <= numsSize; i++)
//    {
//        //判断那个数是缺失的数
//        if (hash[i] == 0)
//        {
//            return i;
//        }
//    }
//    return -1;
//}
//
//int main()
//{
//    int nums[1000] = { 0 };
//    int len = 0;
//    scanf("%d", &len);
//    for (int i = 0; i < len - 1; i++)
//        scanf("%d", &nums[i]);
//    int ret = missingNumber(nums, len);
//    printf("%d\n", ret);
//    return 0;
//}



////法四：位运算
//int missingNumber(int* nums, int numsSize)
//{
//    int ret = 0;
//    for (int i = 0; i <= numsSize; i++)
//        ret ^= i;
//    //异或得到缺失的数
//    for (int i = 0; i < numsSize; i++)
//        ret ^= nums[i];
//    return ret;
//
//}
//
//int main()
//{
//    int nums[1000] = { 0 };
//    int len = 0;
//    scanf("%d", &len);
//    for (int i = 0; i < len - 1; i++)
//        scanf("%d", &nums[i]);
//    int ret = missingNumber(nums, len);
//    printf("%d\n", ret);
//    return 0;
//}



//法五：排序
int cmp_int(const void* e1, const void* e2)
{
    return *(int*)e1 - *(int*)e2;
}

int missingNumber(int* nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(nums[0]), cmp_int);

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != i)
            return i;
    }
    return numsSize;//返回最后一个数
}

int main()
{
    int nums[1000] = { 0 };
    int len = 0;
    scanf("%d", &len);
    for (int i = 0; i < len - 1; i++)
        scanf("%d", &nums[i]);
    int ret = missingNumber(nums, len);
    printf("%d\n", ret);
    return 0;
}