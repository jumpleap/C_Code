#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
����
    С��ͬѧ���������һ����վ�����û�ע���˻���ʱ����Ҫ�����˻������룬
    Ϊ�˼�ǿ�˻��İ�ȫ�ԣ�С��������ǿ����һ��Ҫ��
    1. ����ֻ���ɴ�д��ĸ��Сд��ĸ�����ֹ��ɣ�
    2. ���벻�������ֿ�ͷ��
    3. ���������ٳ��ִ�д��ĸ��Сд��ĸ�������������ַ������е����֣�
    4. ���볤������Ϊ8
    ����С���ܵ���n�����룬��������д�����ж���Щ��������Щ�Ǻ��ʵģ�
    ��Щ�ǲ��Ϸ��ġ�
����������
    ����һ����n����������n(n��100)�У�ÿ��һ���ַ�������ʾһ�����룬
    ���뱣֤�ַ�����ֻ���ִ�д��ĸ��Сд��ĸ�����֣��ַ������Ȳ�����100��
���������
    ����n�У��������Ϸ������YES�����Ϸ����NO
*/

int judgeStr(char ch)
{
    if ((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z')
        || (ch >= 'a' && ch <= 'z'))
        return 1;
    else
        return 0;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    char passwd[100] = { 0 };
    int upper, lower, digit;

    for (int i = 0; i < n; i++)
    {
        scanf("%s", passwd);

        //�ַ����鳤��С��8
        if (strlen(passwd) < 8)
        {
            printf("NO\n");
            continue;
        }

        //�ж��ַ��Ƿ������ֿ�ͷ
        if (passwd[0] >= '0' && passwd[0] <= '9')
        {
            printf("NO\n");
            continue;
        }

        //�ж��ַ������Ƿ����������ϵ��ַ�
        upper = lower = digit = 0;
        for (int j = 0; passwd[j] != '\0'; j++)
        {
            if (judgeStr(passwd[i]))
                upper = 1;
            if (judgeStr(passwd[i]))
                lower = 1;
            if (judgeStr(passwd[i]))
                digit = 1;
        }

        if (upper + lower + digit >= 2)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}