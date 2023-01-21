#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//整数转换。编写一个函数，确定需要改变几个位才能将整数A转成整数B。
//int convertInteger(int A, int B)
//{
//    int c = A ^ B;//异或得到两个数中的不同值
//    int count = 0;
//
//    for (int i = 0; i < 32; i++)
//    {
//        //c & 1：为1则为两个数中的不同值
//        if (c & 1)
//        {
//            count++;
//        }
//        c >>= 1;//c右移
//    }
//    return count;//返回不同的数
//}


//给你一个整数数组 nums ，其中总是存在 唯一的 一个最大整数 。
//请你找出数组中的最大元素并检查它是否 至少是数组中每个其他数字的两倍 。
//如果是，则返回 最大元素的下标 ，否则返回 - 1 。

int dominantIndex(int* arr, int len)
{
    int max = arr[0];
    int flag = 0;//标记最大值下标，从0开始是为了防止数组只有1个数

    for (int i = 1; i < len; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];//找到最大值
            flag = i;//更换最大值下标
        }

    }

    for (int i = 0; i < len; i++)
    {
        if (max < (arr[i] * 2) && (i != flag))
            return -1;
    }
    return flag;
}