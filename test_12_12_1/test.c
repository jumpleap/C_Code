#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

/*
����
	С����ϲ�����֣�����ϲ��0��1�������ڵõ���һ���������ÿλ�������0��1��
	���ĳһλ���������Ͱ������1�������ż������ô�Ͱ������0��
	����ش������õ������Ƕ��١�
����������
	�������һ������n (0 �� n �� 109)
���������
	���һ����������С�����޸ĺ�õ������֡�
ʾ��1
	���룺222222
	�����0
ʾ��2
	���룺123
	�����101
*/

//��һ��ʹ������洢0��1
/*
int main()
{
    int num = 0;
    char arr[10] = { 0 };//ʹ������洢0��1
    int count = 0; //����
    int x = 0, i = 0;
    int res = 0;//���

    scanf("%d", &num);
    while (num)
    {
        x = num % 10;
        if (x % 2 == 0)
        {
            arr[i++] = 0;
        }
        else
        {
            arr[i++] = 1;
        }
        count++;
        num /= 10;
    }

    for (i = count - 1; i >= 0; i--)
    {
        res = res * 10 + arr[i];//�Ӹ�λ��ʼ�����ۼ�
    }
    printf("%d\n", res);
	return 0;
}
*/

//����������һ������һ��
int main()
{
    int num = 0;
    int res = 0;//���
    int i = 0;//�ۼ�λ��

    scanf("%d", &num);
    while (num)
    {
        int x = num % 10;
        if (x % 2 == 0)
            x = 0;
        else
            x = 1;
        res += x * pow(10, i++);//����һ������һ��
        num /= 10;
    }
    printf("%d\n", res);
    return 0;
}