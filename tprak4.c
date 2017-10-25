
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
}

