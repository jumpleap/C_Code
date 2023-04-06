#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����һ�������� n ������ 2 �� n ����С������������������
*/

//��һ������
int smallestEvenMultiple(int n)
{
    int flag = 0;
    for (int i = 2; ; i++)
    {
        if (i % 2 == 0 && i % n == 0)
        {
            flag = i;
            break;
        }
    }
    return flag;
}

//��������ѧ
int smallestEvenMultiple(int n)
{
    //�����Ļ���2n��ż���Ļ���n
    return n % 2 == 1 ? 2 * n : n;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = smallestEvenMultiple(n);
    printf("%d\n", ret);
	return 0;
}


/*
�������һ�����Խ����ַ��� command �� Goal ������ ��
command �� "G"��"()" ��/�� "(al)" ��ĳ��˳����ɡ�
Goal �������Ὣ "G" ����Ϊ�ַ��� "G"��"()" ����Ϊ�ַ��� "o" ��
"(al)" ����Ϊ�ַ��� "al" ��Ȼ�󣬰�ԭ˳�򽫾����͵õ����ַ������ӳ�һ���ַ�����
�����ַ��� command ������ Goal ������ �� command �Ľ��ͽ����
*/

char* interpret(char* command)
{
    int len = strlen(command);
    char* arr = (int*)malloc(sizeof(int) * len);

    int j = 0;
    for (int i = 0; i < len; i++)
    {
        //�ж��ǲ���'G'�ַ�
        if (command[i] == 'G')
        {
            arr[j++] = 'G';
        }
        else//����'G'�ַ����������ַ�
        {
            if (command[i + 1] == ')')
            {
                arr[j++] = 'o';
                i++;
            }
            else
            {
                arr[j++] = 'a';
                arr[j++] = 'l';
                i += 3;//�������������ֽ�
            }
        }
    }
    arr[j] = '\0';//���ַ���������־
    return arr;
}


/*
����һ������Ϊ n ���������� nums �����㹹��һ������Ϊ 2n �Ĵ����� ans ��
�����±� �� 0 ��ʼ���� ���������� 0 <= i < n �� i ��������������Ҫ��
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 // int* getConcatenation(int* nums, int numsSize, int* returnSize)
 // {
 //     //���ٿռ�
 //     int* ans = (int*)malloc(sizeof(int) * numsSize * 2);
 //     //��һ�θ�ֵ
 //     for(int i=0; i<numsSize; i++)
 //         ans[i] = nums[i];

        //�ڶ��θ�ֵ
 //     for(int i=numsSize; i<numsSize*2; i++)
 //         ans[i] = nums[i%numsSize];
 //     *returnSize = numsSize * 2;
 //     return ans;
 // }

int* getConcatenation(int* nums, int numsSize, int* returnSize)
{
    //���ٿռ�
    int* ans = (int*)malloc(sizeof(int) * numsSize * 2);
    //һ�α������
    for (int i = 0; i < numsSize * 2; i++)
        ans[i] = nums[i % numsSize];

    *returnSize = numsSize * 2;
    return ans;
}