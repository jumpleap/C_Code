#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
��������֮��� �������� ָ�������������ֶ�Ӧ������λ��ͬ��λ�õ���Ŀ��
������������ x �� y�����㲢��������֮��ĺ������롣
*/

//��һ��λλ�Ƚϣ���ͬ�����
//int hammingDistance(int x, int y)
//{
//    int count = 0;
//    for (int i = 0; i < 32; i++)
//    {
//        //��ȡÿ��λ��ֵ
//        int num1 = (x >> i) & 1;
//        int num2 = (y >> i) & 1;
//        //��ͬ��ֵ�����
//        if (num1 + num2 == 1)
//            count++;
//    }
//    return count;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	while (scanf("%d %d", &x, &y) != EOF)
//	{
//        int ret = hammingDistance(x, y);
//        printf("%d\n", ret);
//	}
//	return 0;
//}


//���������ѭ��
//int hammingDistance(int x, int y)
//{
//    int count = 0;
//    int ret = x ^ y;//���õ���ͬ��λ
//    for (int i = 0; i < 32; i++)
//    {
//        //�жϲ�ͬ��λ
//        if ((ret >> i) & 1)
//            count++;
//    }
//    return count;
//}
//
//int main()
//{
//    int x = 0;
//    int y = 0;
//    while (scanf("%d %d", &x, &y) != EOF)
//    {
//        int ret = hammingDistance(x, y);
//        printf("%d\n", ret);
//    }
//    return 0;
//}



//����������ʹ��num = num & (num - 1)��ȥ���λ��1
int hammingDistance(int x, int y)
{
    int ret = x ^ y;//�õ���ͬ��λ
    int count = 0;

    while (ret)
    {
        ret = ret & (ret - 1);//��ȥ���λ��1
        count++;
    }
    return count;
}

int main()
{
    int x = 0;
    int y = 0;
    while (scanf("%d %d", &x, &y) != EOF)
    {
        int ret = hammingDistance(x, y);
        printf("%d\n", ret);
    }
    return 0;
}