#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>

void* calls(void* ptr)
{
	printf("In function \n thread id = %d \n", pthread_self());
	pthread_exit(NULL);
	return 0;
}

int main()
{
	pthread_t thread ;
	int pid_a = getpid();//getting process id and stroing in a variable
	printf("process id is : %d \n", pid_a);
	
	pthread_create(&thread, NULL, calls, NULL);
	printf("in main \n thread id = %d\n", thread);
	pthread_join(thread, NULL);
	return 0;
}
