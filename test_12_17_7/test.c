#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

/*
����
	�Ӽ�������a, b, c��ֵ����̼��㲢���һԪ���η���ax2 + bx + c = 0�ĸ���
	��a = 0ʱ�������Not quadratic equation������a �� 0ʱ��
	���ݡ� = b2 - 4*a*c������������㲢������̵ĸ���
����������
	�������룬һ�У���������������a, b, c����һ���ո�ָ���
	��ʾһԪ���η���ax2 + bx + c = 0��ϵ����
���������
	���ÿ�����룬���һ�У����һԪ���η���ax2 + bx +c = 0�ĸ��������
	���a = 0�������Not quadratic equation����
	���a ��  0�������������
	�� = 0��������ʵ����ȣ������ʽΪ��x1=x2=...��
	��  > 0��������ʵ�����ȣ������ʽΪ��x1=...;x2=...������x1  <=  x2��
	��  < 0����������������������x1=ʵ��-�鲿i;x2=ʵ��+�鲿i��
	��x1���鲿ϵ��С�ڵ���x2���鲿ϵ����ʵ��Ϊ0ʱ����ʡ�ԡ�ʵ��= -b / (2*a),�鲿= sqrt(-�� ) / (2*a)
	����ʵ������Ҫ��ȷ��С�����2λ�����֡�����֮��û�пո�
*/

int main()
{
    double a, b, c;
    double res, answer1, answer2;//res�ǡ�,answer1��ʵ��,answer2���鲿
    while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
    {
        //�޸������
        if (a == 0)
        {
            printf("Not quadratic equation\n");
            break;
        }

        res = b * b - 4 * a * c; //�б�ʽ
        answer1 = (-b - sqrt(res)) / (2 * a);//��һԪ���η��̵ĸ�
        answer2 = (-b + sqrt(res)) / (2 * a);//��һԪ���η��̵ĸ�
        
        //���б�ʽ���������
        if (res == 0)
        {
            if (answer1 == 0)
            {
                answer1 = 0;//��-0.0������
            }
            printf("x1=x2=%.2lf\n", answer1);//����ͬ
        }
        else if (res > 0)
        {
            printf("x1=%.2lf;x2=%.2lf\n", answer1, answer2);//����ͬ
        }
        else
        {
            double x = (-b) / (2 * a);//ʵ��
            double y = sqrt(-res) / (2 * a);//�鲿
            if (x == 0)
            {
                x = 0;//��-0.0������
            }
            printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", x, y, x, y);
        }
    }
	return 0;
}