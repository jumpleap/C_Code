#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int myAtoi(char* str)
{
    // �Ƴ���ͷ�Ŀո�
    while (*str == ' ')
        ++str;

    // ��¼������
    int flag = 1;
    if (*str == '-') {
        flag = -1;
        ++str;
    }
    else if (*str == '+')
        ++str;

    int ret = 0;
    int div = INT_MAX / 10;
    while (*str <= '9' && *str >= '0') {
        //�Ƚ�
        int dig = *str - '0';
        if (ret < div || (ret == div && dig < 8)) {
            ret = ret * 10 + dig;
            ++str;
        }
        // ��������������Է���ֵ
        else
            return (flag == 1 ? INT_MAX : INT_MIN);
    }
    return flag * ret;
}

int main()
{
    char str[100] = "  410hfhs";
    printf("%d\n", myAtoi(str));
	return 0;
}