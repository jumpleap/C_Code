#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
描述
	KiKi访问网站，得到HTTP状态码，但他不知道什么含义，
	BoBo老师告诉他常见HTTP状态码：200（OK，请求已成功），
	202（Accepted，服务器已接受请求，但尚未处理。）
	400（Bad Request，请求参数有误），403（Forbidden，被禁止），
	404（Not Found，请求失败），500（Internal Server Error，服务器内部错误），
	502（Bad Gateway，错误网关）。
输入描述：
	多组输入，一行，一个整数（100~600），表示HTTP状态码。
输出描述：
	针对每组输入的HTTP状态，输出该状态码对应的含义，具体对应如下：
	200-OK
	202-Accepted
	400-Bad Request
	403-Forbidden
	404-Not Found
	500-Internal Server Error
	502-Bad Gateway
*/

int main()
{
    int status = 0;
    while (scanf("%d", &status) != EOF)
    {
        getchar();//接受回车键('/n')
        switch (status)
        {
            case 200:
                printf("OK\n");
                break;
            case 202:
                printf("Accepted\n");
                break;
            case 400:
                printf("Bad Request\n");
                break;
            case 403:
                printf("Forbidden\n");
                break;
            case 404:
                printf("Not Found\n");
                break;
            case 500:
                printf("Internal Server Error\n");
                break;
            case 502:
                printf("Bad Gateway\n");
                break;
            default:
                printf("");
        }
    }
	return 0;
}