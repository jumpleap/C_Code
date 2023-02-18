#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//�ж�һ�������ǲ��ǰ�ȫ������
//1��������8~16֮��
//2�����뺬�д�д��ĸ��Сд��ĸ�����֡������ַ�֮�е�����
//3�������ַ�Ϊ��~!@#$%^

//�����ַ�
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
        //�жϳ����Ƿ�����
        if (strlen(str) < 8 || strlen(str) > 16) 
        {
            printf("NO\n");
            continue;
        }

        //��ϣ��0
        typ[0] = typ[1] = typ[2] = typ[3] = 0;
        for (int i = 0; str[i]; ++i) 
        {
            //�ж��ǲ���Сд��ĸ
            if (str[i] >= 'a' && str[i] <= 'z') 
                typ[0] = 1;
            //�ж��ǲ��Ǵ�д��ĸ
            if (str[i] >= 'A' && str[i] <= 'Z') 
                typ[1] = 1;
            //�ж��ǲ�������
            if (str[i] >= '0' && str[i] <= '9') 
                typ[2] = 1;
            //�ж��ǲ��������ַ�
            if (isSpecialChar(str[i])) 
                typ[3] = 1;
        }

        //���ܺ��Ƿ���ڵ���3
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
