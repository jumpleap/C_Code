#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//������������ȷ���ǣ�A��
//A : ֻ����ѭ�����ں�switch�������ʹ��break���
// ��ȷ
//B : ��break������ѭ�����е�switch�������ʱ����������������switch����壬����ֹѭ�����ִ��
// ���󣬵�break������ѭ���е�switch�����ʱ��ֻ������switch��䣬��ѭ����Ӱ��
//C : continue���������ǣ���ִ���걾��ѭ������ʣ��������ֹѭ�� 
// ����continueֻ����������ѭ����������ֹѭ��
//D : ��while����do - while������޷�ʹ��continue���
//����


//���� for ѭ���Ĵ���Ϊ��D��
//for (int i = 0; i || i++ < 5;);
//A: 0 B : 5 C : 1 D : ����
//���ͣ�i!=0��Ϊ��



//������������ȷ���ǣ�C��
//A : ����do - whileѭ����ѭ�������ֻ����һ����ִ����䣬����ѭ�����ڲ���ʹ�ø������
// ����ѭ������䲻ֻ��һ����ִ����䣬ѭ��������ʹ�ø�����䣨int a = i++;��
//B : do - whileѭ����do��ʼ����while��������while(���ʽ)���治��д�ֺ�
// ������Ҫ�ӷֺţ����ǹ淶
//C : ��do - whileѭ�����У���һ��Ҫ����ʹwhile������ʽ��ֵ��Ϊ��("��")�Ĳ���
// �ԣ������������
//D : do - whileѭ���У������������ʡ��while
//���󣬲���ʡ�ԣ�C���Թ淶



//�躯�� fun ��ʵ�������˵����������ʽ����Ժ����ĵ�������У���ȷ���ǣ�D��
void fun(char ch, float x[]);
float a[10];

//A: fun("asd", a[]);//"asd"���ַ��� 
//B: fun('x', A); //��A�������
//C: fun('68', 2.8); //��68���������ַ�
//D: fun(32, a);//��ȷ


//��c�����У�һ��������д����ֵ���ͣ�Ĭ�ϵķ��������ǣ�A��
//A : int B : char C : void D : ������


//����һ���������� nums ���������Ǵ��� Ψһ�� һ��������� ��
//�����ҳ������е����Ԫ�ز�������Ƿ� ������������ÿ���������ֵ����� ��
//����ǣ��򷵻� ���Ԫ�ص��±� �����򷵻� - 1 ��

//int dominantIndex(int* arr, int len)
//{
//    int max = arr[0];
//    int flag = 0;
//    //��0��ʼ�Ƿ�ֹ����ֻ��һ����
//    for (int i = 0; i < len; i++)
//    {
//        if (max < arr[i])
//        {
//            max = arr[i];//��¼���ֵ
//            flag = i;//��¼���ֵ���±�
//        }
//    }
//
//    for (int i = 0; i < len; i++)
//    {
//        //�ж����ֵ��û�г����������κ���������
//        if ((max < arr[i] * 2) && (flag != i))
//            return -1;
//    }
//    return flag;
//}



//������������ nums1 �� nums2 ������ ���ǵĽ��� ��
//�������е�ÿ��Ԫ��һ���� Ψһ �ġ����ǿ��� ��������������˳�� ��
//��ʾ��
//1 <= nums1.length, nums2.length <= 1000
//0 <= nums1[i], nums2[i] <= 1000


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
{
    int table[1001];
    //Ϊtable������г�ʼ��
    memset(table, 0, sizeof(table));
    //���������е������ֵͬ��Ϊ���ߵĽ���
    int* arr = (int*)malloc(sizeof(int) * nums2Size);
    int count = 0;//���������������ֵͬ

    //��nums2�����е�Ԫ����Ϊtable���±겢��Ϊ1
    for (int i = 0; i < nums2Size; i++)
        table[nums2[i]] = 1;
    //��table�����е�ֵ��nums1�е�ֵ���бȽ�
    for (int i = 0; i < nums1Size; i++)
    {
        if (table[nums1[i]] == 1)
        {
            arr[count] = nums1[i];
            count++;
            table[nums1[i]] = 0;//���ã���ֹ�ظ�����
        }
    }
    *returnSize = count;
    return arr;
}