#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���ڵݹ������������ǣ���C��
//A.���������������������������������ʱ�򣬵ݹ�㲻�ټ���
//B.ÿ�εݹ����֮��Խ��Խ�ӽ������������
//C.�ݹ�������޵ݹ���ȥ //���󣬵ݹ鲻�����޵�ִ����ȥ
//D.�ݹ���̫������ջ�������


//���ں����������Ͷ���˵����ȷ���ǣ���B��
//A.�����Ķ��������ں�����ʹ��֮ǰ //����ʹ��֮��
//B.�������뱣֤��������ʹ��
//C.����������ʹ��֮��Ҳ���Բ����� //�������������ʹ��
//D.��������������˵����������ôʵ�ֵ� //�����Ķ���


//��������ݹ麯�������ú���Fun(2)������ֵ�Ƕ���
//int fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * fun(n + 1);
//}
//
//int main()
//{
//	printf("%d", fun(2));//16
//	return 0;
//}



//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������

/*
//1���ݹ�ʵ��
int Fib(int n)
{
	//�ж�n <= 2�����
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);//���еݹ����
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int res = Fib(n);
	printf("%d\n", res);
	return 0;
}
*/

//ѭ��ʵ��
//int Fib(int n)
//{
//	int i = 1;
//	int j = 1;
//	int ret = 0;
//
//	//�ж�n<=2�����
//	if (n <= 2)
//		return 1;
//
//	while (n >= 3)
//	{
//		ret = i + j;//ret��n��쳲�������ֵ
//		i = j;
//		j = ret;
//		n--;//����ѭ��
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int res = Fib(n);
//	printf("%d\n", res);
//	return 0;
//}


//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
//int my_pow(int n, int k)
//{
//	//��ֹ����
//	if (k < 1)
//		return 1;
//	else
//		return n * my_pow(n, k - 1); //�ݹ鲿��
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int res = my_pow(n, k);
//	printf("%d\n", res);
//	return 0;
//}


//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19

int DigtSum(int n)
{
	//����10�Ĳ���
	if (n > 9)
		return n % 10 + DigtSum(n / 10);
	else
		return n % 10;//��λ�����
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int res = DigtSum(n);
	printf("%d\n", res);
	return 0;
}