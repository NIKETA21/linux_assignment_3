#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int pthread_attr_setstacksize(pthread_attr_t *tattr , int size);
int pthread_attr_getstacksize(pthread_attr_t *tattr , size_t *size);
int main()
{
pthread_attr_t tattr;
int size;
int ret, ret1 , PTHREAD_STACK_MIN;
size = (PTHREAD_STACK_MIN + 0*4000);
ret= pthread_attr_setstacksize(&tattr , size);
ret1 = pthread_attr_getstacksize(&tattr , &size);
return 0;
}
