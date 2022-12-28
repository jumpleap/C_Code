#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
描述
    有个软件系统登录的用户名和密码为（用户名：admin，密码：admin），
    用户输入用户名和密码，判断是否登录成功。
输入描述：
    多组测试数据，每行有两个用空格分开的字符串，第一个为用户名，第二个为密码。
输出描述：
    针对每组输入测试数据，输出为一行，一个字符串（“Login Success!”或“Login Fail!”）。
*/

int main()
{
    char arr1[10], arr2[10];
    while (scanf("%s %s", arr1, arr2) != EOF)
    {
        getchar();//接收换行符
        //判断用户名是否相同
        if (!(strcmp("admin", arr1)))
        {
            //判断密码是否相同
            if ((!strcmp("admin", arr2)))
            {
                printf("Login Success!\n");
            }
            else
            {
                //密码不同
                printf("Login Fail!\n");
            }
        }
        else
        {
            //用户名不同
            printf("Login Fail!\n");
        }
    }
    return 0;
}