#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
    �Ȳ����� 2��5��8��11��14������������ 2 ��ʼ�� 3 Ϊ����ĵȲ����У�
    �����Ȳ�����ǰn��͡�
���ݷ�Χ��
    1��n��1000
����������
    ����һ��������n��
���������
    ���һ����Ӻ��������
*/

//int getArithSum(int n)
//{
//    int i = 0;
//    int k = 2;
//    int sum = 0;
//
//    //k�ǲ��Ϊ3�ĵȲ�����
//    for (i = 0, k = 2; i < n; i++, k += 3)
//    {
//        //�ۼ�
//        sum += k;
//    }
//    return sum;//���ؽ��
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//
//    int sum = getArithSum(n);
//    printf("%d\n", sum);
//    return 0;
//}



//��֪������ԭ���ǣ� int fun(char b[10], int* a); 
//�趨�壺 char c[10]; int d; ����ȷ�ĵ�������ǣ�A��

//A: fun(c, &d); B: fun(c, d); C: fun(&c, &d); D: fun(&c, d);



//�������б��ʽ��Щ�ᱻ��������ֹ����ѡ����ABCD��
//int a = 248, b = 4;
//int const* c = 21;
//const int* d = &a;
//int* const e = &b;
//int const* const f = &a;
//A: *c = 32; B: *d = 43 C: e=&a D: f=0x321f

//int main()
//{
//    int a = 248, b = 4;
//    int const* c = 21;
//    const int* d = &a;
//    int* const e = &b;
//    int const* const f = &a;
//
//    //*c = 32;//���󣬲����޸�
//    //*d = 43;//���󣬲����޸�
//    //e = &a;//���󣬲����޸�
//    //f = 0x321f //���󣬲����޸�
//    return 0;
//}


//���³����������Ϊ��***�� 
//int i;
//void prt()
//{
//    //�����iʹ�õ���ȫ�ֱ���
//    for (i = 5; i < 8; i++)
//        printf("%c", '*');//***
//    printf("\t");
//}
//
//int main()
//{
//    for (i = 5; i <= 8; i++)
//        prt();
//    return 0;
//}



//�������ε�����ǣ� ��
//int main()
//{
//    int a = 3;
//    printf("%d\n", (a += a -= a * a));//-12
//    //���ҵ���a*a = 9,a-= 9 --> a = -6  a += -6 ==> a = -6 + (-6)
//    return 0;
//}



/*
����
    ��������Ҫ�������������n��Ȼ������n��������
    ���Ϊn�������и����ĸ�������������������ƽ��ֵ���������һλС����
    0��������������Ҳ���Ǹ�������������㡣���û����������ƽ��ֵΪ0��
���ݷ�Χ
    1��n ��2000  �����������������Oval�O��1000 
����������
    ��������һ��������n��
    Ȼ������n��������
���������
    ��������ĸ�������������������ƽ��ֵ��
*/

int main()
{
    int n = 0;
    int data = 0;
    int count1 = 0;//����������
    int count2 = 0;//���㸺����
    float sum = 0;//�����ܺ�

    scanf("%d", &n);
    while (n)
    {
        scanf("%d", &data);

        //������
        if (data > 0)
        {
            sum += data;//�ۼ�
            count1++;
        }
        //������
        if (data < 0)
            count2++;

        n--;
    }

    //�����������������
    if (count1 == 0)
        printf("%d 0.0\n", count1);
    else
    {
        printf("%d %.1f\n", count2, sum / count1);
    }
    return 0;
}