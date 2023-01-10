#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    牛牛有一个长度为 n 的字符数组，他尝试把字符数组中其中一些字符替换成另一些字符。
输入描述：
    第一行输入一个正整数 n 表示字符数组的长度，四个个字符分别 a1 和 a2 ， a3 和 a4，
    表示把字符数组中 a1 全部替换成 a2，
    然后把 a3 全部替换成 a4（包括a1替换后产生的a2等于a3的情况）
    第二行输入一个长度为 n 的字符数组。
输出描述：
    输出替换后的字符数组
*/

//int main()
//{
//    int n = 0;//数组长度
//    char ch1, ch2, ch3, ch4;
//    //输入
//    scanf("%d %c %c %c %c", &n, &ch1, &ch2, &ch3, &ch4);
//    char arr[100] = "";
//    scanf("%s", arr);
//
//    for (int i = 0; i < n; i++)
//    {
//        //把ch2替换数组中的ch1
//        if (arr[i] == ch1)
//            arr[i] = ch2;
//        //把ch4替换数组中的ch3
//        if (arr[i] == ch3)
//            arr[i] = ch4;
//    }
//
//    puts(arr);//输出数组
//    return 0;
//}


/*
描述
    牛牛最近学了水仙花数，但是他并不喜欢水仙花，因此他准备算出 [l,r] 区间内的四叶玫瑰数。
    四叶玫瑰数：一个数的四个位置的数字的四次方加起来等于这个四位数本身的数。
输入描述：
    第一行输入两个正整数，表示闭区间的两头
输出描述：
    输出区间内的四叶玫瑰数，保证至少有一个
*/

int main()
{
    int left = 0;
    int right = 0;
    int sum = 0;
    scanf("%d %d", &left, &right);

    for (; left <= right; left++)
    {
        sum = 0;//重置
        int tmp = left;//临时数
        while (tmp)
        {
            int x = tmp % 10;//得到每个位数
            sum += (x * x * x * x);//计算总和
            tmp /= 10;//降位
        }

        //判断相等
        if (left == sum)
        {
            printf("%d ", left);
        }
    }
    return 0;
}