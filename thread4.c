#include<pthread.h>
#include<stdio.h>
void *func(void *arg);
int message=5;
int main(){
pthread_t th;
printf("\n in main thread");
printf("\n thread will be running");
pthread_create(&th,NULL,func,message);
void *p;
pthread_join(th,&p);
printf("\n this is join section%d",p);
}
void *func(void *arg)
{
printf("\n thread function is running . Argument was %d \n",arg);
int c=9;
int sum=c+arg;
pthread_exit(sum);
}
