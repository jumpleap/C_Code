#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	小乐乐学校教学楼的电梯前排了很多人，他的前面有n个人在等电梯。
	电梯每次可以乘坐12人，每次上下需要的时间为4分钟（上需要2分钟，下需要2分钟）。
	请帮助小乐乐计算还需要多少分钟才能乘电梯到达楼上。（假设最初电梯在1层）
*/
int main()
{
    int n = 0;
    int up = 2, sum = 4;
    int res = 0;
    printf("请输入前面还有多少人？\n");
    scanf("%d", &n);

    if (n <= 12)
    {
        res = up;
    }
    else
    {
        n = n / 12;
        res = n * sum + up;
    }
    printf("%d\n", res);
	return 0;
}