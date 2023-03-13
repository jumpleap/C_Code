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




//青蛙跳台阶
//法一：递归思想
int jumpFloor(int number)
{
    if (number < 2)
        return 1;
    //每次均有两种选择
    return jumpFloor(number - 1) + jumpFloor(number - 2);
}

//法二：循环迭代
int jumpFloor(int number)
{
    int m = 0;
    int n = 1;
    int sum = 1;

    //进行迭代循环
    while (number)
    {
        sum = m + n;
        m = n;
        n = sum;

        number--;
    }
    return sum;//返回结果
}