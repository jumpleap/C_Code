#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//数组的使用 - 逆序输出数组中的值
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	for (i = len-1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	//数组的下标是从0开始的
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[0]);//arr[0]是数组的第一个元素
//	return 0;
//}


//数组在内存中是连续存储的
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	for (i = 0; i < len; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);//&arr[i]取出arr[i]的地址
//	}
//	return 0;
//}


//二维数组的创建
//int main()
//{
//	//int arr[3][3];//创建二维数组
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };//创建二维数组并初始化
//	return 0;
//}


//二维数组的初始化
//int main()
//{
//	//完全初始化的两种形式
//	int arr1[3][3] = { 1,2,3,4,5,6,7,8,9 };//形式1：不加{}
//	int arr2[3][3] = { {1,2,3},{4,5,6},{7,8,9} };//形式2：加{}
//	//解释：{}代表第一维的长度，arr2中第一维有3个，初始化中有3个{}
//
//	//不完全初始化的两种形式
//	//说明，前面的1，2，3占据了第一维空间，4占据了第二维的第一个内存空间，剩下的是默认值
//	int arr3[3][3] = { 1,2,3,4 };//形式1
//	int arr4[3][3] = { {1,2,3}, {4} };//形式2
//
//	//不初始化：二维数组中全部是默认值
//	int arr5[3][3];//全部是默认值：0
//	return 0;
//}



//二维数组的使用
//int main()
//{
//	int arr[3][3];//创建数组
//	int i, j;
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 3; j++)
//			scanf("%d", &arr[i][j]);
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	//如何求二维数组的长度
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9 };
//	int len1 = sizeof(arr) / sizeof(arr[0][0]);//二维数组的长度
//	printf("%d\n", len1);//12
//
//	//如何求二维数组中第二维的长度
//	int len2 = sizeof(arr[0]) / sizeof(arr[0][0]);
//	printf("%d\n", len2);//4
//
//	//如何求二维数组中第一维的长度
//	//int len3 = len1 / len2;//法一
//	int len3 = sizeof(arr) / sizeof(arr[0]);//法二
//	printf("%d\n", len3);//3
//	return 0;
//}



//二维数组在内存中的存储
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int i, j;
//	int len1 = sizeof(arr) / sizeof(arr[0]);//第一维的大小
//	int len2 = sizeof(arr[0]) / sizeof(arr[0][0]);//第二维的大小
//
//	for (i = 0; i < len1; i++)
//	{
//		for (j = 0; j < len2; j++)
//		{
//			//&:取出对应值的地址
//			printf("arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}



//数组越界
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//
//	//错误，数组的下标范围是0-4,而不是0-5
//	for (i = 0; i <= 5; i++)
//	{}
//	return 0;
//}



//若是以数组名作为参数，那么则为传址调用
//若是以数组元素作为参数，看数组元素前面是否有 & 符合，
//若是有，则为传址调用，若是没有，则为传值调用

//void PrintNum(int x)
//{
//	x = 11;
//	printf("%d\n", x);
//}
//
//void Print(int* arr, int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//}
//
//void ChangeNum(int* x)
//{
//	*x = 11;
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	PrintNum(arr[0]);//传值：数组元素作为实参
//	Print(arr, len);//传址：数组名作为实参
//	ChangeNum(&arr[0]);//传址：数组元素的地址作为实参
//	Print(arr, len);//传址：数组名作为实参
//	return 0;
//}


//冒泡排序
//void bubble_sort(int arr[], int len)
//{
//	int i, j;
//	//趟数
//	for (i = 0; i < len - 1; i++)
//	{
//		//一趟比较的次数
//		for (j = 0; j < len - i - 1; j++)
//		{
//			//比较
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 10,5,1,7,3,9,6,4,2,8 };
//	int len = sizeof(arr) / sizeof(arr[0]);//数组长度
//
//	bubble_sort(arr, len);
//
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//1）数组名是数组首元素的地址（两个例外）
//2）sizeof(数组名)计算的是整个数组的大小，sizeof内部放数组名，数组名表示整个数组
//3） & 数组名：取出的是整个数组的地址
int main()
{
	int arr[10] = { 1,2,3,4,5 };

	//sizeof(数组名)计算的是整个数组的大小
	printf("%d\n", sizeof(arr));//40个字节的大小
	//数组名是数组首元素的地址（两个例外）
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);//数组首元素的地址
	//& 数组名：取出的是整个数组的地址
	printf("%p\n", &arr);
	printf("%p\n", &arr + 1);//跳过了40个字节
	return 0;
}