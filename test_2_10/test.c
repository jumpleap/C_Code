#define _CRT_SECURE_NO_WARNINGS
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//指向arr的首地址
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}



//打印菱形
//  *
// ***
//*****
// ***
//  *
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() 
//{
//    int line;  // 菱形总行数
//    int column;  // 菱形总列数
//    int i;  // 当前行
//    int j;  // 当前列
//    scanf("%d", &line);
//
//    // 判断是否是奇数
//    if (line % 2 == 0) 
//    {
//        printf("必须输入奇数！\n");
//        exit(1);
//    }
//    column = line; // 总行数和总列数相同
//
//    // 遍历所有行
//    for (i = 1; i <= line; i++) 
//    {  
//        // 上半部分（包括中间一行）
//        if (i < (line + 1) / 2 + 1) 
//        {
//            // 遍历上半部分的所有列
//            for (j = 1; j <= column; j++) 
//            {  
//                if ((column + 1) / 2 - (i - 1) <= j && j <= (column + 1) / 2 + (i - 1)) 
//                {
//                    printf("*");
//                }
//                else 
//                {
//                    printf(" ");
//                }
//            }
//        }
//        else 
//        {  
//            // 下半部分
//            // 遍历下半部分的所有列
//            for (j = 1; j <= column; j++) 
//            { 
//                if ((column + 1) / 2 - (line - i) <= j && j <= (column + 1) / 2 + (line - i)) 
//                {
//                    printf("*");
//                }
//                else 
//                {
//                    printf(" ");
//                }
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}



//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。

//#include <stdio.h>
//#include <math.h>
//
//int getRes()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int count = 0;//计算位数
//		int sum = 0;//计算总和
//		int tmp = i;//临时变量
//
//		//计算有几位
//		while (tmp)
//		{
//			count++;
//			tmp /= 10;
//		}
//
//		tmp = i;//重新赋值
//
//		//循环计算每位的次方，最后加总和
//		while (tmp)
//		{
//			int x = tmp % 10;
//			sum += pow(x, count);
//			tmp /= 10;
//		}
//
//		//判断是否为水仙花数
//		if (i == sum)
//		{
//			printf("%d ", sum);
//		}
//	}
//}
//
//int main()
//{
//	getRes();
//	return 0;
//}



//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222

#include <stdio.h>

int getNumSum(int num)
{
	int sum = num;
	int value = num;
	for (int i = 1; i < 5; i++)
	{
		//使用每个结果 * 10 + num --> 即得到下一个数
		value = value * 10 + num;
		//加上之前的数
		sum += value;
	}
	return sum;
}

int main()
{
	int num = 0;
	scanf("%d", &num);

	int sum = getNumSum(num);
	printf("%d\n", sum);
	return 0;
}