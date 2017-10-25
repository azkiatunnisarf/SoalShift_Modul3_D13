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
