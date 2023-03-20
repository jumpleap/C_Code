#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
��дһ��������������һ���޷����������Զ����ƴ�����ʽ����
����������Ʊ��ʽ������λ��Ϊ '1' �ĸ�����Ҳ����Ϊ������������
*/

//��һ��ģ����
//int hammingWeight(unsigned int n)
//{
//    int count = 0;//����1����
//    while (n)
//    {
//        //%�Ľ����1��˵������������1
//        if (n % 2)
//            count++;
//        n /= 2;
//    }
//    return count;
//}
//
//
//int main()
//{
//	unsigned int n = 0;
//	while (scanf("%u", &n) != EOF)
//	{
//        int ret = hammingWeight(n);
//        printf("%d\n", ret);
//	}
//	return 0;
//}



//������λ���㣺������&1
//int hammingWeight(unsigned int n)
//{
//    int count = 0;//��1����
//    //32��λ����Ҫ����32�Σ�ÿ����&1���бȽ�
//    for (int i = 0; i < 32; i++)
//    {
//        //��������1����˵��������λ����1
//        if ((n >> i) & 1)
//            count++;
//    }
//    return count;
//}
//
//
//int main()
//{
//    unsigned int n = 0;
//    while (scanf("%u", &n) != EOF)
//    {
//        int ret = hammingWeight(n);
//        printf("%d\n", ret);
//    }
//    return 0;
//}


//������num = num & (num - 1) --> ȥ�����λ��1
int hammingWeight(unsigned int n)
{
    int count = 0;//��1����
    while (n)
    {
        n = n & (n - 1);//ÿ�ζ�ȥ�����λ��1��֪�����ֵΪ0
        count++;
    }
    return count;
}


int main()
{
    unsigned int n = 0;
    while (scanf("%u", &n) != EOF)
    {
        int ret = hammingWeight(n);
        printf("%d\n", ret);
    }
    return 0;
}