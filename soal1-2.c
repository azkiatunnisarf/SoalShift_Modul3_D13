#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<sys/types.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

struct pembeli{
	char p_senja[20];
	int p_jml;
	int tanda;
	};

int main(){
int shmid;
key_t key=1234;
size_t size=30;
struct pembeli *Lpembeli;

if((shmid=shmget(key,size,IPC_CREAT | 0666)) ==-1){
	printf("ERRORN"); return -1;
	}
if((shmdat=shmat(shmid,NULL,0))==(struct hawari*)-1){
	printf("ERRORN"); return -1;
	}
int i,j,ini;
Lpembeli->tanda=1;
printf("nama senjata :");
for(i=0;i<5;i++) scanf("%[^N]",Lpembeli->p_senja); getchar();
for(j=0;j<5;j++) scanf("%d",&Lpembeli->p_jml);
fflush(stdin);
ini=strcat(Lpembeli->p_senja,Lpembeli->p_jml);
printf("%s",ini);

while(Lpembeli->mark==1){
	sleep(2);
	}
return 0;
}
