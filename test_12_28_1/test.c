#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
����
    �и����ϵͳ��¼���û���������Ϊ���û�����admin�����룺admin����
    �û������û��������룬�ж��Ƿ��¼�ɹ���
����������
    ����������ݣ�ÿ���������ÿո�ֿ����ַ�������һ��Ϊ�û������ڶ���Ϊ���롣
���������
    ���ÿ������������ݣ����Ϊһ�У�һ���ַ�������Login Success!����Login Fail!������
*/

int main()
{
    char arr1[10], arr2[10];
    while (scanf("%s %s", arr1, arr2) != EOF)
    {
        getchar();//���ջ��з�
        //�ж��û����Ƿ���ͬ
        if (!(strcmp("admin", arr1)))
        {
            //�ж������Ƿ���ͬ
            if ((!strcmp("admin", arr2)))
            {
                printf("Login Success!\n");
            }
            else
            {
                //���벻ͬ
                printf("Login Fail!\n");
            }
        }
        else
        {
            //�û�����ͬ
            printf("Login Fail!\n");
        }
    }
    return 0;
}