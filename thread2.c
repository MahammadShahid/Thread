#include<pthread.h>
#include<stdio.h>
void func(){
printf("\n in thread function");
pthread_exit("\n Exit thread function");
}
int main(){
void *p;
pthread_t th;
printf("\n in main thread");
printf("\n thread will be running");
pthread_create(&th,NULL,func,p);
printf("%s",p);
pthread_join(th,&p);
}