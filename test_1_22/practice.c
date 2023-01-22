#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//以下叙述中正确的是（A）
//A : 只能在循环体内和switch语句体内使用break语句
// 正确
//B : 当break出现在循环体中的switch语句体内时，其作用是跳出该switch语句体，并中止循环体的执行
// 错误，当break出现在循环中的switch语句中时，只会跳出switch语句，对循环无影响
//C : continue语句的作用是：在执行完本次循环体中剩余语句后，中止循环 
// 错误，continue只会跳过本次循环，不会终止循环
//D : 在while语句和do - while语句中无法使用continue语句
//错误


//下列 for 循环的次数为（D）
//for (int i = 0; i || i++ < 5;);
//A: 0 B : 5 C : 1 D : 无限
//解释：i!=0恒为正



//以下描述中正确的是（C）
//A : 由于do - while循环中循环体语句只能是一条可执行语句，所以循环体内不能使用复合语句
// 错误，循环体语句不只是一条可执行语句，循环体内能使用复合语句（int a = i++;）
//B : do - while循环由do开始，用while结束，在while(表达式)后面不能写分号
// 错误，需要加分号，这是规范
//C : 在do - while循环体中，不一定要有能使while后面表达式的值变为零("假")的操作
// 对，根据情况来看
//D : do - while循环中，根据情况可以省略while
//错误，不可省略，C语言规范



//设函数 fun 和实参数组的说明是如下形式，则对函数的调用语句中，正确的是（D）
void fun(char ch, float x[]);
float a[10];

//A: fun("asd", a[]);//"asd"是字符串 
//B: fun('x', A); //无A这个变量
//C: fun('68', 2.8); //‘68’是两个字符
//D: fun(32, a);//正确


//在c语言中，一个函数不写返回值类型，默认的返回类型是（A）
//A : int B : char C : void D : 都不是


//给你一个整数数组 nums ，其中总是存在 唯一的 一个最大整数 。
//请你找出数组中的最大元素并检查它是否 至少是数组中每个其他数字的两倍 。
//如果是，则返回 最大元素的下标 ，否则返回 - 1 。

//int dominantIndex(int* arr, int len)
//{
//    int max = arr[0];
//    int flag = 0;
//    //从0开始是防止数组只有一个数
//    for (int i = 0; i < len; i++)
//    {
//        if (max < arr[i])
//        {
//            max = arr[i];//记录最大值
//            flag = i;//记录最大值的下标
//        }
//    }
//
//    for (int i = 0; i < len; i++)
//    {
//        //判断最大值有没有超过数组中任何数的两倍
//        if ((max < arr[i] * 2) && (flag != i))
//            return -1;
//    }
//    return flag;
//}



//给定两个数组 nums1 和 nums2 ，返回 它们的交集 。
//输出结果中的每个元素一定是 唯一 的。我们可以 不考虑输出结果的顺序 。
//提示：
//1 <= nums1.length, nums2.length <= 1000
//0 <= nums1[i], nums2[i] <= 1000


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
{
    int table[1001];
    //为table数组进行初始化
    memset(table, 0, sizeof(table));
    //两个数组中的最多相同值数为两者的交集
    int* arr = (int*)malloc(sizeof(int) * nums2Size);
    int count = 0;//计算两个数组的相同值

    //把nums2数组中的元素作为table的下标并置为1
    for (int i = 0; i < nums2Size; i++)
        table[nums2[i]] = 1;
    //把table数组中的值和nums1中的值进行比较
    for (int i = 0; i < nums1Size; i++)
    {
        if (table[nums1[i]] == 1)
        {
            arr[count] = nums1[i];
            count++;
            table[nums1[i]] = 0;//重置，防止重复数字
        }
    }
    *returnSize = count;
    return arr;
}