#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
	����10���������ֱ�ͳ����������������ĸ�����
����������
	����10����������Χ-2^31~2^31-1�����ÿո�ָ���
���������
	���У���һ�������������ڶ��и�������
*/

int main()
{
    int arr[10] = { 0 };//�洢10������
    int postive = 0;//�ۼ�������
    int negative = 0;//�ۼƸ�����
    int i = 0;

    printf("������10������\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        //�ж���������Ƿ����0
        if (arr[i] >= 0)
            postive++;
        else
            negative++;
    }
    printf("positive:%d\nnegative:%d\n", postive, negative);
	return 0;
}