#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
	����һ���ַ�����һ������ k ����ȡ�ַ�����ǰk���ַ������
���ݷ�Χ��
	�ַ�����������:1��n��1000  ��1��k��n
����������
	1.�������ȡ���ַ���
	2.����һ��������k�������ȡ�ĳ���
���������
	��ȡ����ַ���
*/

int main()
{
    char arr[1000] = "";
    int k = 0;
    scanf("%s", arr);
    scanf("%d", &k);

    for (int i = 0; i < k; i++)
    {
        //�����ӡ�ַ�
        printf("%c", arr[i]);
    }
    return 0;
}