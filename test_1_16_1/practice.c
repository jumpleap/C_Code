#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    有一个长度为 n 的非降序数组，比如[1,2,3,4,5]，
    将它进行旋转，即把一个数组最开始的若干个元素搬到数组的末尾，
    变成一个旋转数组，比如变成了[3,4,5,1,2]，或者[4,5,1,2,3]这样的。
    请问，给定这样一个旋转数组，求数组中的最小值。
数据范围：
    1≤n≤10000，数组中任意元素的值:0≤val≤10000
要求：
    空间复杂度：O(1) ，时间复杂度：O(logn)
*/

/**
 *
 * @param rotateArray int整型一维数组
 * @param rotateArrayLen int rotateArray数组长度
 * @return int整型
 */
//法一
//int minNumberInRotateArray(int* rotateArray, int rotateArrayLen)
//{
//    int left = 0;
//    for (left = 1; left < rotateArrayLen; left++)
//    {
//        //只要出现降序就是最小值
//        if (rotateArray[left - 1] > rotateArray[left])
//            return rotateArray[left];
//    }
//    //无降序
//    return rotateArray[0];
//}

//法二：暴力枚举
//int minNumberInRotateArray(int* rotateArray, int rotateArrayLen)
//{
//    int i = 0;
//    int min = rotateArray[0];//设定最小值
//
//    //遍历比较
//    for (i = 0; i < rotateArrayLen; i++)
//    {
//        if (min > rotateArray[i])
//            min = rotateArray[i];
//    }
//    return min;//返回最小值
//}


//设变量已正确定义，
//以下不能统计出一行中输入字符个数（不包含回车符）的程序段是（D）
//A: n = 0; while (ch = getchar() != '\n')n++; 
//B: n = 0; while (getchar() != '\n')n++;
//C: for (n = 0; getchar() != '\n'; n++); 
//D: n = 0; for (ch = getchar(); ch != '\n'; n++);


//运行以下程序后，如果从键盘上输入 65 14<回车> ，则输出结果为（1）
//int main()
//{
//    int m, n;
//    printf("Enter m,n;");
//    scanf("%d%d", &m, &n);
//    while (m != n) //1
//    {
//        //m 51 37 23 9 4 3 2 1
//        //n 14 5 1
//        while (m > n) m = m - n; //2
//        while (n > m) n = n - m; //3
//    }
//    printf("m=%d\n", m);//1
//    return 0;
//}



//若运行以下程序时，从键盘输入ADescriptor<回车> ，则下面程序的运行结果是（ ）
int main()
{
    char c;
    int v0 = 0, v1 = 0, v2 = 0;
    //      A D e s c r i p t  o r  \n 
    //v0: 0 1 2 3 4 5 6 7 8 9 10 11 12
    //v1: 0 1 1 2 2 2 2 3 3 3 4  4  4
    //v2: 0 1 2 3 4 5 6 7 8 9 10 11 12
    do
    {
        switch (c = getchar())
        {
            case'a':case'A':
            case'e':case'E':
            case'i':case'I':
            case'o':case'O':
            case'u':case'U':v1 += 1;
            default:v0 += 1; v2 += 1;
        }
    } while (c != '\n');
    printf("v0=%d,v1=%d,v2=%d\n", v0, v1, v2); //12 4 12
    return 0;
}