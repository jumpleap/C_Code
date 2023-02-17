#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>

//模拟实现库函数strlen
//方式1：使用库函数解决
//int main()
//{
//	char str[100] = "";
//	scanf("%s", str);
//
//	int len = strlen(str);
//	printf("%d\n", len);
//	return 0;
//}


//方式2：模拟实现
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
////使用const使值不能修改
//int my_strlen(const char* str)
//{
//	assert(str);//防止空指针
//	int count = 0;
//	while (*str++ != '\0')
//	{
//		count++;//计算总数
//	}
//	return count;
//}
//
//int main()
//{
//	char str[100] = "";
//	scanf("%s", str);
//
//	int len = my_strlen(str);
//	printf("%d\n", len);
//	return 0;
//}



//C程序常见的错误分类不包含：（C）
//
//A.编译错误
//B.链接错误
//C.栈溢出
//D.运行时错误


//原码、反码、补码说法错误的是（D）
//
//A.一个数的原码是这个数直接转换成二进制
//B.反码是原码的二进制符号位不变，其他位按位取反
//C.补码是反码的二进制加1
//D.原码、反码、补码的最高位是0表示负数，最高位是1表示正数
//0正1负




//#include <stdio.h>
//
//int main()
//{
//	unsigned char a = 200;
//	//11001000
//	unsigned char b = 100;
//	//01100100
//	unsigned char c = 0;
//	// 11001000
//	// 01100100
//	//100101100
//	c = a + b;
//	//00101100
//	printf(" %d %d", a + b, c);//300 44
//	return 0;
//}


//unsigned int a = 0x00001234; 
//unsigned char b = *(unsigned char*)&a;
//在32位大端模式处理器上变量b等于（Ox00）
//低地址存储在高位上，a= 0x00001234


//#include <stdio.h>
//
//int main()
//{
//    char a[1000] = { 0 };
//    int i = 0;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//        //11111111 -1
//        //11111110 -2
//        //11111101 -3
//        //10000000 -128
//        //11111111
//        //10000000
//        //01111111 127
//    }
//    printf("%d", strlen(a));//255
//    return 0;
//}



//关于大小端字节序的描述正确的是（B）
//
//A.大小端字节序指的是数据在电脑上存储的二进制位顺序
//B.大小端字节序指的是数据在电脑上存储的字节顺序
//C.大端字节序是把数据的高字节内容存放到高地址，低字节内容存放在低地址处
// //高---> 低， 低----> 高: 大端
//D.小端字节序是把数据的高字节内容存放到低地址，低字节内容存放在高地址处
//低 -->  低  高 ----> 高 小端




//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

//#include <stdio.h>
//
//int main()
//{
//	int a, b, c, d, e;
//	a = b = c = d = e = 0;
//
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						//对每个情况进行判断
//						if ((2 == b && 3 != a) || (2 != b && 3 == a))
//						{
//							if ((2 == b && 4 != e) || (2 != b && 4 == e))
//							{
//								if ((1 == c && 2 != d) || (1 != c && 2 == d))
//								{
//									if ((5 == c && d != 3) || (5 != c && d == 3))
//									{
//										if ((4 == e && 1 != a) || (4 != e && 1 == a))
//										{
//											//得出总排名
//											if ((a * b * c * d * e) == 120)
//											{
//												printf("a = %d, b= %d, c = %d, d = %d, e = %d\n", a, b, c, d, e);
//											}
//										}
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}



//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

//#include <stdio.h>
//
//int main()
//{
//	char res;
//	for (res = 'A'; res <= 'D'; res++)
//	{
//		if (((res != 'A') + (res == 'C') + (res == 'D') + (res != 'D')) == 3)
//		{
//			printf("凶手是%c\n", res);
//			break;
//		}
//	}
//	return 0;
//}


//在屏幕上打印杨辉三角。
#include <stdio.h>
#define N 10

int main()
{
	int data[N][N];
	int i, j, k;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			if (j == 0 || j == i)
			{
				//首尾为1
				data[i][j] = 1;
			}
			else
			{
				data[i][j] = data[i - 1][j - 1] + data[i - 1][j];
			}
		}
	}

	//打印
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf("%d ", data[i][j]);
		}
		printf("\n");
	}
	return 0;
}