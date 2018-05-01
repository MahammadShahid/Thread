#include<pthread.h>
#include<stdio.h>
void func(){
printf("\n 1.in thread function");
pthread_exit("\n Exit thread function");
}
int main(){
pthread_t th;
printf("\n 2.in main thread");
printf("\n 3.thread will be running");
pthread_create(&th,NULL,func,NULL);
pthread_join(th,NULL);
}