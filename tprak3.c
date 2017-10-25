#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

pthread_t tid[4];

void* aidiil(void *arg){
unsigned long i=0;
pthread_id = pthread_self();
int lohan=100,kepiting=100;

if(pthread_equal(id,tid[0])){
	lohan-=15;
	sleep(10);
	}
else if(pthread_equalIid,tid[1])){
	kepiting-=10;
	sleep(20);
	}
else if(pthread_equal(id,tid[2])){
	lohan+=10;
	sleep(2);
	}
else if(pthread_equal(id,tid[2])){
	kepiting+=10;
	sleep(2);
	}
if((lohan<=0 || kepiting<=0) || (lohan>100 || kepiting>100))
	break;
return NULL;
}
int main(void){
int i=0,err;
char command[30],argument[30];

while(1){
scanf("%s",command); printf("%s",command);

err=pthread_create(&(tid[0]),NULL,&aidiil,NULL);
err=pthread_create(&(tid[1]),NULL,&aidiil,NULL);

if(strcmp(command,"beri makan lohan")==0){
	err=pthread_create(&(tid[2]),NULL,&aidiil, (void*)argument);
	}
else if(strcmp(command,"beri makan kepiting")==0){
	err=pthread_create(&(tid[3],NULL,&aidiil,(void*)argument);
	}
}
return 0;
}
