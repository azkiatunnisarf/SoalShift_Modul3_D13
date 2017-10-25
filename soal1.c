#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<sys/types.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

struct hawari{
	char nsnja[20];
	int jsen;
	int mark;
	};

int main(){
int shmid;
key_t key=1234;
size_t size=30;
struct hawari *Lhawari;

if((shmid=shmget(key,size,IPC_CREAT | 0666)) ==-1){
	printf("ERRORN"); return -1;
	}
if((shmdat=shmat(shmid,NULL,0))==(struct hawari*)-1){
	printf("ERRORN"); return -1;
	}
int i,j,ini;
Lhawari->mark=1;
printf("nama senjata :");
for(i=0;i<5;i++) scanf("%[^N]",Lhawari->nsnja); getchar();
for(j=0;j<5;j++) scanf("%d",&Lhawari->jsen);
fflush(stdin);
ini=strcat(Lhawari->nsnja,Lhawari->jsen);
printf("%s",ini);

while(Lhawari->mark==1){
	sleep(2);
	}
return 0;
}
