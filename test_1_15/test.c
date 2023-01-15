#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//关于一维数组初始化，下面哪个定义是错误的？（C）
//A.int arr[10] = { 1,2,3,4,5,6 };
//B.int arr[] = { 1,2,3,4,5,6 };
//C.int arr[] = (1, 2, 3, 4, 5, 6);  //错误 应该使用大括号{}
//D.int arr[10] = { 0 };



//定义了一维 int 型数组 a[10] 后，下面错误的引用是：（C）
//A.a[0] = 1;
//B.a[0] = 5 * 2;
//C.a[10] = 2; //数组越界了
//D.a[1] = a[2] * a[0];


//下面代码的结果
//int main()
//{
//    int arr[] = { 1,2,(3,4),5 }; //3,4为一个数，最后取4
//    printf("%d\n", sizeof(arr));//16
//    return 0;
//}



//下面代码的结果是：()
//int main()
//{
//    char str[] = "hello bit";
//    printf("%d %d\n", sizeof(str), strlen(str));// 10 9
//    return 0;
//}


//关于一维数组描述不正确的是：(D)
//A.数组的下标是从0开始的
//B.数组在内存中是连续存放的
//C.数组名表示首元素的地址
//D.随着数组下标的由小到大，地址由高到低 //错，地址从低到高



//以下能对二维数组a进行正确初始化的语句是：（A）
//A.int a[2][] = { {0,1,2},{3,4,5} };
//B.int a[][3] = { {0,1,2},{3,4,5} };
//C.int a[2][4] = { {0,1,2},{3,4},{5} };
//D.int a[][3] = { {0,,2},{},{3,4,5} };



//给出以下定义：
//char acX[] = “abcdefg”;
//char acY[] = { ‘a’,’b’,’c’,’d’,’e’,’f’,’g’ };
//以下说法正确的是(C)
//A.数组acX和数组acY等价 //错，数组大小不一样
//B.数组acX和数组acY的长度相同 //不同，acX[]多一个'\0'
//C.sizeof(acX) > sizeof(acY) 
//D.strlen(acX) > strlen(acY)



//若定义int a[2][3] = { 1,2,3,4,5,6 }; 则值为4的数组元素是(B)
//A.a[0][0]
//B.a[1][0]
//C.a[1][1]
//D.a[2][1]



//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//void swapArr(int* arr1, int* arr2, int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		//交换数据
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//
//int main()
//{
//	int arr1[3] = { 0 };
//	int arr2[3] = { 0 };
//	int len = sizeof(arr1) / sizeof(arr1[0]);//数组长度
//
//	//输入数据
//	int i = 0;
//	for (i = 0; i < len; i++)
//		scanf("%d", &arr1[i]);
//	for (i = 0; i < len; i++)
//		scanf("%d", &arr2[i]);
//
//	//交换两个数组中的内容
//	swapArr(arr1, arr2, len);
//
//	//输出
//	for (i = 0; i < len; i++)
//		printf("%d ", arr1[i]);
//	printf("\n");
//	for (i = 0; i < len; i++)
//		printf("%d ", arr2[i]);
//	return 0;
//}



//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。

//初始化
void init(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
		arr[i] = 0;//全部初始化为0
}

//转置
void reverse(int arr[], int len)
{
	int left = 0;
	int right = len - 1;

	while (left < right)
	{
		//交换数据
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		
		left++;
		right--;
	}
}

//打印函数
void print(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[10] = { 0 };
	int len = sizeof(arr) / sizeof(arr[0]);//数组长度
	//数组初始化
	init(arr, len);

	//输入
	int i = 0;
	for (i = 0; i < len; i++)
		scanf("%d", &arr[i]);

	//数组转置
	reverse(arr, len);
	//数组打印
	print(arr, len);
	return 0;
}