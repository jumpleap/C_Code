#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
	ţţ�Ӽ�������һ�������������ж���������ܱ� 2 3 7 ���ļ������������������������
	������ܱ� 2 3 7 ����һ������������� n��
����������
	����һ������
���������
	����ܱ� 2 3 7 �ļ������������������������
*/

//��һ
/*
int main()
{
    int num = 0;
    while (scanf("%d", &num) != EOF)
    {
        getchar();
        if (num % 2 == 0 || num % 3 == 0 || num % 7 == 0)
        {
            if (num % 2 == 0)
                printf("2 ");
            if (num % 3 == 0)
                printf("3 ");
            if (num % 7 == 0)
                printf("7");
        }
        else
        {
            printf("n\n");
        }
    }
	return 0;
}
*/

//����
int main()
{
    int num = 0;
    int arr[] = { 2,3,7 };
    int i = 0, j = 0;

    while (scanf("%d", &num) != EOF)
    {
        getchar();
        for (i = 0; i < 3; i++)
        {
            if (num % arr[i] == 0)
            {
                printf("%d ", arr[i]);
                j = 1;
            }
        }

        if (j == 0)
        {
            printf("n\n");
        }
    }
    return 0;
}