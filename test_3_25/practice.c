#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����һ���Ǹ����� numRows�����ɡ�������ǡ���ǰ numRows �С�

�ڡ�������ǡ��У�ÿ�����������Ϸ������Ϸ������ĺ͡�
*/

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    int** arr = (int**)malloc(sizeof(int*) * numRows);//�����пռ�
    *returnSize = numRows;//����ֵ����
    *returnColumnSizes = (int*)malloc(sizeof(int) * numRows);//�пռ�

    for (int i = 0; i < numRows; i++)
    {
        arr[i] = (int*)malloc(sizeof(int) * (i + 1));//����ÿ�еĳ���
        (*returnColumnSizes)[i] = i + 1;//ÿ�еĳ���
        arr[i][i] = arr[i][0] = 1;

        for (int j = 1; j < i; j++)
        {
            //�м�ֵ����� = ���Ϸ��ĺ� + ���Ϸ��ĺ�
            arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
        }
    }
    return arr;
}