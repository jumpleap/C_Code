#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
��дһ���������������ǽ�������ַ�����ת�����������ַ������ַ����� s ����ʽ������
��Ҫ�����������������Ŀռ䣬
�����ԭ���޸��������顢ʹ�� O(1) �Ķ���ռ�����һ���⡣
*/

////��һ��˫ָ��
//void reverseString(char* s, int sSize)
//{
//    //˫ָ��
//    int left = 0;
//    int right = sSize - 1;
//
//    while (left < right)
//    {
//        //����ǰ���ַ�
//        char tmp = s[left];
//        s[left] = s[right];
//        s[right] = tmp;
//
//        left++;
//        right--;
//    }
//}
//
//int main()
//{
//    char arr[100] = "";
//    while (scanf("%s", arr) != EOF)
//    {
//        reverseString(arr,strlen(arr));
//        printf("%s\n", arr);
//    }
//
//	return 0;
//}


//forѭ�����
void reverseString(char* s, int sSize)
{
    for (int i = 0; i < sSize / 2; i++)
    {
        //����ǰ���ַ�
        char tmp = s[i];
        s[i] = s[sSize - 1 - i];
        s[sSize - 1 - i] = tmp;
    }
}

int main()
{
    char arr[100] = "";
    while (scanf("%s", arr) != EOF)
    {
        reverseString(arr, strlen(arr));
        printf("%s\n", arr);
    }

    return 0;
}