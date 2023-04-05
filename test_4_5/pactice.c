#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
存在一种仅支持 4 种操作和 1 个变量 X 的编程语言：
++X 和 X++ 使变量 X 的值 加 1
--X 和 X-- 使变量 X 的值 减 1
最初，X 的值是 0;
给你一个字符串数组 operations ，这是由操作组成的一个列表，
返回执行所有操作后， X 的 最终值 。
*/


//法一：暴力遍历
int finalValueAfterOperations(char** operations, int operationsSize) {
    int ret = 0;
    for (int i = 0; i < operationsSize; i++)
    {
        for (int j = 0; j < strlen((operations[i])); j++)
        {
            //查找字符，如果有+则增，有-则减
            if (operations[i][j] == '+')
            {
                ret++;
                break;
            }
            else if (operations[i][j] == '-')
            {
                ret--;
                break;
            }
        }
    }
    return ret;
}


//法二：使用strcmp库函数解决
int finalValueAfterOperations(char** operations, int operationsSize) {
    int ret = 0;
    for (int i = 0; i < operationsSize; i++)
    {
        char* tmp = operations[i];
        //和++X和X++比较，如果是这两个类型，则自增
        if (strcmp(tmp, "++X") == 0 || strcmp(tmp, "X++") == 0)
            ret++;
        else
            ret--;
    }
    return ret;
}