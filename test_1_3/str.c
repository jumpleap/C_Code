#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
    ��������Ϊn��ֻ��Сд��ĸ���ַ���s������m�β�����
    ÿ�ν�[l,r]��Χ������c1�ַ��ĳ�c2�������������ַ���
����������
    ��һ��������n,m
    �ڶ���һ���ַ���s
    ֮��m�У�ÿ��������l r�����ַ�c1 c2
���������
    ���һ��һ���ַ���
*/

int main()
{
    int n, m, num1, num2;//nΪ�ַ������ȣ�mΪת��������num1��num2��ת����Χ
    char ch1, ch2;//ch1,ch2��ʹ��ch2�е��ַ��滻ch1���ַ������ַ�
    char arr[100];//�ַ�����
    //����
    scanf("%d %d", &n, &m);
    scanf("%s", arr);
    int i, j;

    //����m��ת��
    for (i = 0; i < m; i++)
    {
        //����ת����Χ��ת����ֵ
        scanf("%d %d %c %c", &num1, &num2, &ch1, &ch2);
        for (j = num1; j <= num2; j++)
        {
            //�ж�ch1�Ƿ����ַ������е��ַ�
            if (ch1 == arr[j - 1])
            {
                arr[j - 1] = ch2;//�����ַ��滻
            }
        }
    }

    printf("%s\n", arr);//���

    return 0;
}