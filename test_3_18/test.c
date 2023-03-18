#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����һ������ nums ��һ��ֵ val��
����Ҫ ԭ�� �Ƴ�������ֵ���� val ��Ԫ�أ��������Ƴ���������³��ȡ�
��Ҫʹ�ö��������ռ䣬������ʹ�� O(1) ����ռ䲢 ԭ�� �޸��������顣
Ԫ�ص�˳����Ըı䡣�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�
*/

//����������ָ��
int removeElement(int* nums, int numsSize, int val)
{
    int len = 0;//��ָ��
    //i�ǿ�ָ��
    for (int i = 0; i < numsSize; i++)
    {
        //�ж�ֵ�ǲ���Ϊval
        if (nums[i] != val)
        {
            nums[len] = nums[i];
            len++;
        }
    }
    return len;
}


int main()
{
    int target = 0;
    int arr[100] = { 0 };
    int len = sizeof(arr) / sizeof(arr[0]);
    scanf("%d", &target);
    for (int i = 0; i < len; i++)
        scanf("%d", &arr[i]);

    int ret = removeElement(arr, len, target);
    printf("%d\n", ret);
    return 0;
}