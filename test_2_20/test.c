#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char str1[] = "hello bit.";
    char str2[] = "hello bit.";
    char* str3 = "hello bit.";
    char* str4 = "hello bit.";

    //������Ԫ�صĵ�ַ��ͬ
    if (str1 == str2)
        printf("str1 and str2 are same\n");
    else
        printf("str1 and str2 are not same\n");

    //�ַ���������str3��str4���������ַ
    if (str3 == str4)
        printf("str3 and str4 are same\n");
    else
        printf("str3 and str4 are not same\n");

    return 0;
}