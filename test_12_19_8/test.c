#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
	��һ��������������λ֮��
����������
	����һ�У�����һ��������
���������
	һ������. int��Χ��


int main()
{
    int num = 0;
    int sum = 0;
    scanf("%d", &num);

    while (num)//numΪ0�˳�ѭ��
    {
        int x = num % 10;//�õ�ÿһλ
        sum += x;//�ۼ�ÿһλ�ĺ�
        num /= 10;
    }
    printf("%d\n", sum);

	return 0;
}
*/


/*
����
    С���ֵİ�������ͳ��һ�°༶��һ���ж�������Ҫ����ҳ���
    �����ɼ������ģ���ѧ�����ƽ���ֵ���60�Ľ�����ҳ���
    С�������̰�����������һ���ж���ͬѧ���мҳ���
����������
    ��n+1��
    ��һ�У�����һ����n������С���ֵİ༶����n��ͬѧ��
    �ڽ�������n����ÿ������������������༶��һ��ͬѧ�����Ƴɼ������ģ���ѧ��������ÿո�ָ���
���������
    һ�У�һ������������༶����Ҫ����ҳ���������
*/

int main()
{
    int people = 0;
    int count = 0;
    int chinese, math, english, score;
    scanf("%d", &people);

    while (people > 0)
    {
        scanf("%d %d %d", &chinese, &math, &english);
        score = (chinese + math + english) / 3;
        if (score < 60)
        {
            count++;
        }
        people--;
    }
    printf("%d\n", count);
    return 0;
}