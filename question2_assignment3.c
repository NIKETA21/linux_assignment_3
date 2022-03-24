
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
void* canc(void* ptr)
{
	printf("NIketadubey\n");
	pthread_cancel (pthread_self());
	return 0;
	
}
int main()
{
	pthread_t th;
	pthread_create(&th, NULL , canc, NULL);
	//pthread_join(th , NULL);
	return 0;
	
}
