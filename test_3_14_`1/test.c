#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int hammingWeight(size_t n)
//{
//    //∑®“ª£∫num = num & (num - 1);
//    int count = 0;
//    while (n)
//    {
//        n = n & (n - 1);
//        count++;
//    }
//    return count;
//}


//%‘ÀÀ„
//5
//101
//5 % 2 == 1
// count++;
//1
//5 /2 = 2
//2 % 2 = 0
//2 / 2 = 1£ª
//1 % 2 = 1£ª
// count++;
// 1/ 2= 0;

//11
//1011 - 11
//11 % 2 = 1£ª
//count++;
//11 / 2 = 5;
//5 % 2 = 1;
//count++;
//5 /2 = 2;
// 2 %2 = 0;
//2 / 2 = 1;
//1 % 2 = 1;
//count++;


//00000000 00000000 00000000 00000111 -- 7
//								   &1
//

int main()
{
	int num = 0;
	sacnf("%d", &num);

    hammingWeight(num);
	return 0;
}