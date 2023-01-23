#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//以下对C语言函数的有关描述中，正确的有【多选】（ABC）
//A : 在C语言中，一个函数一般由两个部分组成，它们是函数首部和函数体
//B : 函数的实参和形参可以是相同的名字
//C : 在main()中定义的变量都可以在其它被调函数中直接使用
//D : 在C程序中，函数调用不能出现在表达式语句中
//错误，可以出现在表达式语句中



//在C语言中，以下正确的说法是（A）
//A : 实参和与其对应的形参各占用独立的存储单元
//B : 实参和与其对应的形参共占用一个存储单元
// 错误，形参独自占用空间，但是在被调用的时候才会被实例化
//C : 只有当实参和与其对应的形参同名时才共占用存储单元
// 错误，实参和形参可同名，各占不同的存储空间
//D : 形参是虚拟的，不占用存储单元
//被调用后才会占用内存空间，是占用存储单元的



//在上下文及头文件均正常的情况下，
//下列代码的输出是（A）（注：print 已经声明过）
//void print(char* s);
//
//int main()
//{
//	char str[] = "Geneius";
//	print(str);
//	return 0;
//}
//
//void print(char* s)
//{
//	if (*s)
//	{
//		print(++s);
//		printf("%c", *s);
//	}
//}
//A: suiene B: neius C: run-time error D: suieneG



//对于函数 void f(int x); ，下面调用正确的是（B）
//A : int y = f(9); B: f(9); C: f(f(9)); D: x = f()


//给定 fun 函数如下，那么 fun(10) 的输出结果是（C）
//int fun(int x)
//{
//	return (x == 1) ? 1 : (x + fun(x - 1));
//}
//
//int main()
//{
//	printf("%d\n", fun(10));
//	return 0;
//}
//A: 0 B : 10 C : 55 D : 3628800



/*
描述
	Lily上课时使用字母数字图片教小朋友们学习英语单词，
	每次都需要把这些图片按照大小（ASCII码值从小到大）排列收好。
	请大家给Lily帮忙，通过代码解决。
	Lily使用的图片使用字符"A"到"Z"、"a"到"z"、"0"到"9"表示。
	数据范围：每组输入的字符串长度满足：1≤n≤1000
输入描述：
	一行，一个字符串，字符串中的每个字符表示一张Lily使用的图片。
输出描述：
	Lily的所有图片按照从小到大的顺序输出
*/

//#include <stdio.h>
//#include <string.h>
//
//void bubble_sort(char arr[], int len)
//{
//    int temp = 0;
//    //冒泡排序
//    for (int i = 0; i < len - 1; i++)
//    {
//        for (int j = 0; j < len - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
//
//int main()
//{
//    char str[10001] = "";
//    scanf("%s", str);
//    int len = strlen(str);//计算字符串长度
//
//    bubble_sort(str, len);
//    puts(str);
//    return 0;
//}




/*
给你一个整数数组 nums ，请计算数组的中心下标 。
数组中心下标是数组的一个下标，其左侧所有元素相加的和等于右侧所有元素相加的和。
如果中心下标位于数组最左端，那么左侧数之和视为 0 ，
因为在下标的左侧不存在元素。这一点对于中心下标位于数组最右端同样适用。
如果数组有多个中心下标，应该返回最靠近左边的那一个。
如果数组不存在中心下标，返回 -1 。
*/

int pivotIndex(int* nums, int numsSize)
{
    int total = 0;
    int sum = 0;//左值

    for (int i = 0; i < numsSize; i++)
        total += nums[i];

    for (int i = 0; i < numsSize; i++)
    {
        //判断左值是否等于右值
        if (sum == total - sum - nums[i])
        {
            return i;//中心坐标
        }
        sum += nums[i];
    }
    return -1;//无相等值
}
