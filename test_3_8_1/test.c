#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//矩阵判断相等
//void input(int arr[10][10], int n, int m) 
//{
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            scanf("%d", &arr[i][j]);
//}
//
//int judge(int arr1[10][10], int arr2[10][10], int n, int m)
//{
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            //不相等则返回0
//            if (arr1[i][j] != arr2[i][j])
//            {
//                return 0;
//            }
//        }
//    }
//    //相等返回1
//    return 1;
//}
//
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int arr1[10][10];
//    int arr2[10][10];
//
//    input(arr1, n, m);
//    input(arr2, n, m);
//
//    int ret = judge(arr1, arr2, n, m);
//    if (ret == 1)
//        printf("Yes\n");
//    else
//        printf("No\n");
//    return 0;
//}




//删除特定的数字
//#include <stdio.h>
//
//void inputArr(int* arr, int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//}
//
//int delNum(int* arr, int n, int deleteNum)
//{
//    int j = 0;
//    for (int i = 0; i < n; i++)
//    {
//        //相等的值不赋值
//        if (arr[i] != deleteNum)
//        {
//            arr[j] = arr[i];
//            j++;
//        }
//    }
//    return j;//返回最后数组的长度
//}
//
//int main()
//{
//    int arr[50] = { 0 };
//    int n = 0;
//    int deleteNum = 0;
//
//    scanf("%d", &n);
//    inputArr(arr, n);
//    scanf("%d", &deleteNum);
//
//    int len = delNum(arr, n, deleteNum);
//
//    for (int i = 0; i < len; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}



//打折
#include <stdio.h>

int main()
{
    double price = 0;
    int month = 0;
    int day = 0;
    int discount = 0;
    double ret = 0;
    scanf("%lf %d %d %d", &price, &month, &day, &discount);

    if (discount == 1)
    {
        if (month == 11)
        {
            ret = 0.7 * price - 50;
        }
        else
        {
            ret = 0.8 * price - 50;
        }
    }
    else
    {
        if (month == 11)
        {
            ret = 0.7 * price;
        }
        else
        {
            ret = 0.8 * price;
        }
    }

    if (ret < 0)
    {
        ret = 0;
    }
    printf("%.2lf\n", ret);
    return 0;
}