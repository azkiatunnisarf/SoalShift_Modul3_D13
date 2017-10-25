#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

pthread_t tid[12];

void* faktorial(void*arg){
unsigned long i=0;
pthread_t id=pthread_self();
if(pthread_equal(id,tid[0])){
int i,a,bil,n[13];
long int hasil;
printf("./faktorial  "); scanf("%d",&n[i]);

for(a=0;a<n[i];a++){
	hasil=1;
	for(bil=n[i];bil>=1;bil--) hasil=hasil*bil);
	printf("%d",&hasil);
	}
return NULL;
}

int main(void)
int i=0;
int err;
err=pthread_create(&(tid[i]),NULL,&faktorial,NULL);
if(err!=0){
