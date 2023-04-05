#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
����һ�ֽ�֧�� 4 �ֲ����� 1 ������ X �ı�����ԣ�
++X �� X++ ʹ���� X ��ֵ �� 1
--X �� X-- ʹ���� X ��ֵ �� 1
�����X ��ֵ�� 0;
����һ���ַ������� operations �������ɲ�����ɵ�һ���б�
����ִ�����в����� X �� ����ֵ ��
*/


//��һ����������
int finalValueAfterOperations(char** operations, int operationsSize) {
    int ret = 0;
    for (int i = 0; i < operationsSize; i++)
    {
        for (int j = 0; j < strlen((operations[i])); j++)
        {
            //�����ַ��������+��������-���
            if (operations[i][j] == '+')
            {
                ret++;
                break;
            }
            else if (operations[i][j] == '-')
            {
                ret--;
                break;
            }
        }
    }
    return ret;
}


//������ʹ��strcmp�⺯�����
int finalValueAfterOperations(char** operations, int operationsSize) {
    int ret = 0;
    for (int i = 0; i < operationsSize; i++)
    {
        char* tmp = operations[i];
        //��++X��X++�Ƚϣ���������������ͣ�������
        if (strcmp(tmp, "++X") == 0 || strcmp(tmp, "X++") == 0)
            ret++;
        else
            ret--;
    }
    return ret;
}