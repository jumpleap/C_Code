#define _CRT_SECURE_NO_WARNINGS
#include<unistd.h> 
#include <stdio.h>

int main()
{
	pid_t pid;
	pid = fork();//创建进程
	if (pid < 0)
	{
		printf("Create process fail\n");
	}
	else if (pid == 0)//子进程
	{
		printf("Child process success: %d\n", getpid());
	}
	else//父进程
	{
		printf("Child process success : %d\n", getpid());
	}
	return 0;
}