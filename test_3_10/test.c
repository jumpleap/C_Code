#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>

bool isUnique(char* astr) {
    //解法一：暴力解决
    // for(int i=0; i<strlen(astr); i++)
    // {
    //     for(int j=i+1; j<strlen(astr); j++)
    //     {
    //         if(astr[i] == astr[j])
    //             return false;
    //     }
    // }
    // return true;

    // //解法二 ：哈希表 
    // char hash[128] = {0};
    // memset(hash,0,sizeof(hash));

    // for(int i=0; i<strlen(astr); i++)
    //     hash[astr[i]]++;

    // for(int i=0; i<128; i++)
    // {
    //     if(hash[i] > 1)
    //         return false;
    // }
    // return true;

    //解法三：排序
    // if(astr == NULL)
    //     return false;
    // if(strlen(astr) == 0)
    //     return true;

    // int flag = 1;
    // for(int i=0; i<strlen(astr)-1;i++)
    // {
    //     for(int j=0; j<strlen(astr) - i - 1; j++)
    //     {
    //         if(astr[j] > astr[j+1])
    //         {
    //             flag = 0;
    //             char tmp = astr[j];
    //             astr[j] = astr[j+1];
    //             astr[j+1] = tmp;
    //         }
    //     }
    //     if(flag == 1)
    //         break;
    // }

    // for(int i=0; i<strlen(astr)-1; i++)
    // {
    //     if(astr[i] == astr[i+1])
    //         return false;
    // }
    // return true;



    //解法四：双指针
    char* cur = astr;
    assert(astr);
    //空串判断
    if (strlen(astr) == 0)
        return true;
    while (*astr != '\0')
    {
        cur++;
        if (*cur != '\0')
        {
            char* tmp = cur;
            while (*tmp != '\0')
            {
                if (*tmp == *astr)
                    return false;
                tmp++;
            }
        }
        astr++;
    }
    return true;
}


int main()
{
    char arr[] = "ltcode";
    printf("%d\n",isUnique(arr));//真1假0
    return 0;
}