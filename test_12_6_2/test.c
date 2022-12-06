#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//用键盘读入一个字符，然后在屏幕上显示用这个字符组成的 3*3 的矩形
/*
int main()
{
    char c = '0';
    scanf("%c", &c);
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c", c);
        }
        //printf("\n");
        puts("");
    }
	return 0;
}
*/

//循环输入，输入一个字符，输出该字符相应的ASCII码。

int main()
{
    char c = '0';
    while (scanf("%c", &c) != EOF)
    {
        getchar(); //用来接收换行符
        int asc = (int)c;
        printf("%d\n", asc);
    }
    return 0;
}