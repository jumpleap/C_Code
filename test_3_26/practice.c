#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

/*
����һ���±�� 0 ��ʼ���������� nums ��
�ж��Ƿ���� ���� ����Ϊ 2 �������������ǵ� �� ��ȡ�
ע�⣬��������������ʼλ�õ��±���� ����ͬ ��
�����������������ڣ��뷵�� true�����򷵻� false ��
������ ��һ��������һ�������ǿյ�Ԫ����ɵ����С�
*/

bool findSubarrays(int* nums, int numsSize)
{
    //����������ĺ�
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < numsSize - 1; i++)
    {
        sum1 = nums[i] + nums[i + 1];//������1�ĺ�
        for (int j = i + 1; j < numsSize - 1; j++)
        {
            sum2 = nums[j] + nums[j + 1];//������2�ĺ�
            //�ж��Ƿ����
            if (sum1 == sum2)
                return true;
        }
    }
    return false;
}

int main()
{
    int arr[1000] = { 0 };
    int len = 0;
    scanf("%d", &len);

    for (int i = 0; i < len; i++)
        scanf("%d", &arr[i]);
    
    int ret = findSubarrays(arr, len);
    return 0;
}