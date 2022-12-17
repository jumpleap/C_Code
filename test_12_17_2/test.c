#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	牛牛尝试在蒙住眼睛的情况下拿到旁边的金币，假设的坐标是 (x,y),金币的坐标是 (x1,y1)，
	金币一定在牛牛在周围，即 |x1 - x| + |y1 - y| = 1​,请你判断牛牛应该往哪个方向伸手。
输入描述：
	第一行输入 x ,y 表示牛牛的坐标。
	第二行输入 x1,y1 表示金币的坐标。保证 |x1 - x| + |y1 - y| = 1,坐标是整数。
输出描述：
	输出牛牛应该往哪个方向伸手。
	例
	(x,y)=(0,0) (x1,y1)=(0,1) ，则牛牛向上伸手，输出 'u' 。
	(x,y) =(0,0) (x1,y1) = (0,-1) ，则牛牛向下伸手，输出 'd'。
	(x,y) =(0,0) (x1,y1) = (1,0) ，则牛牛向右伸手，输出 'r'。
	(x,y) =(0,0) (x1,y1) = (-1,0) ，则牛牛向左伸手，输出 'l'。
*/

int main()
{
    int x, y, x1, y1;
    scanf("%d %d %d %d", &x, &y, &x1, &y1);

    if (x1 - x == 0)
    {
        if (y1 > y)
            printf("u\n");
        else
            printf("d\n");
    }
    else if (y1 - y == 0)
    {
        if (x1 > x)
            printf("r\n");
        else
            printf("l\n");
    }
    else
    {
        printf("");
    }
	return 0;
}