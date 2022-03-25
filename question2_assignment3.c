
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
void* canc(void* ptr)
{
	int i, a=0;
	pthread_t thread_id ;
	thread_id =  pthread_self();
	
	for(i=0, i<6;i++)
	{	 
	printf("NIketadubey\n");
	a++;
	}
	if (a==4)
	{	pritnf("pthread is cancel\n");
		
	 	pthread_cancel (pthread_self());
	}
	return 0;
	
}
int main()
{
	pthread_t th;
	printf("create the thread\n");
	       
	pthread_create(&th, NULL , canc, NULL);
	pthread_join(th , NULL);
	 pritnf("back to main\n");
	return 0;
	
}
