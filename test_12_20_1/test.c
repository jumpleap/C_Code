#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
	С�����ڿ���ѧϰ�˶����ư˽�����ʮ�����ƺ󣬶Խ���ת��������Ũ�����Ȥ��
	��Ϊ��������������6����������֪��һ������ʾΪ�����ƺ�Ľ����������������������⡣
����������
	����һ��������n  (1 �� n �� 109)
���������
	���һ�У�Ϊ������n��ʾΪ�����ƵĽ��


//�ⷨһ�����鵹��
int main()
{
    int num = 0;
    int sum = 0;
    int arr[10];//���鴢�������Ƶĸ���
    scanf("%d", &num);

    int i = 0;
    while (num)
    {
        int x = num % 6;
        arr[i++] = x;//���д��������ƣ��±�����
        num /= 6;
    }

    //�����ӡ
    for (i = i - 1; i >= 0; i--)
        printf("%d", arr[i]);
	return 0;
}


//�ⷨ�����ۼ����
int main()
{
    long num = 0,i = 1;//i����λ��
    long long sum = 0;
    scanf("%ld", &num);

    while (num)
    {
        sum += num % 6 * i;//i����λ�����տ�ʼ�Ǹ�λ
        num /= 6;
        i *= 10;//�Ӹ�λ��ʼ������ʮλ����λ����
    }
    printf("%lld\n", sum);
    return 0;
}
*/

//�������ݹ�
void print(num)
{
    if (num > 5)
    {
        print(num / 6);//���еݹ����
    }
    printf("%d", num % 6);
        
}

int main()
{
    int num = 0;
    scanf("%d", &num);
    print(num);

    return 0;
}