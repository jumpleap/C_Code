#define _CRT_SECURE_NO_WARNINGS

//ģ��ʵ��strncpy
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
//	*dest = '\0';//�����Ŀռ���Ϊ0
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


//ģ��ʵ��strncat
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strncat(char* dest, const char* src, size_t num)
//{
//	assert(dest && src);
//	char* start = dest;
//
//	//������dest��β��
//	while (*dest)
//		dest++;
//	//��ֵ
//	while (num--)
//	{
//		*dest++ = *src++;
//	}
//	*dest = '\0';//��Ϊ'\0'��ֹû�н�����־
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
һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
��дһ�������ҳ�������ֻ����һ�ε����֡�
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
            //ͳ��ÿ�����ֵĸ���
            if (nums[i] == nums[j])
            {
                count++;
            }
        }
        //�ҵ�ֻ��һ������
        if (count == 1)
        {
            arr[k++] = nums[i];
        }
    }
    *returnSize = 2;
    return arr;
}