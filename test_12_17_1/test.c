#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	牛牛的通勤路上有两种选择，要么走路，要么打车，牛牛走路的速度是 1m/s 。
	打车的速度的 10m/s ，但是打车需要等出租车 10 s，
	请你计算牛牛想尽快到公司应该选择打车还是走路。
输入描述：
	输入一个正整数，表示牛牛到公司的距离。
输出描述：
	输出牛牛想尽可能快到公司应该选择打车还是走路，走路的话输出 w ， 打车的输出 v。
	保证答案一定不会出现两个方案时间一样的情况。

//法一
int main()
{
	int distance = 0;//距离
	scanf("%d", &distance);

	//距离小于10米的话打车时间大于走路时间
	if (distance <= 10)
		printf("w\n");
	else
		printf("v\n");
	return 0;
}
*/

int main()
{
	int distance = 0;//距离
	scanf("%d", &distance);

	float taxi = 0.0;//出租车的时间
	taxi = distance / 10.0 + 10;//计算出租车所用的时间
	printf("%c\n", taxi < distance ? 'v' : 'w');//比较那个所用的时间少
	return 0;
}