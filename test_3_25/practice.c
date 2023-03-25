#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
给定一个非负整数 numRows，生成「杨辉三角」的前 numRows 行。

在「杨辉三角」中，每个数是它左上方和右上方的数的和。
*/

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    int** arr = (int**)malloc(sizeof(int*) * numRows);//申请行空间
    *returnSize = numRows;//返回值长度
    *returnColumnSizes = (int*)malloc(sizeof(int) * numRows);//列空间

    for (int i = 0; i < numRows; i++)
    {
        arr[i] = (int*)malloc(sizeof(int) * (i + 1));//申请每列的长度
        (*returnColumnSizes)[i] = i + 1;//每列的长度
        arr[i][i] = arr[i][0] = 1;

        for (int j = 1; j < i; j++)
        {
            //中间值的求解 = 左上方的和 + 右上方的和
            arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
        }
    }
    return arr;
}