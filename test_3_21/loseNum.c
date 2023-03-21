#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����һ������ [0, n] �� n ���������� nums ��
�ҳ� [0, n] �����Χ��û�г����������е��Ǹ�����
*/

//��һ���ۼ��ټ�
//int missingNumber(int* nums, int numsSize)
//{
//    int sum = 0;//�ƺ�
//    for (int i = 1; i <= numsSize; i++)
//        sum += i;//1-n�ĺ�
//
//    for (int i = 0; i < numsSize; i++)
//    {
//        sum -= nums[i];//��ȥ�õ�ȱʧ����
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



////�����������Ƚ�
//int missingNumber(int* nums, int numsSize)
//{
//    int i = 0, j = 0;
//    for (i = 0; i <= numsSize; i++)
//    {
//        int flag = 1;//���
//        for (j = 0; j < numsSize; j++)
//        {
//            //�Ƚ��Ƿ����
//            if (i == nums[j])
//            {
//                flag = 0;//�����Ϊ0
//                break;
//            }
//        }
//        if (flag == 1)
//        {
//            return i;//ȱʧ����
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


//��������ϣ��
//int missingNumber(int* nums, int numsSize)
//{
//    int hash[10000] = { 0 };
//
//    //��nums�е�ֵӳ�䵽��ϣ����
//    for (int i = 0; i < numsSize; i++)
//        hash[nums[i]]++;
//
//    for (int i = 0; i <= numsSize; i++)
//    {
//        //�ж��Ǹ�����ȱʧ����
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



////���ģ�λ����
//int missingNumber(int* nums, int numsSize)
//{
//    int ret = 0;
//    for (int i = 0; i <= numsSize; i++)
//        ret ^= i;
//    //���õ�ȱʧ����
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



//���壺����
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
    return numsSize;//�������һ����
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