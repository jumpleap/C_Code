#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
    KiKi��ʼѧϰӢ����ĸ��BoBo��ʦ���������������ĸA(a), E(e), I(i), O(o),U(u)
    ��ΪԪ��������������ĸ��Ϊ�������������д�����ж��������ĸ��Ԫ����Vowel��
    ���Ǹ�����Consonant����
����������
    �������룬ÿ������һ����ĸ��
���������
    ���ÿ�����룬���Ϊһ�У����������ĸ��Ԫ����������Сд���������Vowel����
    ���������ĸ�Ƿ�Ԫ���������Consonant����


int judge(char arr[], char ch)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        if (ch == arr[i])
        {
            return 1;
        }
    }
    return -1;
}

int main()
{
    char ch = '0';
    char arr[] = "AaEeIiOoUu";
    while (scanf("%c", &ch) != EOF)
    {
        getchar();
        int getValue = judge(arr, ch);
        if (getValue == 1)
            printf("Vowel\n");
        else
            printf("Consonant\n");
    }
    return 0;
}
*/


/*
����
    KiKi��֪�����Ŀ��Է����Ƿ�ͨ����������жϡ�
    �Ӽ�����������һ��������ʾ�ķ���������жϸ÷����Ƿ��ڼ���Χ�ڣ�
    ������񣬼����������ڵ���60�֣��������Pass�������������Fail����
����������
    �������룬ÿ���������һ��������ʾ�ķ�����0~100����
���������
    ���ÿ�����룬�����Pass����Fail����
*/

int main()
{
    int score;
    while (scanf("%d", &score) != EOF)
    {
        if (score >= 60)
            printf("Pass\n");
        else
            printf("Fail\n");
    }
    return 0;
}

