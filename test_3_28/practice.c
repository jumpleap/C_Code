#define _CRT_SECURE_NO_WARNINGS

//模拟实现strncpy
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strncpy(char* dest, const char* src, size_t num)
//{
//	assert(dest && src);
//	char* start = dest;
//
//	while (num--)
//	{
//		*dest++ = *src++;
//	}
//	*dest = '\0';//将最后的空间置为0
//	return start;
//}
//
//int main()
//{
//	char arr1[10] = { 'm','n','o','p','q','r','s','t','u','v'};
//	char arr2[5] = "abcd";
//	char* ret = my_strncpy(arr1, arr2, 2);
//	printf("%s\n", ret);
//	return 0;
//}


//模拟实现strncat
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strncat(char* dest, const char* src, size_t num)
//{
//	assert(dest && src);
//	char* start = dest;
//
//	//遍历到dest的尾部
//	while (*dest)
//		dest++;
//	//赋值
//	while (num--)
//	{
//		*dest++ = *src++;
//	}
//	*dest = '\0';//置为'\0'防止没有结束标志
//	return start;
//}
//
//int main()
//{
//	char arr1[15] = "abcdef";
//	char arr2[6] = "hijkl";
//	char* ret = my_strncat(arr1, arr2, 6);
//	printf("%s\n", ret);
//	return 0;
//}


/*
一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
编写一个函数找出这两个只出现一次的数字。
*/

int* singleNumber(int* nums, int numsSize, int* returnSize)
{
    int* arr = (int*)malloc(sizeof(int) * 2);
    int k = 0;
    for (int i = 0; i < numsSize; i++)
    {
        int count = 0;
        for (int j = 0; j < numsSize; j++)
        {
            //统计每个数字的个数
            if (nums[i] == nums[j])
            {
                count++;
            }
        }
        //找到只有一个的数
        if (count == 1)
        {
            arr[k++] = nums[i];
        }
    }
    *returnSize = 2;
    return arr;
}