#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�����ĸ�ѡ�������ȷ���� sizeof(double) ��A��
//A : һ�����ͱ��ʽ 
//B : һ��˫�����ͱ��ʽ 
//C : һ�����Ϸ��ı��ʽ 
//D : һ�ֺ�������

//�������
//#include <stdio.h>
//
//int main()
//{
//	int len = sizeof(double);
//}



//���д������к�Ľ����ʲô��A��
//#include <stdio.h>
//int main()
//{
//	char a = 'a', b;
//	printf("%c,", ++a);//b
//	printf("%c\n", b = a++);//b
//	return 0;
//}
//A: b, b B : b, c C : a, b D : a, c


//���¶��ű��ʽ��ֵΪ��B��
//(x = 4 * 5, x * 5), x + 5;
//A: 25 B : 20 C : 100 D : 45

//�������
//int main()
//{
//	int x;
//	(x = 4 * 5, x * 5), x + 5;
//	printf("%d\n", x);//20
//}



//�Գ��� ��ָ���Ա���������ÿһλ������������
//���磬128 ��һ�� �Գ��� ����Ϊ 128 % 1 == 0��128 % 2 == 0��128 % 8 == 0��
//�Գ��� ��������� 0 ��
//������������ left �� right ������һ���б�
//�б��Ԫ���Ƿ�Χ[left, right] �����е� �Գ��� ��

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize)
{
    //���ٿռ�
    int* arr = (int*)malloc(sizeof(int) * (right - left));
    int count = 0;//�����м����Գ���

    for (; left <= right; left++)
    {
        int temp = left;//��ʱ����
        int flag = 1;//���

        while (temp)
        {
            int x = temp % 10;//�õ�λ��
            //�ж�����
            if (x == 0 || left % x)
            {
                flag = 0;
                break;
            }
            temp /= 10;
        }

        if (flag == 1)
        {
            arr[count] = left;//�Գ�����������
            count++;
        }
    }

    *returnSize = count;//�Գ�������
    return arr;

}