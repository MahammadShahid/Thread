#include<pthread.h>
#include<stdio.h>
struct arg_struct{
  int arg1;
  int arg2;
};
void *arguments(void *arguments){
struct arg_struct *args=arguments;
printf("%d\n",args->arg1);
printf("%d\n",args->arg2);
int sum=args->arg1+args->arg2;
pthread_exit(sum);
}
int main(){
   pthread_t t;
   struct arg_struct args;
   args.arg1=5;
   args.arg2=7;
   pthread_create(&t,NULL,arguments,&args);
  void *p;
   pthread_join(t,&p);
printf("%d",p);
}