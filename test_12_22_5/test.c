#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
    试计算在区间1 到n 的所有整数中，数字x（0 ≤ x ≤ 9）共出现了多少次？
    例如，在1到11 中，即在1、2、3、4、5、6、7、8、9、10、11 中，数字1 出现了4 次。
输入描述：
    输入共1行，包含2个整数n、x，之间用一个空格隔开。
输出描述：
    输出共1行，包含一个整数，表示x出现的次数。
*/

int main()
{
    int x, y;
    int count = 0;
    scanf("%d %d", &x, &y);

    int i, j, k;
    for (i = 1; i <= x; i++)
    {
        k = i;
        while (k != 0)
        {
            //j的余数
            j = k % 10;
            //判断余数是否与y相等
            if (j == y)
            {
                count++;
            }
            k /= 10;//取k的下一位
        }
    }
    printf("%d\n", count);
    return 0;
}