#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
int global =0;
void *mythread(void *var)
{
	int *myid = (int *)var;
	++global;
	printf("thread is :%d, global : %d \n", *myid , ++global);
	
}
int main()
{
	int i ;
	pthread_t tid;
	for(i=0 ; i<4; i++)
	
	  pthread_create(&tid, NULL, mythread, (void *)&tid);
	
	pthread_exit (NULL);
	return 0;
	
}
