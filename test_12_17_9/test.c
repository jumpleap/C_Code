#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	С���ֵİ༶������һ�����п��ԣ�����һ����3�ſ�Ŀ����ѧ�����ģ�Ӣ�
	С���ֵİ����ξ�����û��ͨ�����˵�ͬѧ�ҳ���һ�μҳ��ᣬ
	���˵ı�׼������ƽ���ֲ�����60�֣����������������æ��һ��С���ֻ᲻�ᱻ�мҳ���
����������
	һ�У�����������������ʾС���ֵ���ѧ�����ġ�Ӣ��ĳɼ������ÿո�ָ���
���������
	һ�У����С���ֻᱻ��ҳ��������YES�������������NO����
*/

int main()
{
    int math = 0, chinese = 0, english = 0;
    scanf("%d %d %d", &math, &chinese, &english);

    int avg = (math + chinese + english) / 3;
    if (avg < 60)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
	return 0;
}