#define _CRT_SECURE_NO_WARNINGS

/*
��һ���ַ���str�����ݵߵ��������������
���ݷ�Χ��
	1��len(str)��10000
��������:
	����һ���ַ����������пո�
�������:
	���������ַ���
*/

#include <stdio.h>
#include <string.h>

void reverse(char* str, int len)
{
    int left = 0;
    int right = len - 1;

    while (left < right)
    {
        //������β
        char tmp = str[left];
        str[left] = str[right];
        str[right] = tmp;

        left++;
        right--;
    }
}

int main()
{
    char arr[10000] = "";
    //ʹ��gets�����ܽ��պ��ո���ַ���
    gets(arr);

    int len = strlen(arr);//�ַ�������
    reverse(arr, len);
    printf("%s\n", arr);
    return 0;
}