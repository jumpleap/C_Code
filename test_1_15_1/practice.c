#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void bubble_sort(int arr[], int len)
//{
//	int i = 0;
//	int j = 0;
//
//	//ִ�м���
//	for (i = 0; i < len - 1; i++)
//	{
//		//һ��ִ�м���
//		for (j = 0; j < len - 1 - i; j++)
//		{
//			//ð��˼�룺��������
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
////ʵ��һ�������������ð������
//int main()
//{
//	int arr[10] = { 0 };
//	int len = sizeof(arr) / sizeof(arr[0]);//���鳤��
//
//	//����
//	int i = 0;
//	for (i = 0; i < len; i++)
//		scanf("%d", &arr[i]);
//
//	//ð������
//	bubble_sort(arr, len);
//
//	//���
//	for (i = 0; i < len; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}



//�����������
//int x = 5, y = 7;
//
//void swap()
//{
//	int z;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int x = 3, y = 8;
//
//	swap();
//	printf("%d,%d\n",x, y); //3 8
//	return 0;
//}


//���²���ȷ�Ķ�������ǣ�D��
//A : double x[5] = { 2.0, 4.0, 6.0, 8.0, 10.0 };
//B: char c2[] = { '\x10', '\xa', '\8' };
//C: char c1[] = { '1','2','3','4','5' };
//D: int y[5 + 3] = { 0, 1, 3, 5, 7, 9 };


//int maim()
//{
//	double x[5] = { 2.0, 4.0, 6.0, 8.0, 10.0 };
//	char c1[] = { '1','2','3','4','5' };
//	char c2[] = { '\x10', '\xa', '\8' };
//	int y[5 + 3] = { 0, 1, 3, 5, 7, 9 };
//}



//test.c �ļ��а���������䣬�ļ��ж�����ĸ������У�
//��ָ�����͵ı���Ϊ����ѡ����a��c,d��
//#define INT_PTR int*
//typedef int* int_ptr;
//INT_PTR a, b;
//int_ptr c, d;
//A: a B : b C : c D : d

//�����¶�����䣬����ȷ����������ǡ���ѡ����AB��
//int b;
//char c[10];
//A : scanf("%d%s", &b, &c); B: scanf("%d%s", &b, c);
//C: scanf("%d%s", b, c); D: scanf("%d%s", b, &c);


/*
����
    ��֤��Ƴ�˹���������κ�һ������m������������д��m����������֮�͡�
���磺
    1 ^ 3 = 1
    2 ^ 3 = 3 + 5
    3 ^ 3 = 7 + 9 + 11
    4 ^ 3 = 13 + 15 + 17 + 19
����һ��������m��m��100������m������д��m����������֮�͵���ʽ�����
���ݷ�Χ��1\le m\le 100\1��m��100
���ף�ʱ�临�Ӷȣ�O(m)\O(m) ���ռ临�Ӷȣ�O(1)\O(1)
*/

int main()
{
    int m = 0;
    scanf("%d", &m);

    //�ҵ����ɣ�
    //��ʼ����m * (m - 1) + 1
    //��������m * (m + 1) - 1
    int start = m * (m - 1) + 1;//��ʼ
    int end = m * (m + 1) - 1;//��β

    for (int i = start; i <= end; i += 2)
    {
        //��ӡ
        if (i <= end)
            printf("%d", i);
        if (i < end)
            printf("+");
    }
    return 0;
}