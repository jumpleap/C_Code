#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
编写一个函数，其作用是将输入的字符串反转过来。输入字符串以字符数组 s 的形式给出。
不要给另外的数组分配额外的空间，
你必须原地修改输入数组、使用 O(1) 的额外空间解决这一问题。
*/

////法一：双指针
//void reverseString(char* s, int sSize)
//{
//    //双指针
//    int left = 0;
//    int right = sSize - 1;
//
//    while (left < right)
//    {
//        //交换前后字符
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


//for循环解决
void reverseString(char* s, int sSize)
{
    for (int i = 0; i < sSize / 2; i++)
    {
        //交换前后字符
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