#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
    ��һ������Ϊ n �ķǽ������飬����[1,2,3,4,5]��
    ����������ת������һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ��
    ���һ����ת���飬��������[3,4,5,1,2]������[4,5,1,2,3]�����ġ�
    ���ʣ���������һ����ת���飬�������е���Сֵ��
���ݷ�Χ��
    1��n��10000������������Ԫ�ص�ֵ:0��val��10000
Ҫ��
    �ռ临�Ӷȣ�O(1) ��ʱ�临�Ӷȣ�O(logn)
*/

/**
 *
 * @param rotateArray int����һά����
 * @param rotateArrayLen int rotateArray���鳤��
 * @return int����
 */
//��һ
//int minNumberInRotateArray(int* rotateArray, int rotateArrayLen)
//{
//    int left = 0;
//    for (left = 1; left < rotateArrayLen; left++)
//    {
//        //ֻҪ���ֽ��������Сֵ
//        if (rotateArray[left - 1] > rotateArray[left])
//            return rotateArray[left];
//    }
//    //�޽���
//    return rotateArray[0];
//}

//����������ö��
//int minNumberInRotateArray(int* rotateArray, int rotateArrayLen)
//{
//    int i = 0;
//    int min = rotateArray[0];//�趨��Сֵ
//
//    //�����Ƚ�
//    for (i = 0; i < rotateArrayLen; i++)
//    {
//        if (min > rotateArray[i])
//            min = rotateArray[i];
//    }
//    return min;//������Сֵ
//}


//���������ȷ���壬
//���²���ͳ�Ƴ�һ���������ַ��������������س������ĳ�����ǣ�D��
//A: n = 0; while (ch = getchar() != '\n')n++; 
//B: n = 0; while (getchar() != '\n')n++;
//C: for (n = 0; getchar() != '\n'; n++); 
//D: n = 0; for (ch = getchar(); ch != '\n'; n++);


//�������³��������Ӽ��������� 65 14<�س�> ����������Ϊ��1��
//int main()
//{
//    int m, n;
//    printf("Enter m,n;");
//    scanf("%d%d", &m, &n);
//    while (m != n) //1
//    {
//        //m 51 37 23 9 4 3 2 1
//        //n 14 5 1
//        while (m > n) m = m - n; //2
//        while (n > m) n = n - m; //3
//    }
//    printf("m=%d\n", m);//1
//    return 0;
//}



//���������³���ʱ���Ӽ�������ADescriptor<�س�> ���������������н���ǣ� ��
int main()
{
    char c;
    int v0 = 0, v1 = 0, v2 = 0;
    //      A D e s c r i p t  o r  \n 
    //v0: 0 1 2 3 4 5 6 7 8 9 10 11 12
    //v1: 0 1 1 2 2 2 2 3 3 3 4  4  4
    //v2: 0 1 2 3 4 5 6 7 8 9 10 11 12
    do
    {
        switch (c = getchar())
        {
            case'a':case'A':
            case'e':case'E':
            case'i':case'I':
            case'o':case'O':
            case'u':case'U':v1 += 1;
            default:v0 += 1; v2 += 1;
        }
    } while (c != '\n');
    printf("v0=%d,v1=%d,v2=%d\n", v0, v1, v2); //12 4 12
    return 0;
}