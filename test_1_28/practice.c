#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
����������
	����һ���� n ������������ nums ������ nums[i] ������[1, n] �ڡ�
	�����ҳ�������[1, n] ��Χ�ڵ�û�г����� nums �е����֣�
	�����������ʽ���ؽ����
��ʾ��
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
    //ʱ�临�Ӷȹ���(O(N^2))
    // int* arr = (int*)malloc(sizeof(int) * numsSize);
    // int count = 0;

    // for(int i=1; i<=numsSize; i++)
    // {
    //     int flag = 0;
    //     for(int j=0; j<numsSize; j++)
    //     {
    //         if(i == nums[j])
    //         {
    //             flag = 1;//���
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
    ˼·��
        ����һ����ϣ��ʹ��ϣ��ĳ��ȱ�nums���鳤�ȶ�1����nums����
        �е�ÿ��Ԫ����Ϊ��ϣ����±꣬���ѹ�ϣ���ֵ��Ϊ1��������ϣ��
        �ҳ���ϣ����ֵ��Ϊ1�����������������ʧ����
    */
    
    //����ռ�
    int* arr = (int*)malloc(sizeof(int) * (numsSize + 1));
    memset(arr, 0, sizeof(arr));//��ʼ��

    for (int i = 0; i < numsSize; i++)
        arr[nums[i]] = 1;//��¼����Ԫ��

    *returnSize = 0;
    //arr���±��Ǵ�1��ʼ�ģ�����0
    for (int i = 1; i <= numsSize; i++)
    {
        //hash���е�ֵ
        if (arr[i] != 1)
        {
            //��¼û�г��ֵ���
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