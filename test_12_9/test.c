#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

/*
����
	���ݸ�����������3����a, b, c�����������ε��ܳ��������
	���ݷ�Χ�� 0 < a,b,c \le 100000 \0<a,b,c��100000
����������
	һ�У�������3���ߣ��ܹ��������Σ����м���һ���ո������
���������
	һ�У��������ܳ��������������λС�������м���һ���ո����


//���׹�ʽ
//p = (a+b+c)/2; area = sqrt(p*(p-a)*(p-b)*(p-c));
int main()
{
    int a, b, c;
    double circumference, area;
    double p = 0;

    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        circumference = a + b + c;
        //ʹ�ú��׹�ʽ���
        p = (a + b + c) / 2.0;
        area = sqrt(p * (p - a) * (p - b) * (p - c));

        printf("circumference=%.2lf area=%.2lf\n", circumference, area);
    }
	return 0;
}
*/


/*
����
    ����n�Ƴɼ�����������ʾ����ͳ�����е���߷֣���ͷ��Լ�ƽ���֡�
    ���ݷ�Χ��1 \le n \le 100 \1��n��100  �� �ɼ�ʹ�ðٷ����Ҳ����ܳ��ָ���
����������
    ���У���1�У�������n��1��n��100��
    ��2�У�n�Ƴɼ�����Χ0.0~100.0�����ÿո�ָ���
���������
    ���һ�У��������������ֱ��ʾ����߷֣���ͷ��Լ�ƽ���֣�С�������2λ�����ÿո�ָ���


int main()
{
    double score = 0;
    int n = 0; //����
    double max = -1, min = 101, avg = 0;//�����С��ƽ���ɼ�
    int i;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &score);
        if (score > max)
            max = score;
        if (score < min)
            min = score;
        avg += score;
    }

    printf("%.2lf %.2lf %.2lf\n", max, min, avg / n);
    return 0;
}
*/


/*
����
    ���⣺һ��Լ�� 3.156��107 s��Ҫ�������������䣬��ʾ������϶����롣
    ���ݷ�Χ�� 0 < age \le 200 \0<age��200
����������
    һ�У�����һ������age��
���������
    һ�У�����һ����������������Ӧ��������

int main()
{
    int age = 0;
    long sum = 0;
    while (scanf("%d", &age) != EOF)
    {
        if (age < 0 || age > 200)
            return 0;
        sum = sum + 3.156 * pow(10, 7) * age;
        printf("%ld\n", sum);
    }
    return 0;
}
*/


/*
����
    ��ʹ���ۼƳ˷��Ļ����ϣ�ͨ����λ���㣨<<��ʵ��2��n�η��ļ��㡣
    ���ݷ�Χ��0 \le n \le 31 \0��n��31
����������
    һ����������n��0 <= n < 31����
���������
    �����Ӧ��2��n�η��Ľ����


int main()
{
    int num = 0;
    while (scanf("%d", &num) != EOF)
    {
        //printf("%d\n",2 << (num - 1)); //2�����ڵڶ�λ
        printf("%d\n", 1 << num);
    }
    return 0;
}
*/


/*
����
    �������� seconds ������ת����Сʱ�����Ӻ��롣
    ���ݷ�Χ�� 0 < seconds < 100000000\0<seconds<100000000
����������
    һ�У�����һ����������������������
���������
    һ�У�������������������Ϊ����������Ӧ��Сʱ����������������������Ϊ�㣩���м���һ���ո������
*/

int main()
{
    int second = 0;
    int hour, minute;

    while (scanf("%d", &second) != EOF)
    {
        hour = second / 3600; //�õ�Сʱ
        minute = second % 3600 / 60; //�õ���
        second = second % 60; //��
        printf("hour=%d minute=%d second=%d\n", hour, minute, second);
    }
    return 0;
}