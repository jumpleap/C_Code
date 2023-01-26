#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//以下哪个选项可以正确描述 sizeof(double) （A）
//A : 一个整型表达式 
//B : 一个双精度型表达式 
//C : 一个不合法的表达式 
//D : 一种函数调用

//代码解释
//#include <stdio.h>
//
//int main()
//{
//	int len = sizeof(double);
//}



//下列代码运行后的结果是什么（A）
//#include <stdio.h>
//int main()
//{
//	char a = 'a', b;
//	printf("%c,", ++a);//b
//	printf("%c\n", b = a++);//b
//	return 0;
//}
//A: b, b B : b, c C : a, b D : a, c


//以下逗号表达式的值为（B）
//(x = 4 * 5, x * 5), x + 5;
//A: 25 B : 20 C : 100 D : 45

//代码解释
//int main()
//{
//	int x;
//	(x = 4 * 5, x * 5), x + 5;
//	printf("%d\n", x);//20
//}



//自除数 是指可以被它包含的每一位数整除的数。
//例如，128 是一个 自除数 ，因为 128 % 1 == 0，128 % 2 == 0，128 % 8 == 0。
//自除数 不允许包含 0 。
//给定两个整数 left 和 right ，返回一个列表，
//列表的元素是范围[left, right] 内所有的 自除数 。

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize)
{
    //开辟空间
    int* arr = (int*)malloc(sizeof(int) * (right - left));
    int count = 0;//计算有几个自除数

    for (; left <= right; left++)
    {
        int temp = left;//临时变量
        int flag = 1;//标记

        while (temp)
        {
            int x = temp % 10;//得到位数
            //判断条件
            if (x == 0 || left % x)
            {
                flag = 0;
                break;
            }
            temp /= 10;
        }

        if (flag == 1)
        {
            arr[count] = left;//自除数赋给数组
            count++;
        }
    }

    *returnSize = count;//自除数长度
    return arr;

}