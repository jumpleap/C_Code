#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	char* s1 = (char*)dest;
//	char* s2 = (char*)src;
//	while (num)
//	{
//		*s1 = *s2;
//		s1++;
//		s2++;
//	}
//	return s1;
//}




//������̨��
//��һ���ݹ�˼��
int jumpFloor(int number)
{
    if (number < 2)
        return 1;
    //ÿ�ξ�������ѡ��
    return jumpFloor(number - 1) + jumpFloor(number - 2);
}

//������ѭ������
int jumpFloor(int number)
{
    int m = 0;
    int n = 1;
    int sum = 1;

    //���е���ѭ��
    while (number)
    {
        sum = m + n;
        m = n;
        n = sum;

        number--;
    }
    return sum;//���ؽ��
}