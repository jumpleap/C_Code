#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
    С�����Ͽ���Ҫ��n��̨�ף���Ϊ���ȱȽϳ�������ÿ�ο���ѡ����һ�׻��������ף�
    ��ô��һ���ж������߷���
����������
    �������һ������n (1 �� n �� 30)
���������
    ���һ����������С���ֿ����ߵķ�������
*/

//int getCount(int n)
//{
//    //�ж�n��̨���Ƿ�С��2
//    if (n < 2)
//        return 1;
//    //������һ�׺������׵ķ���
//    return getCount(n - 1) + getCount(n - 2);
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    
//    int count = getCount(n);
//    printf("%d\n", count);
//    return 0;
//}



/*
����
    ��дһ������ long long factorial(int n)�����ڼ��� n �Ľ׳ˡ���Ҫ��ʹ�õݹ�ʵ�֣�
����������
    ������������һ������ n ����ΧΪ 1 - 20
���������
    ��� n �Ľ׳�
*/

long long factorial(int n) 
{
    //�ж�
    if (n == 1)
        return 1;
    //�ݹ��
    return n * factorial(n - 1);
}
int main() {

    int n = 0;
    scanf("%d", &n);
    printf("%lld\n", factorial(n));
    return 0;
}