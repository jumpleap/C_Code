#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
������������ left �� right ���ڱ����� [left, right] ��Χ�ڣ�
ͳ�Ʋ����� ������λλ��Ϊ���� ������������
������λλ�� ���Ƕ����Ʊ�ʾ�� 1 �ĸ�����
���磬 21 �Ķ����Ʊ�ʾ 10101 �� 3 ��������λ��
*/

//�����������1�ĸ���
int one_of_bit(int left)
{
    int count = 0;
    while (left)
    {
        left = left & (left - 1);
        count++;
    }
    return count;
}

int countPrimeSetBits(int left, int right)
{
    //32��λ�е�����
    int arr[] = { 2,3,5,7,11,13,17,19,23,29,31 };
    int len = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;//��������

    while (left <= right)
    {
        int count = one_of_bit(left);
        for (int i = 0; i < len; i++)
        {
            //�����sum����
            if (arr[i] == count)
            {
                sum++;
                break;
            }
        }
        left++;
    }
    return sum;
}



/*
����һ���ַ��� s �������ַ����еĴ�д��ĸת������ͬ��Сд��ĸ�������µ��ַ�����
*/

//�ж��ǲ��Ǵ�д��ĸ
char* toLowerCase(char* s)
{
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
    return s;
}

//�⺯�����
char* toLowerCase(char* s)
{
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        //�ж��ǲ��Ǵ�д��ĸ
        if (isupper(s[i]))
        {
            //ת����Сд��ĸ
            s[i] = tolower(s[i]);
        }
    }
    return s;
}