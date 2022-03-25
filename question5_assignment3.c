#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
pthread_mutex_t locked;
int a;

//int a=0;
void procfunc()
{
	pthread_mutex_lock(&locked);
	
	int i = 0;
	a++;
	while(i <6)
	{
	
		printf("%d", a);
		sleep(3);
		
		i++;
		
		
	}
	
	printf("finished...");
	pthread_mutex_unlock(&locked);
}

int main()
{
	int error;
	pthread_t th1, th2;
	
	if(pthread_mutex_init(&locked, NULL) != 0)
	{
	
		printf("mutex creation was unsuccessful\n");
		exit(1);
		
	}
	a=0;
	
	pthread_create(&th1 , NULL , procfunc , NULL);
	pthread_create(&th2 , NULL , procfunc , NULL);
	pthread_join(th1 , NULL);
	pthread_join(th2, NULL);
	return 0;
}
