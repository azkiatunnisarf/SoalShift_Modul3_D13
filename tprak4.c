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
/*

#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

int faktorial(int N){
        if(N==0){
        return 1;
        }
        else{
        return N * faktorial (N-1);
        }
}

int main(){
        pthread_t thread[10];
        int a;
        int index[10];
        int jmlh_index=0;
        while(1){

        }
}*/
