#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
����
	BoBo����һ�����̣�������n��δ�򿪵����̣�KiKiϲ�������̣���һʱ�䷢�������̡�KiKiÿh�����ܺȹ�һ�����̣�����KiKi�ںȹ�һ������֮ǰ�������һ������ô����m���Ӻ��ж��ٺ�δ�򿪵����̣�
����������
	�������룬ÿ�������һ�У�����n��h��m����Ϊ���������������ݱ�֤m <= n * h��
���������
	���ÿ�����룬���Ҳ��һ�У�ʣ�µ�δ�򿪵����̺�����

int main()
{
    int n, h, m;
    printf("�������ж��ٺ����̡���һ�����������ʱ����ܵ�ʱ�䣺\n");
    scanf("%d %d %d", &n, &h, &m);

    if (m % h == 0)
    {
        //���ʱ��ոճ���
        n = n - m / h;
    }
    else
    {
        //���ʱ�䲻�ܳ���������Ҫ���һƿ
        n = n - (m / h + 1);
    }
    printf("%d\n", n);
	return 0;
}
*/


/*
����
    ����һ��������f, ��ʾ�����¶�, �����Ӧ�������¶�c , c=5/9*(f-32)
����������
    ����һ��������f(1 <= f<= 100000)
���������
    ���������,����3λС��
*/

int main()
{
    float temperature = 0.0;
    float get = 0.0;
    printf("�����뻪�ϻ����¶ȣ�\n");
    scanf("%f", &temperature);

    get = 5.0 / 9 * (temperature - 32); //�������϶�ת�¶�
    printf("%.3f\n", get);
    return 0;
}