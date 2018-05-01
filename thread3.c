#include<pthread.h>
#include<stdio.h>
void *func(void *arg);
char message[]="hello";
int main(){
pthread_t th;
printf("\n in main thread");
printf("\n thread will be running");
pthread_create(&th,NULL,func,message);
void *p;
pthread_join(th,&p);
printf("%d",p);
}
void *func(void *arg)
{
printf("\n thread function is running . Argument was %s \n",arg);
int c=9;
pthread_exit(c);
}