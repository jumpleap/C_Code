#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�����е��ظ�������

//��һ������ö��
//int findRepeatNumber(int* nums, int numsSize)
//{
//    for (int i = 0; i < numsSize; i++)
//    {
//        for (int j = i + 1; j < numsSize; j++)
//        {
//            //���бȽ�
//            if (nums[i] == nums[j])
//                return nums[i];
//        }
//    }
//    return -1;
//}


//��������ϣ
//int findRepeatNumber(int* nums, int numsSize)
//{
//    //��ϣ
//    int hash[numsSize];
//    //��ʼ��
//    memset(hash, 0, sizeof(hash));
//
//    //nums�����е�ֵӳ�䵽hash���±꣬ʹhash���±��ֵ����
//    for (int i = 0; i < numsSize; i++)
//        hash[nums[i]]++;
//
//    for (int i = 0; i < numsSize; i++)
//    {
//        //�鿴��ϣ�е�ֵ�Ƿ����1
//        if (hash[nums[i]] > 1)
//            return nums[i];
//    }
//    return -1;//û���ҵ�
//}


//����������
int sort_int(const void* e1, const void* e2)
{
    return *(int*)e1 - *(int*)e2;
}

int findRepeatNumber(int* nums, int numsSize)
{
    //����
    qsort(nums, numsSize, sizeof(nums[0]), sort_int);

    for (int i = 0; i < numsSize; i++)
    {
        //�������Ƚ�
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