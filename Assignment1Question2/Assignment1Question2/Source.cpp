#include <sys/types.h>
#include <stdio.h>
//#include <unistd.h>
#define SIZE 5
int nums[SIZE] = { 0,1,2,3,4 };

typedef unsigned int pid_t;

pid_t fork()
{
	//return 0 for fork failing to output X, return 1 for fork passing to output Y
	return 0;
}

int main()
{
	int i;
	pid_t pid;//program ID
	pid = fork();//what does this do? Probably creates a new process and stores that process's ID in pid
	if (pid == 0)//fork failed
	{
		for (i = 0; i<SIZE; i++)
		{
			nums[i] *= -i;
			printf("CHILD: %d", nums[i]); /* LINE X */
		}
	}
	else if (pid > 0)//fork didn't fail
	{
		//wait(NULL);//waits for child process to finish executing
		for (i = 0; i<SIZE; i++)
			printf("PARENT: %d", nums[i]); /* LINE Y*/
	}
	return 0;
}