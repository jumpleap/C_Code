#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//判断一个密码是不是安全的密码
//1）长度在8~16之间
//2）必须含有大写字母、小写字母、数字、特殊字符之中的三种
//3）特殊字符为：~!@#$%^

//特殊字符
char specialChar[] = "~!@#$%^";
int isSpecialChar(char c) 
{
    for (int i = 0; specialChar[i]; ++i) 
    {
        if (specialChar[i] == c)
            return 1;
    }
    return 0;
}

int main() 
{
    char str[100] = { 0 };
    int typ[4] = { 0 };
    int t = 0;
    scanf("%d", &t);

    while (t--) 
    {
        scanf("%s", str);
        //判断长度是否满足
        if (strlen(str) < 8 || strlen(str) > 16) 
        {
            printf("NO\n");
            continue;
        }

        //哈希置0
        typ[0] = typ[1] = typ[2] = typ[3] = 0;
        for (int i = 0; str[i]; ++i) 
        {
            //判断是不是小写字母
            if (str[i] >= 'a' && str[i] <= 'z') 
                typ[0] = 1;
            //判断是不是大写字母
            if (str[i] >= 'A' && str[i] <= 'Z') 
                typ[1] = 1;
            //判断是不是数字
            if (str[i] >= '0' && str[i] <= '9') 
                typ[2] = 1;
            //判断是不是特殊字符
            if (isSpecialChar(str[i])) 
                typ[3] = 1;
        }

        //看总和是否大于等于3
        if (typ[0] + typ[1] + typ[2] + typ[3] >= 3) 
        {
            printf("YES\n");
        }
        else 
        {
            printf("NO\n");
        }
    }
    return 0;
}
