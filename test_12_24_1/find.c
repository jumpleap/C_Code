#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
    ����n��������һ������x��С�������n���������ж�x���ּ��Σ����̰���ʵ�֡�
����������
    ��3��
    ��һ�У�һ����������ʾn��1 <= n <= 100����
    �ڶ��У�������n����������������֮���ÿո�ָ���
    �����У�����һ����������ʾҪ���ҵ�����x��
���������
    һ�У���ʾ����x���ֵĴ���
*/

int main()
{
    int arr[100] = { 0 };
    int n = 0;
    int num = 0;
    int count = 0;//������
    int i = 0;
    //����
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &num);

    for (i = 0; i < n; i++)
    {
        //������������num��ͬ����
        if (num == arr[i])
            count++;
    }
    printf("%d\n", count);
    return 0;
}