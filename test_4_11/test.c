#define _CRT_SECURE_NO_WARNINGS
#include<unistd.h> 
#include <stdio.h>

int main()
{
	pid_t pid;
	pid = fork();//��������
	if (pid < 0)
	{
		printf("Create process fail\n");
	}
	else if (pid == 0)//�ӽ���
	{
		printf("Child process success: %d\n", getpid());
	}
	else//������
	{
		printf("Child process success : %d\n", getpid());
	}
	return 0;
}