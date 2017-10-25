#include <string.h>
#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
pthread_t tid[100];
void * jumlah(void *argv){
	char *cari[2];
	cari[2]=(char*)argv;
	FILE *f;
	f=fopen("Novel.txt","r");
	while(!eof(f)){
	fscanf(f,"%s",string);
	if(strcmp(string,argv)==0)
	n++;
	}
	printf("%s = %d\n",argv,n);
	return NULL;
}
